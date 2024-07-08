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

integer func_norec__(void)
{
    /* System generated locals */
    integer ret_val;

    /* Local variables */
    static integer x;

    x = 1;
    ret_val = x;
    return ret_val;
} /* func_norec__ */

integer func_rec__(void)
{
    /* System generated locals */
    integer ret_val;

    /* Local variables */
    integer x = {0};

    x = 1;
    ret_val = x;
    return ret_val;
} /* func_rec__ */

/* Subroutine */ int subr_norec__(void)
{
    static integer x;

    x = 1;
    return 0;
} /* subr_norec__ */

/* Recursive Subroutine */ int subr_rec__(void)
{
    integer x = {0};

    x = 1;
    return 0;
} /* subr_rec__ */
