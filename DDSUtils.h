#ifndef UTILITIES_H
#define UTILITIES_H

#include <string>

namespace DDSUtils
{
std::string s_sprintf(const char* fmt, ...);
int waitms(unsigned int millisecs);
}
#endif
