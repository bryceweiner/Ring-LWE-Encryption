/*
 * test_asm.h
 *
 *  Created on: Jul 1, 2014
 *      Author: rdeclerc
 */

#ifndef LWE_ARM_H_
#define LWE_ARM_H_

#include "global.h"
#include "stdint.h"

#define attribute_fixed_data1 __attribute__((section(".fixed_data1")));
extern uint16_t fixed_data1[M] attribute_fixed_data1;
extern uint16_t fixed_data2[M] attribute_fixed_data1;
extern uint16_t fixed_data3[M] attribute_fixed_data1;

void knuth_yao_shuffled_with_asm_optimization(uint16_t * out);
int knuth_yao_asm(uint16_t * vals);
int knuth_yao_asm_shuffle(uint16_t * vals);

void asmtest();

int knuth_yao_single_number_asm(uint32_t * rnd);
uint32_t umod_asm(uint32_t a);
uint32_t mod_asm(uint32_t a);
uint32_t smod_asm(uint32_t a);
uint32_t umod_asm_simd(uint32_t a);

void coefficient_add_asm(uint16_t * out, uint16_t * b, uint16_t * c);
void coefficient_mul_asm(uint16_t * out, uint16_t * b, uint16_t * c);
void coefficient_sub_asm(uint16_t * out, uint16_t * b, uint16_t * c);
void coefficient_mul_add_asm(uint16_t * out, uint16_t * large1, uint16_t * large2, uint16_t * large3);

void a_gen_asm(uint16_t * a);
void r1_gen_asm(uint16_t * r1);
void r2_gen_asm(uint16_t * r2);

void rearrange_asm(uint16_t * a);

void fwd_ntt_asm(uint16_t * a);
void inv_ntt_asm(uint16_t * a);

void encode_message_asm(uint16_t * destination, uint16_t * source);

void fwd_ntt_parallel_asm(uint16_t * a);
void RLWE_dec_asm(uint16_t * c1, uint16_t * c2, uint16_t * r2);
void RLWE_enc_asm(uint16_t * a, uint16_t * c1, uint16_t * c2, uint16_t * out, uint16_t * p);
void message_gen_asm(uint16_t * out);
void key_gen_asm(uint16_t * a, uint16_t * r1, uint16_t * r2);
void rearrange_for_final_test_asm(uint32_t in[M],uint32_t out[M]);

void bitreverse_asm(uint32_t a[M]);
void insert_highval(uint32_t * a, uint32_t b);
void insert_lowval(uint32_t * a, uint32_t b);
void ntt_multiply_asm(uint16_t * a, uint16_t * b, uint16_t * out);

#endif /* LWE_ARM_H_ */
