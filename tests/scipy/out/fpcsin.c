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

/* Recursive Subroutine */ int fpcsin_(doublereal *a, doublereal *b, 
	doublereal *par, doublereal *sia, doublereal *coa, doublereal *sib, 
	doublereal *cob, doublereal *ress, doublereal *resc)
{
    /* System generated locals */
    doublereal d__1;

    /* Local variables */
    integer i__ = {0}, j = {0};
    doublereal b2 = {0}, b4 = {0}, f1 = {0}, f2 = {0}, ab = {0}, ai = {0}, 
	    ab4 = {0}, fac = {0}, one = {0}, eps = {0}, six = {0}, two = {0}, 
	    alfa = {0}, beta = {0}, three = {0}, quart = {0};

/*  fpcsin calculates the integrals ress=integral((b-x)**3*sin(par*x)) */
/*  and resc=integral((b-x)**3*cos(par*x)) over the interval (a,b), */
/*  given sia=sin(par*a),coa=cos(par*a),sib=sin(par*b) and cob=cos(par*b) */
/*  .. */
/*  ..scalar arguments.. */
/*  ..local scalars.. */
/*  ..function references.. */
/*  .. */
    one = 1.f;
    two = 2.f;
    three = 3.f;
    six = 6.f;
    quart = .25f;
    eps = 1e-10f;
    ab = *b - *a;
/* Computing 4th power */
    d__1 = ab, d__1 *= d__1;
    ab4 = d__1 * d__1;
    alfa = ab * *par;
/* the way of calculating the integrals ress and resc depends on */
/* the value of alfa = (b-a)*par. */
    if (abs(alfa) <= one) {
	goto L100;
    }
/* integration by parts. */
    beta = one / alfa;
/* Computing 2nd power */
    d__1 = beta;
    b2 = d__1 * d__1;
/* Computing 2nd power */
    d__1 = b2;
    b4 = six * (d__1 * d__1);
    f1 = three * b2 * (one - two * b2);
    f2 = beta * (one - six * b2);
    *ress = ab4 * (*coa * f2 + *sia * f1 + *sib * b4);
    *resc = ab4 * (*coa * f1 - *sia * f2 + *cob * b4);
    goto L400;
/* ress and resc are found by evaluating a series expansion. */
L100:
    fac = quart;
    f1 = fac;
    f2 = 0.f;
    i__ = 4;
    for (j = 1; j <= 5; ++j) {
	++i__;
	ai = (doublereal) i__;
	fac = fac * alfa / ai;
	f2 += fac;
	if (abs(fac) <= eps) {
	    goto L300;
	}
	++i__;
	ai = (doublereal) i__;
	fac = -fac * alfa / ai;
	f1 += fac;
	if (abs(fac) <= eps) {
	    goto L300;
	}
/* L200: */
    }
L300:
    *ress = ab4 * (*coa * f2 + *sia * f1);
    *resc = ab4 * (*coa * f1 - *sia * f2);
L400:
    return 0;
} /* fpcsin_ */

