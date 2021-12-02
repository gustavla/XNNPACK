// Copyright 2021 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#pragma once

#include <stddef.h>
#include <stdint.h>

#include <xnnpack/params.h>
#include <xnnpack/common.h>

#ifdef __cplusplus
extern "C" {
#endif


#define DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(fn_name) \
  XNN_INTERNAL void fn_name(                           \
      size_t n,                                        \
      const void* input,                               \
      float* output,                                   \
      const void* params);

DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__neon_int16_x8)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__neon_int16_x16)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__neon_int16_x24)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__neon_int16_x32)

DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__neon_int32_x8)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__neon_int32_x16)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__neon_int32_x24)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__neon_int32_x32)

DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__neonfp16_x8)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__neonfp16_x16)

DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__sse2_int16_x8)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__sse2_int16_x16)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__sse2_int16_x24)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__sse2_int16_x32)

DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__sse2_int32_x8)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__sse2_int32_x16)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__sse2_int32_x24)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__sse2_int32_x32)

DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__sse41_int16_x8)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__sse41_int16_x16)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__sse41_int16_x24)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__sse41_int16_x32)

DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__sse41_int32_x8)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__sse41_int32_x16)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__sse41_int32_x24)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__sse41_int32_x32)

DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__avx_int16_x8)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__avx_int16_x16)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__avx_int16_x24)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__avx_int16_x32)

DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__avx_int32_x8)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__avx_int32_x16)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__avx_int32_x24)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__avx_int32_x32)

DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__f16c_x8)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__f16c_x16)

DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__avx512skx_x16)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__avx512skx_x32)

DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__wasmsimd_int16_x8)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__wasmsimd_int16_x16)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__wasmsimd_int16_x24)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__wasmsimd_int16_x32)

DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__wasmsimd_int32_x8)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__wasmsimd_int32_x16)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__wasmsimd_int32_x24)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__wasmsimd_int32_x32)

DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__scalar_float_x1)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__scalar_float_x2)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__scalar_float_x3)
DECLARE_F16_F32_VCVT_UKERNEL_FUNCTION(xnn_f16_f32_vcvt_ukernel__scalar_float_x4)


#define DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(fn_name) \
  XNN_INTERNAL void fn_name(                           \
      size_t n,                                        \
      const float* input,                              \
      void* output,                                    \
      const void* params);

DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__neon_x8)
DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__neon_x16)
DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__neon_x24)
DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__neon_x32)

DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__neonfp16_x8)
DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__neonfp16_x16)

DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__sse2_x8)
DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__sse2_x16)
DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__sse2_x24)
DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__sse2_x32)

DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__sse41_x8)
DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__sse41_x16)
DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__sse41_x24)
DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__sse41_x32)

DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__avx_x8)
DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__avx_x16)
DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__avx_x24)
DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__avx_x32)

DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__f16c_x8)
DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__f16c_x16)

DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__avx512skx_x16)
DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__avx512skx_x32)

DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__wasmsimd_x8)
DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__wasmsimd_x16)
DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__wasmsimd_x24)
DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__wasmsimd_x32)

DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__scalar_bitcast_x1)
DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__scalar_bitcast_x2)
DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__scalar_bitcast_x3)
DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__scalar_bitcast_x4)

DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__scalar_fabsf_x1)
DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__scalar_fabsf_x2)
DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__scalar_fabsf_x3)
DECLARE_F32_F16_VCVT_UKERNEL_FUNCTION(xnn_f32_f16_vcvt_ukernel__scalar_fabsf_x4)


#define DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(fn_name) \
  XNN_INTERNAL void fn_name(                           \
      size_t n,                                        \
      const float* input,                              \
      int8_t* output,                                  \
      const union xnn_f32_qs8_cvt_params* params);

DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__neon_x8)
DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__neon_x16)
DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__neon_x24)
DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__neon_x32)

DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__neonv8_x8)
DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__neonv8_x16)
DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__neonv8_x24)
DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__neonv8_x32)

DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__sse2_x8)
DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__sse2_x16)
DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__sse2_x24)
DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__sse2_x32)

DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__sse41_x8)
DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__sse41_x16)
DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__sse41_x24)
DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__sse41_x32)

DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__avx_x8)
DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__avx_x16)
DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__avx_x24)
DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__avx_x32)

DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__avx2_x16)
DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__avx2_x32)

DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__avx512skx_x32)
DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__avx512skx_x64)

DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__wasmsimd_magic_x8)
DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__wasmsimd_magic_x16)
DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__wasmsimd_magic_x24)
DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__wasmsimd_magic_x32)

DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__scalar_magic_x1)
DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__scalar_magic_x2)
DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__scalar_magic_x3)
DECLARE_F32_QS8_VCVT_UKERNEL_FUNCTION(xnn_f32_qs8_vcvt_ukernel__scalar_magic_x4)


#define DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(fn_name) \
  XNN_INTERNAL void fn_name(                           \
      size_t n,                                        \
      const float* input,                              \
      uint8_t* output,                                 \
      const union xnn_f32_qu8_cvt_params* params);

DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__neon_x8)
DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__neon_x16)
DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__neon_x24)
DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__neon_x32)

DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__neonv8_x8)
DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__neonv8_x16)
DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__neonv8_x24)
DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__neonv8_x32)

DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__sse2_x8)
DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__sse2_x16)
DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__sse2_x24)
DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__sse2_x32)

DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__avx_x8)
DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__avx_x16)
DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__avx_x24)
DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__avx_x32)

DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__avx2_x16)
DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__avx2_x32)

DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__avx512skx_x32)
DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__avx512skx_x64)

DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__wasmsimd_magic_x8)
DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__wasmsimd_magic_x16)
DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__wasmsimd_magic_x24)
DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__wasmsimd_magic_x32)

DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__scalar_magic_x1)
DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__scalar_magic_x2)
DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__scalar_magic_x3)
DECLARE_F32_QU8_VCVT_UKERNEL_FUNCTION(xnn_f32_qu8_vcvt_ukernel__scalar_magic_x4)


#ifdef __cplusplus
}  // extern "C"
#endif
