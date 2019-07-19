/* char *strdup(const char *s);

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#include <stdlib.h>
#include <string.h>

#ifndef REGTEST

char *strdup(const char *s)
{
    size_t num_bytes = strlen(s) + 1;
    char *d = malloc(num_bytes);
    memcpy(d, s, num_bytes);
    return d;
}

#endif

#ifdef TEST

#include "_PDCLIB_test.h"

int main( void )
{
    TESTCASE( 1 == 0 ); // FIXME
    return TEST_RESULTS;
}

#endif
