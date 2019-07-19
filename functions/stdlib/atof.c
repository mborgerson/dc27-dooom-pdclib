/* double atof(const char *nptr);

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#include <stdlib.h>
#include <assert.h>

#ifndef REGTEST

double atof(const char *nptr)
{
	assert(0); // FIXME
    return 0.0;
}

#endif

#ifdef TEST

#include "_PDCLIB_test.h"

int main( void )
{
    /* no tests for a simple wrapper */
    return TEST_RESULTS;
}

#endif
