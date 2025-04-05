#include "functions.h"
#include <iostream>
#include <string>

std::string OS_Info() 
{
    #ifdef _WIN64 
        return "OS: Windows 64 bit";
    #elif defined(_WIN32) or defined(__WINDOWS__ )
        return "OS: Windows 32 bit";
    #elif __linux__
        return "OS: Linux";
    #elif __FREEBSD__
        return "OS: FreeBSD";
    #else 
        return "OS: Unknown";
    #endif
}

std::string Architecture_Info() 
{
    #if defined(_M_IX86) or defined(__INTEL__) or defined(__i386__)
        return "INTEL 32 bit architecture";
    #elif _M_X64 
        return "INTEL 64 bit architecture";
    #elif defined(__amd64__) or defined(__x86_64__)
        return "AMD architecture x86 64 bit";
    #endif
}

std::string Compiler_Info() 
{
    #ifdef _MSVC_
        return "Microsoft Visual Studio compiler version: " + _MSC_VER + std::string(" C++ version: " ) + std::to_string(__cplusplus);
    #elif __GNUC__
        return std::string("GNU compiler version: ") + __VERSION__ + std::string("; C++ version: ") + std::to_string(__cplusplus) ;
    #elif _INTEL_COMPILER_
        return std::string("Intel compiler version: ") + __INTEL_COMPILER + std::string("; C++ version:") + std::to_string(__cplusplus);
    #elif __clang__
        return std::string("Clang compiler version: ") + __clang_version__ + std::string("; C++ version:") + std::to_string(__cplusplus);
    #endif
}

std::string Pointer_Size() 
{
    return std::string("Pointer size: ") + std::to_string(sizeof(void*)) + " bytes";
}