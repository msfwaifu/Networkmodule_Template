/*
    Initial author: (https://github.com/)Convery for Ayria.se
    License: MIT
    Started: 2016-10-20
    Notes:
        Creates a new string from variadic arguments.
        va("%i", 42) == "42"
*/

#pragma once

/*
    This class provides two specialized versions of the function.
    The generic version will call one of these based on length.
    There is however a performance penalty for the generic.
*/

namespace AYRIA
{
    const char *va(const char *Format, ...);
    const char *va_small(const char *Format, ...);
    const char *va_large(const char *Format, ...);
}
