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

/* Recursive Subroutine */ int fpback_(doublereal *a, doublereal *z__, 
	integer *n, integer *k, doublereal *c__, integer *nest)
{
    /* System generated locals */
    integer a_dim1, a_offset, i__1, i__2;

    /* Local variables */
    integer i__ = {0}, j = {0}, l = {0}, m = {0}, i1 = {0}, k1 = {0};
    doublereal store = {0};

/*  subroutine fpback calculates the solution of the system of */
/*  equations a*c = z with a a n x n upper triangular matrix */
/*  of bandwidth k. */
/*  .. */
/*  ..scalar arguments.. */
/*  ..array arguments.. */
/*  ..local scalars.. */
/*  .. */
    /* Parameter adjustments */
    a_dim1 = *nest;
    a_offset = 1 + a_dim1;
    --c__;
    --z__;
    a -= a_offset;

    /* Function Body */
    k1 = *k - 1;
    c__[*n] = z__[*n] / a[*n + a_dim1];
    i__ = *n - 1;
    if (i__ == 0) {
	goto L30;
    }
    i__1 = *n;
    for (j = 2; j <= i__1; ++j) {
	store = z__[i__];
	i1 = k1;
	if (j <= k1) {
	    i1 = j - 1;
	}
	m = i__;
	i__2 = i1;
	for (l = 1; l <= i__2; ++l) {
	    ++m;
	    store -= c__[m] * a[i__ + (l + 1) * a_dim1];
/* L10: */
	}
	c__[i__] = store / a[i__ + a_dim1];
	--i__;
/* L20: */
    }
L30:
    return 0;
} /* fpback_ */

