/**
 * @file cmp.h
 * @brief Provides functions to compare various types in ascending and descending order.
 *
 * Functions are named rd_cmp_TYPE_ORDER, with ORDER being either 'asc' or 'des' for
 * ascending/descending orders, respectively, and TYPE following the convention:
 * str for string (char*), c for char, f32/f64 for float/double, i for int, sz for
 * size_t, u for unsigned int, l for long, lu for unsigned long, i8/i16/i32/i64/u8/u16/u32/u64
 * for exact-sized unsigned and signed integers (int8_t, int64_t, etc...).
 */
#ifndef RANDAMU_CMP_H_
#define RANDAMU_CMP_H_

#include "randamu/common.h"

#ifdef __cplusplus
extern "C" {
#endif

int rd_cmp_str_asc(const void* lhs, const void* rhs);
int rd_cmp_str_des(const void* lhs, const void* rhs);
int rd_cmp_c_asc(const void* lhs, const void* rhs);
int rd_cmp_c_des(const void* lhs, const void* rhs);
int rd_cmp_f64_asc(const void* lhs, const void* rhs);
int rd_cmp_f64_des(const void* lhs, const void* rhs);
int rd_cmp_f32_asc(const void* lhs, const void* rhs);
int rd_cmp_f32_des(const void* lhs, const void* rhs);
int rd_cmp_i_asc(const void* lhs, const void* rhs);
int rd_cmp_i_des(const void* lhs, const void* rhs);
int rd_cmp_u_asc(const void* lhs, const void* rhs);
int rd_cmp_u_des(const void* lhs, const void* rhs);
int rd_cmp_sz_asc(const void* lhs, const void* rhs);
int rd_cmp_sz_des(const void* lhs, const void* rhs);
int rd_cmp_l_asc(const void* lhs, const void* rhs);
int rd_cmp_l_des(const void* lhs, const void* rhs);
int rd_cmp_lu_asc(const void* lhs, const void* rhs);
int rd_cmp_lu_des(const void* lhs, const void* rhs);
int rd_cmp_i8_asc(const void* lhs, const void* rhs);
int rd_cmp_i8_des(const void* lhs, const void* rhs);
int rd_cmp_i16_asc(const void* lhs, const void* rhs);
int rd_cmp_i16_des(const void* lhs, const void* rhs);
int rd_cmp_i32_asc(const void* lhs, const void* rhs);
int rd_cmp_i32_des(const void* lhs, const void* rhs);
int rd_cmp_i64_asc(const void* lhs, const void* rhs);
int rd_cmp_i64_des(const void* lhs, const void* rhs);
int rd_cmp_u8_asc(const void* lhs, const void* rhs);
int rd_cmp_u8_des(const void* lhs, const void* rhs);
int rd_cmp_u16_asc(const void* lhs, const void* rhs);
int rd_cmp_u16_des(const void* lhs, const void* rhs);
int rd_cmp_u32_asc(const void* lhs, const void* rhs);
int rd_cmp_u32_des(const void* lhs, const void* rhs);
int rd_cmp_u64_asc(const void* lhs, const void* rhs);
int rd_cmp_u64_des(const void* lhs, const void* rhs);

#ifdef __cplusplus
}
#endif

#endif
