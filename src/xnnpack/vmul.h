// Copyright 2021 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#pragma once

#include <stddef.h>
#include <stdint.h>

#include <xnnpack/common.h>
#include <xnnpack/microparams.h>

#ifdef __cplusplus
extern "C" {
#endif


#define DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(fn_name) \
  XNN_INTERNAL void fn_name(                              \
      size_t n,                                           \
      const uint8_t* input_a,                             \
      const uint8_t* input_b,                             \
      uint8_t* output,                                    \
      const union xnn_qu8_mul_minmax_params params[XNN_RESTRICT XNN_MIN_ELEMENTS(1)]);

DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmul_minmax_fp32_ukernel__neon_ld64_u8)
DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmul_minmax_fp32_ukernel__neon_ld64_u16)
DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmul_minmax_fp32_ukernel__neon_ld128_u16)

DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmul_minmax_rndnu_ukernel__neon_ld64_u8)
DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmul_minmax_rndnu_ukernel__neon_ld64_u16)
DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmul_minmax_rndnu_ukernel__neon_ld128_u16)

DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmul_minmax_fp32_ukernel__neonv8_ld64_u8)
DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmul_minmax_fp32_ukernel__neonv8_ld64_u16)
DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmul_minmax_fp32_ukernel__neonv8_ld128_u16)

DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmul_minmax_fp32_ukernel__sse2_mul16_ld64_u8)
DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmul_minmax_fp32_ukernel__sse2_mul16_ld64_u16)

DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmul_minmax_fp32_ukernel__sse41_mul16_ld64_u8)
DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmul_minmax_fp32_ukernel__sse41_mul16_ld64_u16)

DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmul_minmax_fp32_ukernel__avx_mul16_ld64_u8)
DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmul_minmax_fp32_ukernel__avx_mul16_ld64_u16)

DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmul_minmax_fp32_ukernel__wasmsimd_mul32_ld64_u8)
DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmul_minmax_fp32_ukernel__wasmsimd_mul32_ld64_u16)

DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmul_minmax_fp32_ukernel__scalar_u1)
DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmul_minmax_fp32_ukernel__scalar_u2)
DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmul_minmax_fp32_ukernel__scalar_u4)


DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmulc_minmax_fp32_ukernel__neon_ld64_u8)
DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmulc_minmax_fp32_ukernel__neon_ld64_u16)
DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmulc_minmax_fp32_ukernel__neon_ld128_u16)

DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmulc_minmax_rndnu_ukernel__neon_ld64_u8)
DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmulc_minmax_rndnu_ukernel__neon_ld64_u16)
DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmulc_minmax_rndnu_ukernel__neon_ld128_u16)

DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmulc_minmax_fp32_ukernel__neonv8_ld64_u8)
DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmulc_minmax_fp32_ukernel__neonv8_ld64_u16)
DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmulc_minmax_fp32_ukernel__neonv8_ld128_u16)

DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmulc_minmax_fp32_ukernel__sse2_mul16_ld64_u8)
DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmulc_minmax_fp32_ukernel__sse2_mul16_ld64_u16)

DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmulc_minmax_fp32_ukernel__sse41_mul16_ld64_u8)
DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmulc_minmax_fp32_ukernel__sse41_mul16_ld64_u16)

DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmulc_minmax_fp32_ukernel__avx_mul16_ld64_u8)
DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmulc_minmax_fp32_ukernel__avx_mul16_ld64_u16)

DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmulc_minmax_fp32_ukernel__wasmsimd_mul32_ld64_u8)
DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmulc_minmax_fp32_ukernel__wasmsimd_mul32_ld64_u16)

DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmulc_minmax_fp32_ukernel__scalar_u1)
DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmulc_minmax_fp32_ukernel__scalar_u2)
DECLARE_QU8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qu8_vmulc_minmax_fp32_ukernel__scalar_u4)


#define DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(fn_name) \
  XNN_INTERNAL void fn_name(                              \
      size_t n,                                           \
      const int8_t* input_a,                              \
      const int8_t* input_b,                              \
      int8_t* output,                                     \
      const union xnn_qs8_mul_minmax_params params[XNN_RESTRICT XNN_MIN_ELEMENTS(1)]);

DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmul_minmax_fp32_ukernel__neon_ld64_u8)
DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmul_minmax_fp32_ukernel__neon_ld64_u16)
DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmul_minmax_fp32_ukernel__neon_ld128_u16)

DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmul_minmax_rndnu_ukernel__neon_ld64_u8)
DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmul_minmax_rndnu_ukernel__neon_ld64_u16)
DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmul_minmax_rndnu_ukernel__neon_ld128_u16)

DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmul_minmax_fp32_ukernel__neonv8_ld64_u8)
DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmul_minmax_fp32_ukernel__neonv8_ld64_u16)
DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmul_minmax_fp32_ukernel__neonv8_ld128_u16)

DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmul_minmax_fp32_ukernel__sse2_mul16_ld64_u8)
DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmul_minmax_fp32_ukernel__sse2_mul16_ld64_u16)

DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmul_minmax_fp32_ukernel__sse41_mul16_ld64_u8)
DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmul_minmax_fp32_ukernel__sse41_mul16_ld64_u16)

DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmul_minmax_fp32_ukernel__avx_mul16_ld64_u8)
DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmul_minmax_fp32_ukernel__avx_mul16_ld64_u16)

DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmul_minmax_fp32_ukernel__wasmsimd_mul32_ld64_u8)
DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmul_minmax_fp32_ukernel__wasmsimd_mul32_ld64_u16)

DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmul_minmax_fp32_ukernel__scalar_u1)
DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmul_minmax_fp32_ukernel__scalar_u2)
DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmul_minmax_fp32_ukernel__scalar_u4)


DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmulc_minmax_fp32_ukernel__neon_ld64_u8)
DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmulc_minmax_fp32_ukernel__neon_ld64_u16)
DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmulc_minmax_fp32_ukernel__neon_ld128_u16)

DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmulc_minmax_rndnu_ukernel__neon_ld64_u8)
DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmulc_minmax_rndnu_ukernel__neon_ld64_u16)
DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmulc_minmax_rndnu_ukernel__neon_ld128_u16)

DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmulc_minmax_fp32_ukernel__neonv8_ld64_u8)
DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmulc_minmax_fp32_ukernel__neonv8_ld64_u16)
DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmulc_minmax_fp32_ukernel__neonv8_ld128_u16)

DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmulc_minmax_fp32_ukernel__sse2_mul16_ld64_u8)
DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmulc_minmax_fp32_ukernel__sse2_mul16_ld64_u16)

DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmulc_minmax_fp32_ukernel__sse41_mul16_ld64_u8)
DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmulc_minmax_fp32_ukernel__sse41_mul16_ld64_u16)

DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmulc_minmax_fp32_ukernel__avx_mul16_ld64_u8)
DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmulc_minmax_fp32_ukernel__avx_mul16_ld64_u16)

DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmulc_minmax_fp32_ukernel__wasmsimd_mul32_ld64_u8)
DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmulc_minmax_fp32_ukernel__wasmsimd_mul32_ld64_u16)

DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmulc_minmax_fp32_ukernel__scalar_u1)
DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmulc_minmax_fp32_ukernel__scalar_u2)
DECLARE_QS8_VMUL_MINMAX_UKERNEL_FUNCTION(xnn_qs8_vmulc_minmax_fp32_ukernel__scalar_u4)


#ifdef __cplusplus
}  // extern "C"
#endif
