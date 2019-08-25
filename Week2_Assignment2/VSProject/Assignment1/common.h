#pragma once
#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

using QWORD  = uint64_t;
using SQWORD = int64_t;
using DWORD  = uint32_t;
using SDWORD = int32_t;
using WORD   = uint16_t;
using SWORD  = int16_t;
using BYTE   = uint8_t;
using SBYTE  = int8_t;
using DOUBLE = double;
using FLOAT  = float;

#define MIN_SDWORD (-2147483648)
#define MAX_SDWORD (2147483647)
#define MIN_SBYTE (-128)
#define MAX_SBYTE (127)

#define MIN_SQWORD (0x8000000000000000)
#define MAX_SQWORD (0x7FFFFFFFFFFFFFFF)

#define MAX_QWORD  (0xFFFFFFFFFFFFFFFF)
#define MAX_DWORD  (0xFFFFFFFF)
#define MAX_WORD   (0xFFFF)
#define MAX_BYTE   (0xFF)

#define MAX_DOUBLE      (1.0e+308)
#define DOUBLE_EPS      (1.0e-12)
#define MIN_DOUBLE_N    (-1.0e+308)

#define ArrayLength(a)  (sizeof(a) / sizeof(a[0]))

static inline DOUBLE MAX(const DOUBLE a, const DOUBLE b) { return a > b ? a : b; }
static inline QWORD  MAX(const QWORD a,  const QWORD b)  { return a > b ? a : b; }
static inline DWORD  MAX(const DWORD a,  const DWORD b)  { return a > b ? a : b; }
static inline SDWORD MAX(const SDWORD a, const SDWORD b) { return a > b ? a : b; }
static inline DOUBLE MIN(const DOUBLE a, const DOUBLE b) { return a < b ? a : b; }
static inline QWORD  MIN(const QWORD a,  const QWORD b)  { return a < b ? a : b; }
static inline DWORD  MIN(const DWORD a,  const DWORD b)  { return a < b ? a : b; }
static inline SDWORD MIN(const SDWORD a, const SDWORD b) { return a < b ? a : b; }

static inline bool BitTst(const WORD  a, const WORD mask)  { return (a & mask); };
static inline bool BitTst(const DWORD a, const DWORD mask) { return (a & mask); };
static inline bool BitTst(const QWORD a, const QWORD mask) { return (a & mask); };
static inline void BitSet(WORD& a,  const WORD mask)  { a |= mask; };
static inline void BitSet(DWORD& a, const DWORD mask) { a |= mask; };
static inline void BitSet(QWORD& a, const QWORD mask) { a |= mask; };
static inline void BitRst(WORD& a,  const WORD mask)  { a &= (~mask); };
static inline void BitRst(DWORD& a, const DWORD mask) { a &= (~mask); };
static inline void BitRst(QWORD& a, const QWORD mask) { a &= (~mask); };

#define WORD_MASK	(0xFFFF)
#define WORD_L		(0)
#define WORD_H		(1)
#define EXTRACT_WORD(val, pos)		((val >> pos * WORD_BITS) & MAX_WORD);
#define COMBINE_DWORD(valL, valH)	((valL) | (valH << WORD_BITS))

#define BYTE_BITS   (8)
#define WORD_BITS   (16)
#define DWORD_BITS  (32)
#define QWORD_BITS  (64)
