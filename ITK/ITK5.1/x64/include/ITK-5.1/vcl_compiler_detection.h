
// This is a generated file. Do not edit!

#ifndef VXL_COMPILER_DETECTION_H
#define VXL_COMPILER_DETECTION_H

#define VXL_DEC(X) (X)
#define VXL_HEX(X) ( \
    ((X)>>28 & 0xF) * 10000000 + \
    ((X)>>24 & 0xF) *  1000000 + \
    ((X)>>20 & 0xF) *   100000 + \
    ((X)>>16 & 0xF) *    10000 + \
    ((X)>>12 & 0xF) *     1000 + \
    ((X)>>8  & 0xF) *      100 + \
    ((X)>>4  & 0xF) *       10 + \
    ((X)     & 0xF) \
    )

#ifdef __cplusplus
# define VXL_COMPILER_IS_Comeau 0
# define VXL_COMPILER_IS_Intel 0
# define VXL_COMPILER_IS_IntelLLVM 0
# define VXL_COMPILER_IS_PathScale 0
# define VXL_COMPILER_IS_Embarcadero 0
# define VXL_COMPILER_IS_Borland 0
# define VXL_COMPILER_IS_Watcom 0
# define VXL_COMPILER_IS_OpenWatcom 0
# define VXL_COMPILER_IS_SunPro 0
# define VXL_COMPILER_IS_HP 0
# define VXL_COMPILER_IS_Compaq 0
# define VXL_COMPILER_IS_zOS 0
# define VXL_COMPILER_IS_IBMClang 0
# define VXL_COMPILER_IS_XLClang 0
# define VXL_COMPILER_IS_XL 0
# define VXL_COMPILER_IS_VisualAge 0
# define VXL_COMPILER_IS_NVHPC 0
# define VXL_COMPILER_IS_PGI 0
# define VXL_COMPILER_IS_Cray 0
# define VXL_COMPILER_IS_TI 0
# define VXL_COMPILER_IS_FujitsuClang 0
# define VXL_COMPILER_IS_Fujitsu 0
# define VXL_COMPILER_IS_GHS 0
# define VXL_COMPILER_IS_SCO 0
# define VXL_COMPILER_IS_ARMCC 0
# define VXL_COMPILER_IS_AppleClang 0
# define VXL_COMPILER_IS_ARMClang 0
# define VXL_COMPILER_IS_Clang 0
# define VXL_COMPILER_IS_LCC 0
# define VXL_COMPILER_IS_GNU 0
# define VXL_COMPILER_IS_MSVC 0
# define VXL_COMPILER_IS_ADSP 0
# define VXL_COMPILER_IS_IAR 0
# define VXL_COMPILER_IS_MIPSpro 0

#if defined(__COMO__)
# undef VXL_COMPILER_IS_Comeau
# define VXL_COMPILER_IS_Comeau 1

#elif defined(__INTEL_COMPILER) || defined(__ICC)
# undef VXL_COMPILER_IS_Intel
# define VXL_COMPILER_IS_Intel 1

#elif (defined(__clang__) && defined(__INTEL_CLANG_COMPILER)) || defined(__INTEL_LLVM_COMPILER)
# undef VXL_COMPILER_IS_IntelLLVM
# define VXL_COMPILER_IS_IntelLLVM 1

#elif defined(__PATHCC__)
# undef VXL_COMPILER_IS_PathScale
# define VXL_COMPILER_IS_PathScale 1

#elif defined(__BORLANDC__) && defined(__CODEGEARC_VERSION__)
# undef VXL_COMPILER_IS_Embarcadero
# define VXL_COMPILER_IS_Embarcadero 1

#elif defined(__BORLANDC__)
# undef VXL_COMPILER_IS_Borland
# define VXL_COMPILER_IS_Borland 1

#elif defined(__WATCOMC__) && __WATCOMC__ < 1200
# undef VXL_COMPILER_IS_Watcom
# define VXL_COMPILER_IS_Watcom 1

#elif defined(__WATCOMC__)
# undef VXL_COMPILER_IS_OpenWatcom
# define VXL_COMPILER_IS_OpenWatcom 1

#elif defined(__SUNPRO_CC)
# undef VXL_COMPILER_IS_SunPro
# define VXL_COMPILER_IS_SunPro 1

#elif defined(__HP_aCC)
# undef VXL_COMPILER_IS_HP
# define VXL_COMPILER_IS_HP 1

#elif defined(__DECCXX)
# undef VXL_COMPILER_IS_Compaq
# define VXL_COMPILER_IS_Compaq 1

#elif defined(__IBMCPP__) && defined(__COMPILER_VER__)
# undef VXL_COMPILER_IS_zOS
# define VXL_COMPILER_IS_zOS 1

#elif defined(__open_xl__) && defined(__clang__)
# undef VXL_COMPILER_IS_IBMClang
# define VXL_COMPILER_IS_IBMClang 1

#elif defined(__ibmxl__) && defined(__clang__)
# undef VXL_COMPILER_IS_XLClang
# define VXL_COMPILER_IS_XLClang 1

#elif defined(__IBMCPP__) && !defined(__COMPILER_VER__) && __IBMCPP__ >= 800
# undef VXL_COMPILER_IS_XL
# define VXL_COMPILER_IS_XL 1

#elif defined(__IBMCPP__) && !defined(__COMPILER_VER__) && __IBMCPP__ < 800
# undef VXL_COMPILER_IS_VisualAge
# define VXL_COMPILER_IS_VisualAge 1

#elif defined(__NVCOMPILER)
# undef VXL_COMPILER_IS_NVHPC
# define VXL_COMPILER_IS_NVHPC 1

#elif defined(__PGI)
# undef VXL_COMPILER_IS_PGI
# define VXL_COMPILER_IS_PGI 1

#elif defined(_CRAYC)
# undef VXL_COMPILER_IS_Cray
# define VXL_COMPILER_IS_Cray 1

#elif defined(__TI_COMPILER_VERSION__)
# undef VXL_COMPILER_IS_TI
# define VXL_COMPILER_IS_TI 1

#elif defined(__CLANG_FUJITSU)
# undef VXL_COMPILER_IS_FujitsuClang
# define VXL_COMPILER_IS_FujitsuClang 1

#elif defined(__FUJITSU)
# undef VXL_COMPILER_IS_Fujitsu
# define VXL_COMPILER_IS_Fujitsu 1

#elif defined(__ghs__)
# undef VXL_COMPILER_IS_GHS
# define VXL_COMPILER_IS_GHS 1

#elif defined(__SCO_VERSION__)
# undef VXL_COMPILER_IS_SCO
# define VXL_COMPILER_IS_SCO 1

#elif defined(__ARMCC_VERSION) && !defined(__clang__)
# undef VXL_COMPILER_IS_ARMCC
# define VXL_COMPILER_IS_ARMCC 1

#elif defined(__clang__) && defined(__apple_build_version__)
# undef VXL_COMPILER_IS_AppleClang
# define VXL_COMPILER_IS_AppleClang 1

#elif defined(__clang__) && defined(__ARMCOMPILER_VERSION)
# undef VXL_COMPILER_IS_ARMClang
# define VXL_COMPILER_IS_ARMClang 1

#elif defined(__clang__)
# undef VXL_COMPILER_IS_Clang
# define VXL_COMPILER_IS_Clang 1

#elif defined(__LCC__) && (defined(__GNUC__) || defined(__GNUG__) || defined(__MCST__))
# undef VXL_COMPILER_IS_LCC
# define VXL_COMPILER_IS_LCC 1

#elif defined(__GNUC__) || defined(__GNUG__)
# undef VXL_COMPILER_IS_GNU
# define VXL_COMPILER_IS_GNU 1

#elif defined(_MSC_VER)
# undef VXL_COMPILER_IS_MSVC
# define VXL_COMPILER_IS_MSVC 1

#elif defined(__VISUALDSPVERSION__) || defined(__ADSPBLACKFIN__) || defined(__ADSPTS__) || defined(__ADSP21000__)
# undef VXL_COMPILER_IS_ADSP
# define VXL_COMPILER_IS_ADSP 1

#elif defined(__IAR_SYSTEMS_ICC__) || defined(__IAR_SYSTEMS_ICC)
# undef VXL_COMPILER_IS_IAR
# define VXL_COMPILER_IS_IAR 1


#endif

#  if VXL_COMPILER_IS_AppleClang

#    include "compilers/VXL_COMPILER_INFO_AppleClang_CXX.h"

#  elif VXL_COMPILER_IS_Clang

#    include "compilers/VXL_COMPILER_INFO_Clang_CXX.h"

#  elif VXL_COMPILER_IS_GNU

#    include "compilers/VXL_COMPILER_INFO_GNU_CXX.h"

#  elif VXL_COMPILER_IS_MSVC

#    include "compilers/VXL_COMPILER_INFO_MSVC_CXX.h"

#  elif VXL_COMPILER_IS_SunPro

#    include "compilers/VXL_COMPILER_INFO_SunPro_CXX.h"

#  elif VXL_COMPILER_IS_Intel

#    include "compilers/VXL_COMPILER_INFO_Intel_CXX.h"

#  else
#    error Unsupported compiler
#  endif

#  if defined(VXL_COMPILER_CXX_ALIGNAS) && VXL_COMPILER_CXX_ALIGNAS
#    define VXL_ALIGNAS(X) alignas(X)
#  elif VXL_COMPILER_IS_GNU || VXL_COMPILER_IS_Clang || VXL_COMPILER_IS_AppleClang
#    define VXL_ALIGNAS(X) __attribute__ ((__aligned__(X)))
#  elif VXL_COMPILER_IS_MSVC
#    define VXL_ALIGNAS(X) __declspec(align(X))
#  else
#    define VXL_ALIGNAS(X)
#  endif


#  if defined(VXL_COMPILER_CXX_ALIGNOF) && VXL_COMPILER_CXX_ALIGNOF
#    define VXL_ALIGNOF(X) alignof(X)
#  elif VXL_COMPILER_IS_GNU || VXL_COMPILER_IS_Clang || VXL_COMPILER_IS_AppleClang
#    define VXL_ALIGNOF(X) __alignof__(X)
#  elif VXL_COMPILER_IS_MSVC
#    define VXL_ALIGNOF(X) __alignof(X)
#  endif


#  ifndef VXL_DEPRECATED
#    if defined(VXL_COMPILER_CXX_ATTRIBUTE_DEPRECATED) && VXL_COMPILER_CXX_ATTRIBUTE_DEPRECATED
#      define VXL_DEPRECATED [[deprecated]]
#      define VXL_DEPRECATED_MSG(MSG) [[deprecated(MSG)]]
#    elif VXL_COMPILER_IS_GNU || VXL_COMPILER_IS_Clang
#      define VXL_DEPRECATED __attribute__((__deprecated__))
#      define VXL_DEPRECATED_MSG(MSG) __attribute__((__deprecated__(MSG)))
#    elif VXL_COMPILER_IS_MSVC
#      define VXL_DEPRECATED __declspec(deprecated)
#      define VXL_DEPRECATED_MSG(MSG) __declspec(deprecated(MSG))
#    else
#      define VXL_DEPRECATED
#      define VXL_DEPRECATED_MSG(MSG)
#    endif
#  endif


#  if defined(VXL_COMPILER_CXX_CONSTEXPR) && VXL_COMPILER_CXX_CONSTEXPR
#    define VXL_CONSTEXPR constexpr
#  else
#    define VXL_CONSTEXPR 
#  endif


#  if defined(VXL_COMPILER_CXX_DELETED_FUNCTIONS) && VXL_COMPILER_CXX_DELETED_FUNCTIONS
#    define VXL_DELETED_FUNCTION = delete
#  else
#    define VXL_DELETED_FUNCTION 
#  endif


#  if defined(VXL_COMPILER_CXX_EXTERN_TEMPLATES) && VXL_COMPILER_CXX_EXTERN_TEMPLATES
#    define VXL_EXTERN_TEMPLATE extern
#  else
#    define VXL_EXTERN_TEMPLATE 
#  endif


#  if defined(VXL_COMPILER_CXX_FINAL) && VXL_COMPILER_CXX_FINAL
#    define VXL_FINAL final
#  else
#    define VXL_FINAL 
#  endif


#  if defined(VXL_COMPILER_CXX_NOEXCEPT) && VXL_COMPILER_CXX_NOEXCEPT
#    define VXL_NOEXCEPT noexcept
#    define VXL_NOEXCEPT_EXPR(X) noexcept(X)
#  else
#    define VXL_NOEXCEPT
#    define VXL_NOEXCEPT_EXPR(X)
#  endif


#  if defined(VXL_COMPILER_CXX_NULLPTR) && VXL_COMPILER_CXX_NULLPTR
#    define VXL_NULLPTR nullptr
#  elif VXL_COMPILER_IS_GNU
#    define VXL_NULLPTR __null
#  else
#    define VXL_NULLPTR 0
#  endif


#  if defined(VXL_COMPILER_CXX_OVERRIDE) && VXL_COMPILER_CXX_OVERRIDE
#    define VXL_OVERRIDE override
#  else
#    define VXL_OVERRIDE 
#  endif

#  if defined(VXL_COMPILER_CXX_STATIC_ASSERT) && VXL_COMPILER_CXX_STATIC_ASSERT
#    define VXL_STATIC_ASSERT(X) static_assert(X, #X)
#    define VXL_STATIC_ASSERT_MSG(X, MSG) static_assert(X, MSG)
#  else
#    define VXL_STATIC_ASSERT_JOIN(X, Y) VXL_STATIC_ASSERT_JOIN_IMPL(X, Y)
#    define VXL_STATIC_ASSERT_JOIN_IMPL(X, Y) X##Y
template<bool> struct VXLStaticAssert;
template<> struct VXLStaticAssert<true>{};
#    define VXL_STATIC_ASSERT(X) enum { VXL_STATIC_ASSERT_JOIN(VXLStaticAssertEnum, __LINE__) = sizeof(VXLStaticAssert<X>) }
#    define VXL_STATIC_ASSERT_MSG(X, MSG) enum { VXL_STATIC_ASSERT_JOIN(VXLStaticAssertEnum, __LINE__) = sizeof(VXLStaticAssert<X>) }
#  endif


#  if defined(VXL_COMPILER_CXX_THREAD_LOCAL) && VXL_COMPILER_CXX_THREAD_LOCAL
#    define VXL_THREAD_LOCAL thread_local
#  elif VXL_COMPILER_IS_GNU || VXL_COMPILER_IS_Clang || VXL_COMPILER_IS_AppleClang
#    define VXL_THREAD_LOCAL __thread
#  elif VXL_COMPILER_IS_MSVC
#    define VXL_THREAD_LOCAL __declspec(thread)
#  else
// VXL_THREAD_LOCAL not defined for this configuration.
#  endif

#endif

#endif
