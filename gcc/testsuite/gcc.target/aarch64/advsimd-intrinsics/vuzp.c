#include <arm_neon.h>
#include "arm-neon-ref.h"
#include "compute-ref-data.h"

/* Expected results splitted in several chunks.  */
/* Chunk 0.  */
VECT_VAR_DECL(expected0,int,8,8) [] = { 0xf0, 0xf1, 0xf2, 0xf3,
					0xf4, 0xf5, 0xf6, 0xf7 };
VECT_VAR_DECL(expected0,int,16,4) [] = { 0xfff0, 0xfff1,
					 0xfff2, 0xfff3 };
VECT_VAR_DECL(expected0,int,32,2) [] = { 0xfffffff0, 0xfffffff1 };
VECT_VAR_DECL(expected0,int,64,1) [] = { 0x3333333333333333 };
VECT_VAR_DECL(expected0,uint,8,8) [] = { 0xf0, 0xf1, 0xf2, 0xf3,
					 0xf4, 0xf5, 0xf6, 0xf7 };
VECT_VAR_DECL(expected0,uint,16,4) [] = { 0xfff0, 0xfff1,
					  0xfff2, 0xfff3 };
VECT_VAR_DECL(expected0,uint,32,2) [] = { 0xfffffff0,
					  0xfffffff1 };
VECT_VAR_DECL(expected0,uint,64,1) [] = { 0x3333333333333333 };
VECT_VAR_DECL(expected0,poly,8,8) [] = { 0xf0, 0xf1, 0xf2, 0xf3,
					 0xf4, 0xf5, 0xf6, 0xf7 };
VECT_VAR_DECL(expected0,poly,16,4) [] = { 0xfff0, 0xfff1,
					  0xfff2, 0xfff3 };
VECT_VAR_DECL(expected0,hfloat,32,2) [] = { 0xc1800000, 0xc1700000 };
VECT_VAR_DECL(expected0,int,8,16) [] = { 0xf0, 0xf1, 0xf2, 0xf3,
					 0xf4, 0xf5, 0xf6, 0xf7,
					 0xf8, 0xf9, 0xfa, 0xfb,
					 0xfc, 0xfd, 0xfe, 0xff };
VECT_VAR_DECL(expected0,int,16,8) [] = { 0xfff0, 0xfff1,
					 0xfff2, 0xfff3,
					 0xfff4, 0xfff5,
					 0xfff6, 0xfff7 };
VECT_VAR_DECL(expected0,int,32,4) [] = { 0xfffffff0, 0xfffffff1,
					 0xfffffff2, 0xfffffff3 };
VECT_VAR_DECL(expected0,int,64,2) [] = { 0x3333333333333333,
					 0x3333333333333333 };
VECT_VAR_DECL(expected0,uint,8,16) [] = { 0xf0, 0xf1, 0xf2, 0xf3,
					  0xf4, 0xf5, 0xf6, 0xf7,
					  0xf8, 0xf9, 0xfa, 0xfb,
					  0xfc, 0xfd, 0xfe, 0xff };
VECT_VAR_DECL(expected0,uint,16,8) [] = { 0xfff0, 0xfff1,
					  0xfff2, 0xfff3,
					  0xfff4, 0xfff5,
					  0xfff6, 0xfff7 };
VECT_VAR_DECL(expected0,uint,32,4) [] = { 0xfffffff0, 0xfffffff1,
					  0xfffffff2, 0xfffffff3 };
VECT_VAR_DECL(expected0,uint,64,2) [] = { 0x3333333333333333,
					  0x3333333333333333 };
VECT_VAR_DECL(expected0,poly,8,16) [] = { 0xf0, 0xf1, 0xf2, 0xf3,
					  0xf4, 0xf5, 0xf6, 0xf7,
					  0xf8, 0xf9, 0xfa, 0xfb,
					  0xfc, 0xfd, 0xfe, 0xff };
VECT_VAR_DECL(expected0,poly,16,8) [] = { 0xfff0, 0xfff1,
					  0xfff2, 0xfff3,
					  0xfff4, 0xfff5,
					  0xfff6, 0xfff7 };
VECT_VAR_DECL(expected0,hfloat,32,4) [] = { 0xc1800000, 0xc1700000,
					    0xc1600000, 0xc1500000 };

/* Chunk 1.  */
VECT_VAR_DECL(expected1,int,8,8) [] = { 0x11, 0x11, 0x11, 0x11,
					0x11, 0x11, 0x11, 0x11 };
VECT_VAR_DECL(expected1,int,16,4) [] = { 0x22, 0x22, 0x22, 0x22 };
VECT_VAR_DECL(expected1,int,32,2) [] = { 0x33, 0x33 };
VECT_VAR_DECL(expected1,int,64,1) [] = { 0x3333333333333333 };
VECT_VAR_DECL(expected1,uint,8,8) [] = { 0x55, 0x55, 0x55, 0x55,
					 0x55, 0x55, 0x55, 0x55 };
VECT_VAR_DECL(expected1,uint,16,4) [] = { 0x66, 0x66, 0x66, 0x66 };
VECT_VAR_DECL(expected1,uint,32,2) [] = { 0x77, 0x77 };
VECT_VAR_DECL(expected1,uint,64,1) [] = { 0x3333333333333333 };
VECT_VAR_DECL(expected1,poly,8,8) [] = { 0x55, 0x55, 0x55, 0x55,
					 0x55, 0x55, 0x55, 0x55 };
VECT_VAR_DECL(expected1,poly,16,4) [] = { 0x66, 0x66, 0x66, 0x66 };
VECT_VAR_DECL(expected1,hfloat,32,2) [] = { 0x42066666, 0x42066666 };
VECT_VAR_DECL(expected1,int,8,16) [] = { 0x11, 0x11, 0x11, 0x11,
					 0x11, 0x11, 0x11, 0x11,
					 0x11, 0x11, 0x11, 0x11,
					 0x11, 0x11, 0x11, 0x11 };
VECT_VAR_DECL(expected1,int,16,8) [] = { 0x22, 0x22, 0x22, 0x22,
					 0x22, 0x22, 0x22, 0x22 };
VECT_VAR_DECL(expected1,int,32,4) [] = { 0x33, 0x33, 0x33, 0x33 };
VECT_VAR_DECL(expected1,int,64,2) [] = { 0x3333333333333333,
					 0x3333333333333333 };
VECT_VAR_DECL(expected1,uint,8,16) [] = { 0x55, 0x55, 0x55, 0x55,
					  0x55, 0x55, 0x55, 0x55,
					  0x55, 0x55, 0x55, 0x55,
					  0x55, 0x55, 0x55, 0x55 };
VECT_VAR_DECL(expected1,uint,16,8) [] = { 0x66, 0x66, 0x66, 0x66,
					  0x66, 0x66, 0x66, 0x66 };
VECT_VAR_DECL(expected1,uint,32,4) [] = { 0x77, 0x77, 0x77, 0x77 };
VECT_VAR_DECL(expected1,uint,64,2) [] = { 0x3333333333333333,
					  0x3333333333333333 };
VECT_VAR_DECL(expected1,poly,8,16) [] = { 0x55, 0x55, 0x55, 0x55,
					  0x55, 0x55, 0x55, 0x55,
					  0x55, 0x55, 0x55, 0x55,
					  0x55, 0x55, 0x55, 0x55 };
VECT_VAR_DECL(expected1,poly,16,8) [] = { 0x66, 0x66, 0x66, 0x66,
					  0x66, 0x66, 0x66, 0x66 };
VECT_VAR_DECL(expected1,hfloat,32,4) [] = { 0x42073333, 0x42073333,
					    0x42073333, 0x42073333 };

#define INSN_NAME vuzp
#define TEST_MSG "VUZP/VUZPQ"

#include "vshuffle.inc"