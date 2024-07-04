/*
   You must link the resulting object file with libf2c:
	on Microsoft Windows system, link with libf2c.lib;
	on Linux or Unix systems, link with .../path/to/libf2c.a -lm
	or, if you install libf2c.a in a standard place, with -lf2c -lm
	-- in that order, at the end of the command line, as in
		cc *.o -lf2c -lm
	Source for libf2c is in /netlib/f2c/libf2c.zip, e.g.,

		http://www.netlib.org/f2c/libf2c.zip
*/

#include "f2c.h"

/* Subroutine */ int var_array_args__(integer *n, integer *m, integer *arr)
{
    /* System generated locals */
    integer arr_dim1, arr_offset;

    /* Local variables */
    static integer a, b;

    /* Parameter adjustments */
    arr_dim1 = (*n + *m);
    arr_offset = 1 + arr_dim1;
    arr -= arr_offset;

    /* Function Body */
    a = 1;
    b = 7;
    arr[a + b * arr_dim1] = 7;
    return 0;
} /* var_array_args__ */

/* Subroutine */ int var_array_vars2__(real *x, real *y)
{
    /* System generated locals */
    integer arr_dim1, arr_dim2, arr_offset;

    /* Local variables */
    static integer a, b, arr[(integer) (*x + *y) * (integer) (*y - *x * 3)];

    /* Parameter adjustments */
    arr_dim1 = (integer) (*x + *y);
    arr_dim2 = (integer) (*y - *x * 3);
    arr_offset = 1 + arr_dim1;

    /* Function Body */
    a = 1;
    b = 7;
    arr[a + b * arr_dim1 - arr_offset] = 7;
    return 0;
} /* var_array_vars2__ */

