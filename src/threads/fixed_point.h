#ifndef FIXED_POINT_H
#define FIXED_POINT_H
#define fp_t int
#define P 17 // 정수부분
#define Q 14 // 소수부분
#define FRACTION 1<<(Q)
#if P + Q != 31
#error "FATAL ERROR: P + Q != 31."
#endif
#define FP_ADD(x, y) (x) + (y)
#define FP_SUB(x, y) (x) - (y)
#define CONVERT_TO_FP(x) (x) * (FRACTION)
#define CONVERT_TO_INT_ZERO(x) (x) / (FRACTION)
#define CONVERT_TO_INT_NEAR(x) ((x) >= 0 ? ((x) + (FRACTION) / 2) / (FRACTION) : ((x) - (FRACTION) / 2) / (FRACTION))
#define FP_MUL(x, y) ((int64_t)(x)) * (y) / (FRACTION)
#define FP_DIV(x, y) ((int64_t)(x)) * (FRACTION) / (y)
#endif