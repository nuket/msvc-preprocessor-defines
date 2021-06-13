# Print Microsoft Visual C / C++ Preprocessor Defines

A C string constant that extracts all of the preprocessor defines (scraped from
[here](https://docs.microsoft.com/en-us/cpp/preprocessor/predefined-macros))
that are automatically set by the Microsoft compiler at compile time.

It should be built with the `/Zc:__cplusplus` option to have a correctly-set
`__cplusplus` define, because of the way the compiler works (as explained
[here](https://devblogs.microsoft.com/cppblog/msvc-now-correctly-reports-__cplusplus/)).

```
cl /std:c++17 /Zc:__cplusplus /Zc:preprocessor main.cpp
```

Running the `main.exe` program prints something like the following. Useful for
debugging compiler settings and diagnosing potential program issues.

```
Compiled with the following preprocessor #defines:

__cplusplus              : 201703L
__DATE__                 : "Jun 13 2021"
__FILE__                 : "main.cpp"
__LINE__                 : 48
__STDC__                 : Not Defined
__STDC_HOSTED__          : 1
__STDC_NO_ATOMICS__      : Not Defined
__STDC_NO_COMPLEX__      : Not Defined
__STDC_NO_THREADS__      : Not Defined
__STDC_NO_VLA__          : Not Defined
__STDC_VERSION__         : Not Defined
__STDCPP_THREADS__       : 1
__TIME__                 : "22:24:48"
__ATOM__                 : Not Defined
__AVX__                  : Not Defined
__AVX2__                 : Not Defined
__AVX512BW__             : Not Defined
__AVX512CD__             : Not Defined
__AVX512DQ__             : Not Defined
__AVX512F__              : Not Defined
__AVX512VL__             : Not Defined
_CHAR_UNSIGNED           : Not Defined
__CLR_VER                : Not Defined
_CONTROL_FLOW_GUARD      : Not Defined
__COUNTER__              : 0
__cplusplus_cli          : Not Defined
__cplusplus_winrt        : Not Defined
_CPPRTTI                 : 1
_CPPUNWIND               : Not Defined
_DEBUG                   : Not Defined
_DLL                     : Not Defined
__FUNCDNAME__            : __FUNCDNAME__
__FUNCSIG__              : __FUNCSIG__
__FUNCTION__             : __FUNCTION__
_INTEGRAL_MAX_BITS       : 64
__INTELLISENSE__         : Not Defined
_ISO_VOLATILE            : Not Defined
_KERNEL_MODE             : Not Defined
_M_AMD64                 : 100
_M_ARM                   : Not Defined
_M_ARM_ARMV7VE           : Not Defined
_M_ARM_FP                : Not Defined
_M_ARM64                 : Not Defined
_M_CEE                   : Not Defined
_M_CEE_PURE              : Not Defined
_M_CEE_SAFE              : Not Defined
_M_FP_EXCEPT             : Not Defined
_M_FP_FAST               : Not Defined
_M_FP_PRECISE            : Not Defined
_M_FP_STRICT             : Not Defined
_M_IX86                  : Not Defined
_M_IX86_FP               : Not Defined
_M_X64                   : 100
_MANAGED                 : Not Defined
_MSC_BUILD               : 0
_MSC_EXTENSIONS          : 1
_MSC_FULL_VER            : 192930037
_MSC_VER                 : 1929
_MSVC_LANG               : 201703L
__MSVC_RUNTIME_CHECKS    : Not Defined
_MSVC_TRADITIONAL        : 0
_MT                      : 1
_NATIVE_WCHAR_T_DEFINED  : 1
_OPENMP                  : Not Defined
_PREFAST_                : Not Defined
__TIMESTAMP__            : "Sun Jun 13 22:24:45 2021"
_VC_NODEFAULTLIB         : Not Defined
_WCHAR_T_DEFINED         : 1
_WIN32                   : 1
_WIN64                   : 1
_WINRT_DLL               : Not Defined
_ATL_VER                 : Not Defined
_MFC_VER                 : Not Defined
```

## Generating main.cpp

1. Go to the Microsoft [preprocessor define
documentation](https://docs.microsoft.com/en-us/cpp/preprocessor/predefined-macros)
2. Open up the browser Console.
3. Copy and paste the contents of [`index.js`](index.js) into the Console.
4. Run `main()`.
5. Copy that output to [`main.cpp`](main.cpp).
