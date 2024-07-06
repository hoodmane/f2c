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

/* Recursive Subroutine */ int pardtc_(doublereal *tx, integer *nx, 
	doublereal *ty, integer *ny, doublereal *c__, integer *kx, integer *
	ky, integer *nux, integer *nuy, doublereal *newc, integer *ier)
{
    /* System generated locals */
    integer i__1, i__2, i__3;

    /* Local variables */
    integer i__ = {0}, j = {0}, m = {0}, l1 = {0}, l2 = {0}, m0 = {0}, m1 = {
	    0};
    doublereal ak = {0};
    integer nc = {0}, lx = {0}, ly = {0}, kx1 = {0}, ky1 = {0};
    doublereal fac = {0};
    integer nxx = {0}, nyy = {0}, nkx1 = {0}, nky1 = {0}, newkx = {0}, newky =
	     {0};

/*  subroutine pardtc takes the knots and coefficients of a bivariate */
/*  spline, and returns the coefficients for a new bivariate spline that */
/*  evaluates the partial derivative (order nux, nuy) of the original */
/*  spline. */

/*  calling sequence: */
/*     call pardtc(tx,nx,ty,ny,c,kx,ky,nux,nuy,newc,ier) */

/*  input parameters: */
/*   tx    : real array, length nx, which contains the position of the */
/*           knots in the x-direction. */
/*   nx    : integer, giving the total number of knots in the x-direction */
/*           (hidden) */
/*   ty    : real array, length ny, which contains the position of the */
/*           knots in the y-direction. */
/*   ny    : integer, giving the total number of knots in the y-direction */
/*           (hidden) */
/*   c     : real array, length (nx-kx-1)*(ny-ky-1), which contains the */
/*           b-spline coefficients. */
/*   kx,ky : integer values, giving the degrees of the spline. */
/*   nux   : integer values, specifying the order of the partial */
/*   nuy     derivative. 0<=nux<kx, 0<=nuy<ky. */

/*  output parameters: */
/*   newc  : real array containing the coefficients of the derivative. */
/*           the dimension is (nx-nux-kx-1)*(ny-nuy-ky-1). */
/*   ier   : integer error flag */
/*    ier=0 : normal return */
/*    ier=10: invalid input data (see restrictions) */

/*  restrictions: */
/*   0 <= nux < kx, 0 <= nuy < kyc */

/*  other subroutines required: */
/*    none */

/*  references : */
/*   de boor c  : on calculating with b-splines, j. approximation theory */
/*                6 (1972) 50-62. */
/*   dierckx p. : curve and surface fitting with splines, monographs on */
/*                numerical analysis, oxford university press, 1993. */

/*  based on the subroutine "parder" by Paul Dierckx. */

/*  author : */
/*    Cong Ma */
/*    Department of Mathematics and Applied Mathematics, U. of Cape Town */
/*    Cross Campus Road, Rondebosch 7700, Cape Town, South Africa. */
/*    e-mail : cong.ma@uct.ac.za */

/*  latest update : may 2019 */

/*  ..scalar arguments.. */
/*  ..array arguments.. */
/*  ..local scalars.. */
/*  .. */
/*  before starting computations a data check is made. if the input data */
/*  are invalid control is immediately repassed to the calling program. */
    /* Parameter adjustments */
    --tx;
    --ty;
    --newc;
    --c__;

    /* Function Body */
    *ier = 10;
    if (*nux < 0 || *nux >= *kx) {
	goto L400;
    }
    if (*nuy < 0 || *nuy >= *ky) {
	goto L400;
    }
    kx1 = *kx + 1;
    ky1 = *ky + 1;
    nkx1 = *nx - kx1;
    nky1 = *ny - ky1;
    nc = nkx1 * nky1;
    *ier = 0;
    nxx = nkx1;
    nyy = nky1;
    newkx = *kx;
    newky = *ky;
/*  the partial derivative of order (nux,nuy) of a bivariate spline of */
/*  degrees kx,ky is a bivariate spline of degrees kx-nux,ky-nuy. */
/*  we calculate the b-spline coefficients of this spline */
/*  that is to say newkx = kx - nux, newky = ky - nuy */
    i__1 = nc;
    for (i__ = 1; i__ <= i__1; ++i__) {
	newc[i__] = c__[i__];
/* L70: */
    }
    if (*nux == 0) {
	goto L200;
    }
    lx = 1;
    i__1 = *nux;
    for (j = 1; j <= i__1; ++j) {
	ak = (doublereal) newkx;
	--nxx;
	l1 = lx;
	m0 = 1;
	i__2 = nxx;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    ++l1;
	    l2 = l1 + newkx;
	    fac = tx[l2] - tx[l1];
	    if (fac <= 0.f) {
		goto L90;
	    }
	    i__3 = nyy;
	    for (m = 1; m <= i__3; ++m) {
		m1 = m0 + nyy;
		newc[m0] = (newc[m1] - newc[m0]) * ak / fac;
		++m0;
/* L80: */
	    }
L90:
	    ;
	}
	++lx;
	--newkx;
/* L100: */
    }
L200:
    if (*nuy == 0) {
	goto L400;
    }
/* orig: if(nuy.eq.0) go to 300 */
    ly = 1;
    i__1 = *nuy;
    for (j = 1; j <= i__1; ++j) {
	ak = (doublereal) newky;
	--nyy;
	l1 = ly;
	i__2 = nyy;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    ++l1;
	    l2 = l1 + newky;
	    fac = ty[l2] - ty[l1];
	    if (fac <= 0.f) {
		goto L220;
	    }
	    m0 = i__;
	    i__3 = nxx;
	    for (m = 1; m <= i__3; ++m) {
		m1 = m0 + 1;
		newc[m0] = (newc[m1] - newc[m0]) * ak / fac;
		m0 += nky1;
/* L210: */
	    }
L220:
	    ;
	}
	++ly;
	--newky;
/* L230: */
    }
    m0 = nyy;
    m1 = nky1;
    i__1 = nxx;
    for (m = 2; m <= i__1; ++m) {
	i__2 = nyy;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    ++m0;
	    ++m1;
	    newc[m0] = newc[m1];
/* L240: */
	}
	m1 += *nuy;
/* L250: */
    }
/* 300  iwx = 1+nxx*nyy */
/*     iwy = iwx+mx*(kx1-nux) */

/* from parder.f: */
/*     call fpbisp(tx(nux+1),nx-2*nux,ty(nuy+1),ny-2*nuy,newc,newkx,newky, */
/*    * x,mx,y,my,z,newc(iwx),newc(iwy),iwrk(1),iwrk(mx+1)) */

/* from bispev.f: */
/*     call fpbisp(tx,       nx,      ty,       ny,      c,   kx,   ky, */
/*    * x,mx,y,my,z,wrk(1),   wrk(iw),  iwrk(1),iwrk(mx+1)) */

/* from fpbisp.f: */
/*          fpbisp(tx,       nx,      ty,       ny,      c,   kx,   ky, */
/*    * x,mx,y,my,z,wx,       wy,       lx,     ly) */
L400:
    return 0;
} /* pardtc_ */

