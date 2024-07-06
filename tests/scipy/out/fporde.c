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

/* Recursive Subroutine */ int fporde_(doublereal *x, doublereal *y, integer *
	m, integer *kx, integer *ky, doublereal *tx, integer *nx, doublereal *
	ty, integer *ny, integer *nummer, integer *index, integer *nreg)
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    integer i__ = {0}, k = {0}, l = {0}, k1 = {0}, l1 = {0}, im = {0};
    doublereal xi = {0}, yi = {0};
    integer kx1 = {0}, ky1 = {0}, num = {0}, nyy = {0}, nk1x = {0}, nk1y = {0}
	    ;

/*  subroutine fporde sorts the data points (x(i),y(i)),i=1,2,...,m */
/*  according to the panel tx(l)<=x<tx(l+1),ty(k)<=y<ty(k+1), they belong */
/*  to. for each panel a stack is constructed  containing the numbers */
/*  of data points lying inside; index(j),j=1,2,...,nreg points to the */
/*  first data point in the jth panel while nummer(i),i=1,2,...,m gives */
/*  the number of the next data point in the panel. */
/*  .. */
/*  ..scalar arguments.. */
/*  ..array arguments.. */
/*  ..local scalars.. */
/*  .. */
    /* Parameter adjustments */
    --nummer;
    --y;
    --x;
    --tx;
    --ty;
    --index;

    /* Function Body */
    kx1 = *kx + 1;
    ky1 = *ky + 1;
    nk1x = *nx - kx1;
    nk1y = *ny - ky1;
    nyy = nk1y - *ky;
    i__1 = *nreg;
    for (i__ = 1; i__ <= i__1; ++i__) {
	index[i__] = 0;
/* L10: */
    }
    i__1 = *m;
    for (im = 1; im <= i__1; ++im) {
	xi = x[im];
	yi = y[im];
	l = kx1;
	l1 = l + 1;
L20:
	if (xi < tx[l1] || l == nk1x) {
	    goto L30;
	}
	l = l1;
	l1 = l + 1;
	goto L20;
L30:
	k = ky1;
	k1 = k + 1;
L40:
	if (yi < ty[k1] || k == nk1y) {
	    goto L50;
	}
	k = k1;
	k1 = k + 1;
	goto L40;
L50:
	num = (l - kx1) * nyy + k - *ky;
	nummer[im] = index[num];
	index[num] = im;
/* L60: */
    }
    return 0;
} /* fporde_ */

