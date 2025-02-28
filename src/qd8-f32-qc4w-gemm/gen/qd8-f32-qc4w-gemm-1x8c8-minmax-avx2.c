// Auto-generated file. Do not edit!
//   Template: src/qs8-gemm/MRx8c8-avx2.c.in
//   Generator: tools/xngen
//
// Copyright 2020 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <assert.h>

#include <immintrin.h>

#include <xnnpack/gemm.h>
#include <xnnpack/intrinsics-polyfill.h>
#include <xnnpack/math.h>
#include <xnnpack/unaligned.h>


void xnn_qd8_f32_qc4w_gemm_minmax_ukernel_1x8c8__avx2(
    size_t mr,
    size_t nc,
    size_t kc,
    const int8_t* restrict a,
    size_t a_stride,
    const void* restrict w,
    float* restrict c,
    size_t cm_stride,
    size_t cn_stride,
    const union xnn_f32_qc4w_minmax_params params[restrict XNN_MIN_ELEMENTS(1)],
    const struct xnn_qd8_quantization_params quantization_params[restrict XNN_MIN_ELEMENTS(1)]) XNN_OOB_READS
{
  assert(mr != 0);
  assert(mr <= 1);
  assert(nc != 0);
  assert(kc != 0);
  assert(kc % sizeof(int8_t) == 0);
  assert(a != NULL);
  assert(w != NULL);
  assert(c != NULL);

  kc = round_up_po2(kc, 8 * sizeof(int8_t));
  const int8_t* a0 = a;
  float* c0 = c;

  const __m128i vmask = _mm_load_si128((const __m128i*) params->avx.mask);  // 0xF0
  do {
    const __m128i vinit0 = _mm_cvtsi32_si128(((const int*) w)[0]);
    const __m128i vinit1 = _mm_cvtsi32_si128(((const int*) w)[1]);
    const __m256i vinit01 = _mm256_inserti128_si256(_mm256_castsi128_si256(vinit0), vinit1, 1);
    const __m128i vinit2 = _mm_cvtsi32_si128(((const int*) w)[2]);
    const __m128i vinit3 = _mm_cvtsi32_si128(((const int*) w)[3]);
    const __m256i vinit23 = _mm256_inserti128_si256(_mm256_castsi128_si256(vinit2), vinit3, 1);
    const __m128i vinit4 = _mm_cvtsi32_si128(((const int*) w)[4]);
    const __m128i vinit5 = _mm_cvtsi32_si128(((const int*) w)[5]);
    const __m256i vinit45 = _mm256_inserti128_si256(_mm256_castsi128_si256(vinit4), vinit5, 1);
    const __m128i vinit6 = _mm_cvtsi32_si128(((const int*) w)[6]);
    const __m128i vinit7 = _mm_cvtsi32_si128(((const int*) w)[7]);
    const __m256i vinit67 = _mm256_inserti128_si256(_mm256_castsi128_si256(vinit6), vinit7, 1);
    const __m256i vinput_zero_point0 = _mm256_set1_epi32((int) quantization_params[0].zero_point);
    __m256i vacc0x01 = _mm256_mullo_epi32(vinit01, vinput_zero_point0);
    __m256i vacc0x23 = _mm256_mullo_epi32(vinit23, vinput_zero_point0);
    __m256i vacc0x45 = _mm256_mullo_epi32(vinit45, vinput_zero_point0);
    __m256i vacc0x67 = _mm256_mullo_epi32(vinit67, vinput_zero_point0);
    w = (const int32_t*) w + 8;

    size_t k = 0;
    while (k < kc) {
      const __m128i va0 = _mm_cvtepi8_epi16(_mm_loadl_epi64((const __m128i*) a0));
      const __m256i vxa0 = _mm256_inserti128_si256(_mm256_castsi128_si256(va0), va0, 1);
      a0 += 8;

      const __m128i vb01 = _mm_loadl_epi64((const __m128i*) ((const int8_t*) w + 0));
      const __m128i vbs0 = _mm_slli_epi32(vb01, 4);
      const __m128i vb0 = _mm_and_si128(vbs0, vmask);
      const __m128i vb1 = _mm_and_si128(vb01, vmask);
      const __m128i vwb0 = _mm_cvtepi8_epi16(vb0);
      const __m128i vwb1 = _mm_cvtepi8_epi16(vb1);
      const __m256i vxb0 = _mm256_cvtepu16_epi32(vwb0);
      const __m256i vxb1 = _mm256_cvtepu16_epi32(vwb1);
      const __m256i vxsb1 = _mm256_slli_epi32(vxb1, 16);
      const __m256i vxb01 = _mm256_or_si256(vxb0, vxsb1);

      vacc0x01 = _mm256_add_epi32(vacc0x01, _mm256_madd_epi16(vxa0, vxb01));
      const __m128i vb23 = _mm_loadl_epi64((const __m128i*) ((const int8_t*) w + 8));
      const __m128i vbs2 = _mm_slli_epi32(vb23, 4);
      const __m128i vb2 = _mm_and_si128(vbs2, vmask);
      const __m128i vb3 = _mm_and_si128(vb23, vmask);
      const __m128i vwb2 = _mm_cvtepi8_epi16(vb2);
      const __m128i vwb3 = _mm_cvtepi8_epi16(vb3);
      const __m256i vxb2 = _mm256_cvtepu16_epi32(vwb2);
      const __m256i vxb3 = _mm256_cvtepu16_epi32(vwb3);
      const __m256i vxsb3 = _mm256_slli_epi32(vxb3, 16);
      const __m256i vxb23 = _mm256_or_si256(vxb2, vxsb3);

      vacc0x23 = _mm256_add_epi32(vacc0x23, _mm256_madd_epi16(vxa0, vxb23));
      const __m128i vb45 = _mm_loadl_epi64((const __m128i*) ((const int8_t*) w + 16));
      const __m128i vbs4 = _mm_slli_epi32(vb45, 4);
      const __m128i vb4 = _mm_and_si128(vbs4, vmask);
      const __m128i vb5 = _mm_and_si128(vb45, vmask);
      const __m128i vwb4 = _mm_cvtepi8_epi16(vb4);
      const __m128i vwb5 = _mm_cvtepi8_epi16(vb5);
      const __m256i vxb4 = _mm256_cvtepu16_epi32(vwb4);
      const __m256i vxb5 = _mm256_cvtepu16_epi32(vwb5);
      const __m256i vxsb5 = _mm256_slli_epi32(vxb5, 16);
      const __m256i vxb45 = _mm256_or_si256(vxb4, vxsb5);

      vacc0x45 = _mm256_add_epi32(vacc0x45, _mm256_madd_epi16(vxa0, vxb45));
      const __m128i vb67 = _mm_loadl_epi64((const __m128i*) ((const int8_t*) w + 24));
      const __m128i vbs6 = _mm_slli_epi32(vb67, 4);
      const __m128i vb6 = _mm_and_si128(vbs6, vmask);
      const __m128i vb7 = _mm_and_si128(vb67, vmask);
      const __m128i vwb6 = _mm_cvtepi8_epi16(vb6);
      const __m128i vwb7 = _mm_cvtepi8_epi16(vb7);
      const __m256i vxb6 = _mm256_cvtepu16_epi32(vwb6);
      const __m256i vxb7 = _mm256_cvtepu16_epi32(vwb7);
      const __m256i vxsb7 = _mm256_slli_epi32(vxb7, 16);
      const __m256i vxb67 = _mm256_or_si256(vxb6, vxsb7);

      vacc0x67 = _mm256_add_epi32(vacc0x67, _mm256_madd_epi16(vxa0, vxb67));

      w = (const int8_t*) w + 32;
      k += 8 * sizeof(int8_t);
    }

    const __m256i vacc0x0213 = _mm256_hadd_epi32(vacc0x01, vacc0x23);
    const __m256i vacc0x4657 = _mm256_hadd_epi32(vacc0x45, vacc0x67);

    const __m256i vacc0x02461357 = _mm256_hadd_epi32(vacc0x0213, vacc0x4657);

    const __m256i vpermute_mask = _mm256_set_epi32(7, 3, 6, 2, 5, 1, 4, 0);
    __m256i vacc0x01234567 = _mm256_permutevar8x32_epi32(vacc0x02461357, vpermute_mask);

    vacc0x01234567 = _mm256_srai_epi32(vacc0x01234567, 4);
    __m256 vout0x01234567 = _mm256_cvtepi32_ps(vacc0x01234567);
    const __m256 vinput_scale0 = _mm256_broadcast_ss(&quantization_params[0].inv_scale);

    vout0x01234567 = _mm256_mul_ps(vout0x01234567, vinput_scale0);

    const __m256 vfilter_output_scale01234567 = _mm256_load_ps((const float*) w);
    const __m256 vbias01234567 = _mm256_load_ps((const float*) w + 8);
    w = (const float*) w + 16;
    vout0x01234567 = _mm256_fmadd_ps(vout0x01234567, vfilter_output_scale01234567, vbias01234567);

    const __m256 vmin = _mm256_load_ps(params->avx.min);
    vout0x01234567 = _mm256_max_ps(vout0x01234567, vmin);

    const __m256 vmax = _mm256_load_ps(params->avx.max);
    vout0x01234567 = _mm256_min_ps(vout0x01234567, vmax);

    if XNN_LIKELY(nc >= 8) {
      _mm256_storeu_ps(c0, vout0x01234567);
      c0 = (float*) ((uintptr_t) c0 + cn_stride);

      a0 = (const int8_t*) ((uintptr_t) a0 - kc);

      nc -= 8;
    } else {
      __m128 vout0x0123 = _mm256_castps256_ps128(vout0x01234567);
      if (nc & 4) {
        _mm_storeu_ps(c0, vout0x0123);

        vout0x0123 = _mm256_extractf128_ps(vout0x01234567, 1);

        c0 += 4;
      }
      if (nc & 2) {
        _mm_storel_pi((__m64*) c0, vout0x0123);

        vout0x0123 = _mm_movehl_ps(vout0x0123, vout0x0123);

        c0 += 2;
      }
      if (nc & 1) {
        _mm_store_ss(c0, vout0x0123);
      }
      nc = 0;
    }
  } while (nc != 0);
}
