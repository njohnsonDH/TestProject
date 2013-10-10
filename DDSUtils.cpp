#include <stdarg.h>
#ifdef WIN32
    #include <windows.h>
#endif

#include "DDSUtils.h"

namespace DDSUtils
{
//------------------------------------------------------------------------------
// s_sprintf
//>
#ifdef WIN32
#define vsnprintf vsnprintf_s
#endif
std::string s_sprintf(const char* fmt, ...)
{
    if (fmt == NULL)    
        return "";

    const unsigned short BUFFSIZE = 4096;
    char buffer[BUFFSIZE+1] = {0};

    // First, init ptr to arg list. Then, populate buffer
    // with strings from arg list given the specified format.
    va_list args;
    va_start(args, fmt);
    if (vsnprintf_s(buffer, BUFFSIZE, BUFFSIZE-1, fmt, args) < 0)
        return "";
    va_end(args);

// these are some comments
// just to see a diff with
// the previous version

    return buffer;
}

}
