/* getenv( const char * )

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

/* This is an example implementation of getenv() fit for use with POSIX kernels.
*/

#include <string.h>
#include <stdlib.h>

#ifndef REGTEST

extern char * * environ;

#include <assert.h>

/* change or add an environment variable */
int putenv(char *string)
{
    assert(0);
    return 0;
}

#endif

#ifdef TEST

#include "_PDCLIB_test.h"

int main( void )
{
    TESTCASE( strcmp( getenv( "SHELL" ), "/bin/bash" ) == 0 );
    /* TESTCASE( strcmp( getenv( "SHELL" ), "/bin/sh" ) == 0 ); */
    return TEST_RESULTS;
}

#endif
