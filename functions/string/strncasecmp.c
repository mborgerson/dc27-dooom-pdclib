/* int strcasecmp(const char *s1, const char *s2);
   int strncasecmp(const char *s1, const char *s2, size_t n);

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#include <string.h>
#include <ctype.h>

#ifndef REGTEST

int strncasecmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    char s1_c, s2_c;

    for (i = 0; i < n; i++) {
        s1_c = toupper(*s1);
        s2_c = toupper(*s2);
        if ((s1_c == '\x00') || (s1_c != s2_c)) {
            return ( (unsigned char)s1_c - (unsigned char)s2_c );
        }
        s1++;
        s2++;
    }

    return 0;
}

int strcasecmp(const char *s1, const char *s2)
{
    size_t s1_len = strlen(s1);
    size_t s2_len = strlen(s2);
    return strncasecmp(s1, s2, s1_len > s2_len ? s1_len : s2_len);
}

#endif

#ifdef TEST

#include "_PDCLIB_test.h"

int main( void )
{
    char cmpabcde[] = "abcde";
    char cmpabcd_[] = "abcd\xfc";
    char empty[] = "";
    TESTCASE( strcmp( abcde, cmpabcde ) == 0 );
    TESTCASE( strcmp( abcde, abcdx ) < 0 );
    TESTCASE( strcmp( abcdx, abcde ) > 0 );
    TESTCASE( strcmp( empty, abcde ) < 0 );
    TESTCASE( strcmp( abcde, empty ) > 0 );
    TESTCASE( strcmp( abcde, cmpabcd_ ) < 0 );
    return TEST_RESULTS;
}

#endif
