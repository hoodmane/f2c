      subroutine var_array_args(n, m, arr)
      integer a, b, arr(n + m, n - m)

      a = 1
      b = 7

      arr(a, b) = 7
      end

      subroutine var_array_vars2(x, y)
      integer a, b, arr(x + y, y - x * 3)

      a = 1
      b = 7

      arr(a, b) = 7
      end


