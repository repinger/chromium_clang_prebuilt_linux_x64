//===----- hlsl_intrinsics.h - HLSL definitions for intrinsics ----------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _HLSL_HLSL_INTRINSICS_H_
#define _HLSL_HLSL_INTRINSICS_H_

namespace hlsl {

__attribute__((availability(shadermodel, introduced = 6.0)))
__attribute__((clang_builtin_alias(__builtin_hlsl_wave_active_count_bits))) uint
WaveActiveCountBits(bool bBit);

// abs builtins
#ifdef __HLSL_ENABLE_16_BIT
__attribute__((clang_builtin_alias(__builtin_elementwise_abs)))
int16_t abs(int16_t);
__attribute__((clang_builtin_alias(__builtin_elementwise_abs)))
int16_t2 abs(int16_t2);
__attribute__((clang_builtin_alias(__builtin_elementwise_abs)))
int16_t3 abs(int16_t3);
__attribute__((clang_builtin_alias(__builtin_elementwise_abs)))
int16_t4 abs(int16_t4);
__attribute__((clang_builtin_alias(__builtin_elementwise_abs))) half abs(half);
__attribute__((clang_builtin_alias(__builtin_elementwise_abs)))
half2 abs(half2);
__attribute__((clang_builtin_alias(__builtin_elementwise_abs)))
half3 abs(half3);
__attribute__((clang_builtin_alias(__builtin_elementwise_abs)))
half4 abs(half4);
#endif

__attribute__((clang_builtin_alias(__builtin_elementwise_abs))) int abs(int);
__attribute__((clang_builtin_alias(__builtin_elementwise_abs))) int2 abs(int2);
__attribute__((clang_builtin_alias(__builtin_elementwise_abs))) int3 abs(int3);
__attribute__((clang_builtin_alias(__builtin_elementwise_abs))) int4 abs(int4);
__attribute__((clang_builtin_alias(__builtin_elementwise_abs))) float
abs(float);
__attribute__((clang_builtin_alias(__builtin_elementwise_abs)))
float2 abs(float2);
__attribute__((clang_builtin_alias(__builtin_elementwise_abs)))
float3 abs(float3);
__attribute__((clang_builtin_alias(__builtin_elementwise_abs)))
float4 abs(float4);
__attribute__((clang_builtin_alias(__builtin_elementwise_abs)))
int64_t abs(int64_t);
__attribute__((clang_builtin_alias(__builtin_elementwise_abs)))
int64_t2 abs(int64_t2);
__attribute__((clang_builtin_alias(__builtin_elementwise_abs)))
int64_t3 abs(int64_t3);
__attribute__((clang_builtin_alias(__builtin_elementwise_abs)))
int64_t4 abs(int64_t4);
__attribute__((clang_builtin_alias(__builtin_elementwise_abs))) double
abs(double);
__attribute__((clang_builtin_alias(__builtin_elementwise_abs)))
double2 abs(double2);
__attribute__((clang_builtin_alias(__builtin_elementwise_abs)))
double3 abs(double3);
__attribute__((clang_builtin_alias(__builtin_elementwise_abs)))
double4 abs(double4);

// sqrt builtins
__attribute__((clang_builtin_alias(__builtin_sqrt))) double sqrt(double In);
__attribute__((clang_builtin_alias(__builtin_sqrtf))) float sqrt(float In);

#ifdef __HLSL_ENABLE_16_BIT
__attribute__((clang_builtin_alias(__builtin_sqrtf16))) half sqrt(half In);
#endif

// ceil builtins
#ifdef __HLSL_ENABLE_16_BIT
__attribute__((clang_builtin_alias(__builtin_elementwise_ceil)))
half ceil(half);
__attribute__((clang_builtin_alias(__builtin_elementwise_ceil)))
half2 ceil(half2);
__attribute__((clang_builtin_alias(__builtin_elementwise_ceil)))
half3 ceil(half3);
__attribute__((clang_builtin_alias(__builtin_elementwise_ceil)))
half4 ceil(half4);
#endif

__attribute__((clang_builtin_alias(__builtin_elementwise_ceil))) float
ceil(float);
__attribute__((clang_builtin_alias(__builtin_elementwise_ceil)))
float2 ceil(float2);
__attribute__((clang_builtin_alias(__builtin_elementwise_ceil)))
float3 ceil(float3);
__attribute__((clang_builtin_alias(__builtin_elementwise_ceil)))
float4 ceil(float4);

__attribute__((clang_builtin_alias(__builtin_elementwise_ceil))) double
ceil(double);
__attribute__((clang_builtin_alias(__builtin_elementwise_ceil)))
double2 ceil(double2);
__attribute__((clang_builtin_alias(__builtin_elementwise_ceil)))
double3 ceil(double3);
__attribute__((clang_builtin_alias(__builtin_elementwise_ceil)))
double4 ceil(double4);

// floor builtins
#ifdef __HLSL_ENABLE_16_BIT
__attribute__((clang_builtin_alias(__builtin_elementwise_floor)))
half floor(half);
__attribute__((clang_builtin_alias(__builtin_elementwise_floor)))
half2 floor(half2);
__attribute__((clang_builtin_alias(__builtin_elementwise_floor)))
half3 floor(half3);
__attribute__((clang_builtin_alias(__builtin_elementwise_floor)))
half4 floor(half4);
#endif

__attribute__((clang_builtin_alias(__builtin_elementwise_floor))) float
floor(float);
__attribute__((clang_builtin_alias(__builtin_elementwise_floor)))
float2 floor(float2);
__attribute__((clang_builtin_alias(__builtin_elementwise_floor)))
float3 floor(float3);
__attribute__((clang_builtin_alias(__builtin_elementwise_floor)))
float4 floor(float4);

__attribute__((clang_builtin_alias(__builtin_elementwise_floor))) double
floor(double);
__attribute__((clang_builtin_alias(__builtin_elementwise_floor)))
double2 floor(double2);
__attribute__((clang_builtin_alias(__builtin_elementwise_floor)))
double3 floor(double3);
__attribute__((clang_builtin_alias(__builtin_elementwise_floor)))
double4 floor(double4);

// cos builtins
#ifdef __HLSL_ENABLE_16_BIT
__attribute__((clang_builtin_alias(__builtin_elementwise_cos))) half cos(half);
__attribute__((clang_builtin_alias(__builtin_elementwise_cos)))
half2 cos(half2);
__attribute__((clang_builtin_alias(__builtin_elementwise_cos)))
half3 cos(half3);
__attribute__((clang_builtin_alias(__builtin_elementwise_cos)))
half4 cos(half4);
#endif

__attribute__((clang_builtin_alias(__builtin_elementwise_cos))) float
cos(float);
__attribute__((clang_builtin_alias(__builtin_elementwise_cos)))
float2 cos(float2);
__attribute__((clang_builtin_alias(__builtin_elementwise_cos)))
float3 cos(float3);
__attribute__((clang_builtin_alias(__builtin_elementwise_cos)))
float4 cos(float4);

__attribute__((clang_builtin_alias(__builtin_elementwise_cos))) double
cos(double);
__attribute__((clang_builtin_alias(__builtin_elementwise_cos)))
double2 cos(double2);
__attribute__((clang_builtin_alias(__builtin_elementwise_cos)))
double3 cos(double3);
__attribute__((clang_builtin_alias(__builtin_elementwise_cos)))
double4 cos(double4);

// sin builtins
#ifdef __HLSL_ENABLE_16_BIT
__attribute__((clang_builtin_alias(__builtin_elementwise_sin))) half sin(half);
__attribute__((clang_builtin_alias(__builtin_elementwise_sin)))
half2 sin(half2);
__attribute__((clang_builtin_alias(__builtin_elementwise_sin)))
half3 sin(half3);
__attribute__((clang_builtin_alias(__builtin_elementwise_sin)))
half4 sin(half4);
#endif

__attribute__((clang_builtin_alias(__builtin_elementwise_sin))) float
sin(float);
__attribute__((clang_builtin_alias(__builtin_elementwise_sin)))
float2 sin(float2);
__attribute__((clang_builtin_alias(__builtin_elementwise_sin)))
float3 sin(float3);
__attribute__((clang_builtin_alias(__builtin_elementwise_sin)))
float4 sin(float4);

__attribute__((clang_builtin_alias(__builtin_elementwise_sin))) double
sin(double);
__attribute__((clang_builtin_alias(__builtin_elementwise_sin)))
double2 sin(double2);
__attribute__((clang_builtin_alias(__builtin_elementwise_sin)))
double3 sin(double3);
__attribute__((clang_builtin_alias(__builtin_elementwise_sin)))
double4 sin(double4);

// trunc builtins
#ifdef __HLSL_ENABLE_16_BIT
__attribute__((clang_builtin_alias(__builtin_elementwise_trunc)))
half trunc(half);
__attribute__((clang_builtin_alias(__builtin_elementwise_trunc)))
half2 trunc(half2);
__attribute__((clang_builtin_alias(__builtin_elementwise_trunc)))
half3 trunc(half3);
__attribute__((clang_builtin_alias(__builtin_elementwise_trunc)))
half4 trunc(half4);
#endif

__attribute__((clang_builtin_alias(__builtin_elementwise_trunc))) float
trunc(float);
__attribute__((clang_builtin_alias(__builtin_elementwise_trunc)))
float2 trunc(float2);
__attribute__((clang_builtin_alias(__builtin_elementwise_trunc)))
float3 trunc(float3);
__attribute__((clang_builtin_alias(__builtin_elementwise_trunc)))
float4 trunc(float4);

__attribute__((clang_builtin_alias(__builtin_elementwise_trunc))) double
trunc(double);
__attribute__((clang_builtin_alias(__builtin_elementwise_trunc)))
double2 trunc(double2);
__attribute__((clang_builtin_alias(__builtin_elementwise_trunc)))
double3 trunc(double3);
__attribute__((clang_builtin_alias(__builtin_elementwise_trunc)))
double4 trunc(double4);

// log builtins
#ifdef __HLSL_ENABLE_16_BIT
__attribute__((clang_builtin_alias(__builtin_elementwise_log))) half log(half);
__attribute__((clang_builtin_alias(__builtin_elementwise_log)))
half2 log(half2);
__attribute__((clang_builtin_alias(__builtin_elementwise_log)))
half3 log(half3);
__attribute__((clang_builtin_alias(__builtin_elementwise_log)))
half4 log(half4);
#endif

__attribute__((clang_builtin_alias(__builtin_elementwise_log))) float
log(float);
__attribute__((clang_builtin_alias(__builtin_elementwise_log)))
float2 log(float2);
__attribute__((clang_builtin_alias(__builtin_elementwise_log)))
float3 log(float3);
__attribute__((clang_builtin_alias(__builtin_elementwise_log)))
float4 log(float4);

__attribute__((clang_builtin_alias(__builtin_elementwise_log))) double
log(double);
__attribute__((clang_builtin_alias(__builtin_elementwise_log)))
double2 log(double2);
__attribute__((clang_builtin_alias(__builtin_elementwise_log)))
double3 log(double3);
__attribute__((clang_builtin_alias(__builtin_elementwise_log)))
double4 log(double4);

// log2 builtins
#ifdef __HLSL_ENABLE_16_BIT
__attribute__((clang_builtin_alias(__builtin_elementwise_log2)))
half log2(half);
__attribute__((clang_builtin_alias(__builtin_elementwise_log2)))
half2 log2(half2);
__attribute__((clang_builtin_alias(__builtin_elementwise_log2)))
half3 log2(half3);
__attribute__((clang_builtin_alias(__builtin_elementwise_log2)))
half4 log2(half4);
#endif

__attribute__((clang_builtin_alias(__builtin_elementwise_log2))) float
log2(float);
__attribute__((clang_builtin_alias(__builtin_elementwise_log2)))
float2 log2(float2);
__attribute__((clang_builtin_alias(__builtin_elementwise_log2)))
float3 log2(float3);
__attribute__((clang_builtin_alias(__builtin_elementwise_log2)))
float4 log2(float4);

__attribute__((clang_builtin_alias(__builtin_elementwise_log2))) double
log2(double);
__attribute__((clang_builtin_alias(__builtin_elementwise_log2)))
double2 log2(double2);
__attribute__((clang_builtin_alias(__builtin_elementwise_log2)))
double3 log2(double3);
__attribute__((clang_builtin_alias(__builtin_elementwise_log2)))
double4 log2(double4);

// log10 builtins
#ifdef __HLSL_ENABLE_16_BIT
__attribute__((clang_builtin_alias(__builtin_elementwise_log10)))
half log10(half);
__attribute__((clang_builtin_alias(__builtin_elementwise_log10)))
half2 log10(half2);
__attribute__((clang_builtin_alias(__builtin_elementwise_log10)))
half3 log10(half3);
__attribute__((clang_builtin_alias(__builtin_elementwise_log10)))
half4 log10(half4);
#endif

__attribute__((clang_builtin_alias(__builtin_elementwise_log10))) float
log10(float);
__attribute__((clang_builtin_alias(__builtin_elementwise_log10)))
float2 log10(float2);
__attribute__((clang_builtin_alias(__builtin_elementwise_log10)))
float3 log10(float3);
__attribute__((clang_builtin_alias(__builtin_elementwise_log10)))
float4 log10(float4);

__attribute__((clang_builtin_alias(__builtin_elementwise_log10))) double
log10(double);
__attribute__((clang_builtin_alias(__builtin_elementwise_log10)))
double2 log10(double2);
__attribute__((clang_builtin_alias(__builtin_elementwise_log10)))
double3 log10(double3);
__attribute__((clang_builtin_alias(__builtin_elementwise_log10)))
double4 log10(double4);

} // namespace hlsl
#endif //_HLSL_HLSL_INTRINSICS_H_
