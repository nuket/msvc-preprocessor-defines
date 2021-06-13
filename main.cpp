// Print Microsoft Visual C / C++ Preprocessor Defines
// Copyright (c) 2021 Max Vilimpoc
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#include <stdio.h>

#define xstr(s) str(s)
#define str(s) #s

static const char * const MSVC_DEFINES = ""

    #ifdef __cplusplus
    "__cplusplus              : " xstr(__cplusplus) "\n"
    #else
    "__cplusplus              : " "Not Defined" "\n"
    #endif

    #ifdef __DATE__
    "__DATE__                 : " xstr(__DATE__) "\n"
    #else
    "__DATE__                 : " "Not Defined" "\n"
    #endif

    #ifdef __FILE__
    "__FILE__                 : " xstr(__FILE__) "\n"
    #else
    "__FILE__                 : " "Not Defined" "\n"
    #endif

    #ifdef __LINE__
    "__LINE__                 : " xstr(__LINE__) "\n"
    #else
    "__LINE__                 : " "Not Defined" "\n"
    #endif

    #ifdef __STDC__
    "__STDC__                 : " xstr(__STDC__) "\n"
    #else
    "__STDC__                 : " "Not Defined" "\n"
    #endif

    #ifdef __STDC_HOSTED__
    "__STDC_HOSTED__          : " xstr(__STDC_HOSTED__) "\n"
    #else
    "__STDC_HOSTED__          : " "Not Defined" "\n"
    #endif

    #ifdef __STDC_NO_ATOMICS__
    "__STDC_NO_ATOMICS__      : " xstr(__STDC_NO_ATOMICS__) "\n"
    #else
    "__STDC_NO_ATOMICS__      : " "Not Defined" "\n"
    #endif

    #ifdef __STDC_NO_COMPLEX__
    "__STDC_NO_COMPLEX__      : " xstr(__STDC_NO_COMPLEX__) "\n"
    #else
    "__STDC_NO_COMPLEX__      : " "Not Defined" "\n"
    #endif

    #ifdef __STDC_NO_THREADS__
    "__STDC_NO_THREADS__      : " xstr(__STDC_NO_THREADS__) "\n"
    #else
    "__STDC_NO_THREADS__      : " "Not Defined" "\n"
    #endif

    #ifdef __STDC_NO_VLA__
    "__STDC_NO_VLA__          : " xstr(__STDC_NO_VLA__) "\n"
    #else
    "__STDC_NO_VLA__          : " "Not Defined" "\n"
    #endif

    #ifdef __STDC_VERSION__
    "__STDC_VERSION__         : " xstr(__STDC_VERSION__) "\n"
    #else
    "__STDC_VERSION__         : " "Not Defined" "\n"
    #endif

    #ifdef __STDCPP_THREADS__
    "__STDCPP_THREADS__       : " xstr(__STDCPP_THREADS__) "\n"
    #else
    "__STDCPP_THREADS__       : " "Not Defined" "\n"
    #endif

    #ifdef __TIME__
    "__TIME__                 : " xstr(__TIME__) "\n"
    #else
    "__TIME__                 : " "Not Defined" "\n"
    #endif

    #ifdef __ATOM__
    "__ATOM__                 : " xstr(__ATOM__) "\n"
    #else
    "__ATOM__                 : " "Not Defined" "\n"
    #endif

    #ifdef __AVX__
    "__AVX__                  : " xstr(__AVX__) "\n"
    #else
    "__AVX__                  : " "Not Defined" "\n"
    #endif

    #ifdef __AVX2__
    "__AVX2__                 : " xstr(__AVX2__) "\n"
    #else
    "__AVX2__                 : " "Not Defined" "\n"
    #endif

    #ifdef __AVX512BW__
    "__AVX512BW__             : " xstr(__AVX512BW__) "\n"
    #else
    "__AVX512BW__             : " "Not Defined" "\n"
    #endif

    #ifdef __AVX512CD__
    "__AVX512CD__             : " xstr(__AVX512CD__) "\n"
    #else
    "__AVX512CD__             : " "Not Defined" "\n"
    #endif

    #ifdef __AVX512DQ__
    "__AVX512DQ__             : " xstr(__AVX512DQ__) "\n"
    #else
    "__AVX512DQ__             : " "Not Defined" "\n"
    #endif

    #ifdef __AVX512F__
    "__AVX512F__              : " xstr(__AVX512F__) "\n"
    #else
    "__AVX512F__              : " "Not Defined" "\n"
    #endif

    #ifdef __AVX512VL__
    "__AVX512VL__             : " xstr(__AVX512VL__) "\n"
    #else
    "__AVX512VL__             : " "Not Defined" "\n"
    #endif

    #ifdef _CHAR_UNSIGNED
    "_CHAR_UNSIGNED           : " xstr(_CHAR_UNSIGNED) "\n"
    #else
    "_CHAR_UNSIGNED           : " "Not Defined" "\n"
    #endif

    #ifdef __CLR_VER
    "__CLR_VER                : " xstr(__CLR_VER) "\n"
    #else
    "__CLR_VER                : " "Not Defined" "\n"
    #endif

    #ifdef _CONTROL_FLOW_GUARD
    "_CONTROL_FLOW_GUARD      : " xstr(_CONTROL_FLOW_GUARD) "\n"
    #else
    "_CONTROL_FLOW_GUARD      : " "Not Defined" "\n"
    #endif

    #ifdef __COUNTER__
    "__COUNTER__              : " xstr(__COUNTER__) "\n"
    #else
    "__COUNTER__              : " "Not Defined" "\n"
    #endif

    #ifdef __cplusplus_cli
    "__cplusplus_cli          : " xstr(__cplusplus_cli) "\n"
    #else
    "__cplusplus_cli          : " "Not Defined" "\n"
    #endif

    #ifdef __cplusplus_winrt
    "__cplusplus_winrt        : " xstr(__cplusplus_winrt) "\n"
    #else
    "__cplusplus_winrt        : " "Not Defined" "\n"
    #endif

    #ifdef _CPPRTTI
    "_CPPRTTI                 : " xstr(_CPPRTTI) "\n"
    #else
    "_CPPRTTI                 : " "Not Defined" "\n"
    #endif

    #ifdef _CPPUNWIND
    "_CPPUNWIND               : " xstr(_CPPUNWIND) "\n"
    #else
    "_CPPUNWIND               : " "Not Defined" "\n"
    #endif

    #ifdef _DEBUG
    "_DEBUG                   : " xstr(_DEBUG) "\n"
    #else
    "_DEBUG                   : " "Not Defined" "\n"
    #endif

    #ifdef _DLL
    "_DLL                     : " xstr(_DLL) "\n"
    #else
    "_DLL                     : " "Not Defined" "\n"
    #endif

    #ifdef __FUNCDNAME__
    "__FUNCDNAME__            : " xstr(__FUNCDNAME__) "\n"
    #else
    "__FUNCDNAME__            : " "Not Defined" "\n"
    #endif

    #ifdef __FUNCSIG__
    "__FUNCSIG__              : " xstr(__FUNCSIG__) "\n"
    #else
    "__FUNCSIG__              : " "Not Defined" "\n"
    #endif

    #ifdef __FUNCTION__
    "__FUNCTION__             : " xstr(__FUNCTION__) "\n"
    #else
    "__FUNCTION__             : " "Not Defined" "\n"
    #endif

    #ifdef _INTEGRAL_MAX_BITS
    "_INTEGRAL_MAX_BITS       : " xstr(_INTEGRAL_MAX_BITS) "\n"
    #else
    "_INTEGRAL_MAX_BITS       : " "Not Defined" "\n"
    #endif

    #ifdef __INTELLISENSE__
    "__INTELLISENSE__         : " xstr(__INTELLISENSE__) "\n"
    #else
    "__INTELLISENSE__         : " "Not Defined" "\n"
    #endif

    #ifdef _ISO_VOLATILE
    "_ISO_VOLATILE            : " xstr(_ISO_VOLATILE) "\n"
    #else
    "_ISO_VOLATILE            : " "Not Defined" "\n"
    #endif

    #ifdef _KERNEL_MODE
    "_KERNEL_MODE             : " xstr(_KERNEL_MODE) "\n"
    #else
    "_KERNEL_MODE             : " "Not Defined" "\n"
    #endif

    #ifdef _M_AMD64
    "_M_AMD64                 : " xstr(_M_AMD64) "\n"
    #else
    "_M_AMD64                 : " "Not Defined" "\n"
    #endif

    #ifdef _M_ARM
    "_M_ARM                   : " xstr(_M_ARM) "\n"
    #else
    "_M_ARM                   : " "Not Defined" "\n"
    #endif

    #ifdef _M_ARM_ARMV7VE
    "_M_ARM_ARMV7VE           : " xstr(_M_ARM_ARMV7VE) "\n"
    #else
    "_M_ARM_ARMV7VE           : " "Not Defined" "\n"
    #endif

    #ifdef _M_ARM_FP
    "_M_ARM_FP                : " xstr(_M_ARM_FP) "\n"
    #else
    "_M_ARM_FP                : " "Not Defined" "\n"
    #endif

    #ifdef _M_ARM64
    "_M_ARM64                 : " xstr(_M_ARM64) "\n"
    #else
    "_M_ARM64                 : " "Not Defined" "\n"
    #endif

    #ifdef _M_CEE
    "_M_CEE                   : " xstr(_M_CEE) "\n"
    #else
    "_M_CEE                   : " "Not Defined" "\n"
    #endif

    #ifdef _M_CEE_PURE
    "_M_CEE_PURE              : " xstr(_M_CEE_PURE) "\n"
    #else
    "_M_CEE_PURE              : " "Not Defined" "\n"
    #endif

    #ifdef _M_CEE_SAFE
    "_M_CEE_SAFE              : " xstr(_M_CEE_SAFE) "\n"
    #else
    "_M_CEE_SAFE              : " "Not Defined" "\n"
    #endif

    #ifdef _M_FP_EXCEPT
    "_M_FP_EXCEPT             : " xstr(_M_FP_EXCEPT) "\n"
    #else
    "_M_FP_EXCEPT             : " "Not Defined" "\n"
    #endif

    #ifdef _M_FP_FAST
    "_M_FP_FAST               : " xstr(_M_FP_FAST) "\n"
    #else
    "_M_FP_FAST               : " "Not Defined" "\n"
    #endif

    #ifdef _M_FP_PRECISE
    "_M_FP_PRECISE            : " xstr(_M_FP_PRECISE) "\n"
    #else
    "_M_FP_PRECISE            : " "Not Defined" "\n"
    #endif

    #ifdef _M_FP_STRICT
    "_M_FP_STRICT             : " xstr(_M_FP_STRICT) "\n"
    #else
    "_M_FP_STRICT             : " "Not Defined" "\n"
    #endif

    #ifdef _M_IX86
    "_M_IX86                  : " xstr(_M_IX86) "\n"
    #else
    "_M_IX86                  : " "Not Defined" "\n"
    #endif

    #ifdef _M_IX86_FP
    "_M_IX86_FP               : " xstr(_M_IX86_FP) "\n"
    #else
    "_M_IX86_FP               : " "Not Defined" "\n"
    #endif

    #ifdef _M_X64
    "_M_X64                   : " xstr(_M_X64) "\n"
    #else
    "_M_X64                   : " "Not Defined" "\n"
    #endif

    #ifdef _MANAGED
    "_MANAGED                 : " xstr(_MANAGED) "\n"
    #else
    "_MANAGED                 : " "Not Defined" "\n"
    #endif

    #ifdef _MSC_BUILD
    "_MSC_BUILD               : " xstr(_MSC_BUILD) "\n"
    #else
    "_MSC_BUILD               : " "Not Defined" "\n"
    #endif

    #ifdef _MSC_EXTENSIONS
    "_MSC_EXTENSIONS          : " xstr(_MSC_EXTENSIONS) "\n"
    #else
    "_MSC_EXTENSIONS          : " "Not Defined" "\n"
    #endif

    #ifdef _MSC_FULL_VER
    "_MSC_FULL_VER            : " xstr(_MSC_FULL_VER) "\n"
    #else
    "_MSC_FULL_VER            : " "Not Defined" "\n"
    #endif

    #ifdef _MSC_VER
    "_MSC_VER                 : " xstr(_MSC_VER) "\n"
    #else
    "_MSC_VER                 : " "Not Defined" "\n"
    #endif

    #ifdef _MSVC_LANG
    "_MSVC_LANG               : " xstr(_MSVC_LANG) "\n"
    #else
    "_MSVC_LANG               : " "Not Defined" "\n"
    #endif

    #ifdef __MSVC_RUNTIME_CHECKS
    "__MSVC_RUNTIME_CHECKS    : " xstr(__MSVC_RUNTIME_CHECKS) "\n"
    #else
    "__MSVC_RUNTIME_CHECKS    : " "Not Defined" "\n"
    #endif

    #ifdef _MSVC_TRADITIONAL
    "_MSVC_TRADITIONAL        : " xstr(_MSVC_TRADITIONAL) "\n"
    #else
    "_MSVC_TRADITIONAL        : " "Not Defined" "\n"
    #endif

    #ifdef _MT
    "_MT                      : " xstr(_MT) "\n"
    #else
    "_MT                      : " "Not Defined" "\n"
    #endif

    #ifdef _NATIVE_WCHAR_T_DEFINED
    "_NATIVE_WCHAR_T_DEFINED  : " xstr(_NATIVE_WCHAR_T_DEFINED) "\n"
    #else
    "_NATIVE_WCHAR_T_DEFINED  : " "Not Defined" "\n"
    #endif

    #ifdef _OPENMP
    "_OPENMP                  : " xstr(_OPENMP) "\n"
    #else
    "_OPENMP                  : " "Not Defined" "\n"
    #endif

    #ifdef _PREFAST_
    "_PREFAST_                : " xstr(_PREFAST_) "\n"
    #else
    "_PREFAST_                : " "Not Defined" "\n"
    #endif

    #ifdef __TIMESTAMP__
    "__TIMESTAMP__            : " xstr(__TIMESTAMP__) "\n"
    #else
    "__TIMESTAMP__            : " "Not Defined" "\n"
    #endif

    #ifdef _VC_NODEFAULTLIB
    "_VC_NODEFAULTLIB         : " xstr(_VC_NODEFAULTLIB) "\n"
    #else
    "_VC_NODEFAULTLIB         : " "Not Defined" "\n"
    #endif

    #ifdef _WCHAR_T_DEFINED
    "_WCHAR_T_DEFINED         : " xstr(_WCHAR_T_DEFINED) "\n"
    #else
    "_WCHAR_T_DEFINED         : " "Not Defined" "\n"
    #endif

    #ifdef _WIN32
    "_WIN32                   : " xstr(_WIN32) "\n"
    #else
    "_WIN32                   : " "Not Defined" "\n"
    #endif

    #ifdef _WIN64
    "_WIN64                   : " xstr(_WIN64) "\n"
    #else
    "_WIN64                   : " "Not Defined" "\n"
    #endif

    #ifdef _WINRT_DLL
    "_WINRT_DLL               : " xstr(_WINRT_DLL) "\n"
    #else
    "_WINRT_DLL               : " "Not Defined" "\n"
    #endif

    #ifdef _ATL_VER
    "_ATL_VER                 : " xstr(_ATL_VER) "\n"
    #else
    "_ATL_VER                 : " "Not Defined" "\n"
    #endif

    #ifdef _MFC_VER
    "_MFC_VER                 : " xstr(_MFC_VER) "\n"
    #else
    "_MFC_VER                 : " "Not Defined" "\n"
    #endif

;

int main(int argc, char **argv)
{
    printf("Compiled with the following preprocessor #defines:\n\n");

    puts(MSVC_DEFINES);

    return 0;
}
