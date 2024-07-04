import pytest

from pathlib import Path
from subprocess import run

TEST_DIR = Path(__file__).parent
F2C = TEST_DIR.parent / "src/f2c"


def f2c_input(outdir: Path, input: Path) -> Path:
    res = run([F2C, input.resolve()], cwd=outdir, check=False, capture_output=True)
    if res.returncode:
        print("f2c failed", input.name)
        print(res.stdout)
        print(res.stderr)
        assert False
    return outdir / (input.with_suffix(".c")).name


def clean_file(file: Path) -> None:
    run(["sed", "-i", "s!.* translated by f2c .*!/*!", file], capture_output=True)


def diff_output(out, expected):
    clean_file(out)
    clean_file(expected)
    res = run(["git", "diff", "--no-index", expected, out], capture_output=True)
    if res.returncode != 0:
        print(res.stdout)
        assert False


def load_cases(path: Path):
    return (
        pytest.param(x, id=x.with_suffix("").name) for x in (path / "in").glob("*.f")
    )


def do_test(tmp_path: Path, in_path: Path):
    result = f2c_input(tmp_path, in_path)
    expected = in_path.parents[1] / "out" / in_path.with_suffix(".c").name
    diff_output(result, expected)


@pytest.mark.parametrize("in_path", load_cases(TEST_DIR / "manual"))
def test_f2c_manual(tmp_path: Path, in_path: Path):
    do_test(tmp_path, in_path)


@pytest.mark.parametrize("in_path", load_cases(TEST_DIR / "scipy"))
def test_f2c_scipy(tmp_path, in_path):
    do_test(tmp_path, in_path)
