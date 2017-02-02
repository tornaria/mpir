/* Generated by tuneup.c, 2017-01-31, gcc 5.4 */

#define MUL_KARATSUBA_THRESHOLD          16
#define MUL_TOOM3_THRESHOLD             102
#define MUL_TOOM4_THRESHOLD             107
#define MUL_TOOM8H_THRESHOLD            351

#define SQR_BASECASE_THRESHOLD            0  /* always (native) */
#define SQR_KARATSUBA_THRESHOLD          22
#define SQR_TOOM3_THRESHOLD             121
#define SQR_TOOM4_THRESHOLD             942
#define SQR_TOOM8_THRESHOLD             942

#define POWM_THRESHOLD                  162

#define DIVREM_1_NORM_THRESHOLD       MP_SIZE_T_MAX  /* never */
#define DIVREM_1_UNNORM_THRESHOLD     MP_SIZE_T_MAX  /* never */
#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define USE_PREINV_DIVREM_1               1  /* native */
#define USE_PREINV_MOD_1                  1
#define DIVEXACT_1_THRESHOLD              0  /* always */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always (native) */
#define MOD_1_1_THRESHOLD                 8
#define MOD_1_2_THRESHOLD                 8
#define MOD_1_3_THRESHOLD                13
#define DIVREM_HENSEL_QR_1_THRESHOLD     13
#define RSH_DIVREM_HENSEL_QR_1_THRESHOLD     13
#define DIVREM_EUCLID_HENSEL_THRESHOLD    120

#define MUL_FFT_FULL_THRESHOLD         3904

#define SQR_FFT_FULL_THRESHOLD         3392

#define MULLOW_BASECASE_THRESHOLD         0  /* always */
#define MULLOW_DC_THRESHOLD              30
#define MULLOW_MUL_THRESHOLD           5565

#define MULHIGH_BASECASE_THRESHOLD        5
#define MULHIGH_DC_THRESHOLD             29
#define MULHIGH_MUL_THRESHOLD          2966

#define MULMOD_2EXPM1_THRESHOLD          14

#define DC_DIV_QR_THRESHOLD              47
#define INV_DIV_QR_THRESHOLD           1718
#define INV_DIVAPPR_Q_N_THRESHOLD        47
#define DC_DIV_Q_THRESHOLD               60
#define INV_DIV_Q_THRESHOLD            1470
#define DC_DIVAPPR_Q_THRESHOLD           34
#define INV_DIVAPPR_Q_THRESHOLD       15758
#define DC_BDIV_QR_THRESHOLD             52
#define DC_BDIV_Q_THRESHOLD              32

#define ROOTREM_THRESHOLD                 6

#define MATRIX22_STRASSEN_THRESHOLD      19
#define HGCD_THRESHOLD                   96
#define HGCD_APPR_THRESHOLD              50
#define HGCD_REDUCE_THRESHOLD          6852
#define GCD_DC_THRESHOLD                365
#define GCDEXT_DC_THRESHOLD             241
#define JACOBI_BASE_METHOD                1

#define GET_STR_DC_THRESHOLD             12
#define GET_STR_PRECOMPUTE_THRESHOLD     20
#define SET_STR_DC_THRESHOLD            426
#define SET_STR_PRECOMPUTE_THRESHOLD   1627

#define FAC_DSC_THRESHOLD               244
#define FAC_ODD_THRESHOLD                27

/* fft_tuning -- autogenerated by tune-fft */

#define FFT_TAB \
   { { 4, 3 }, { 4, 3 }, { 3, 2 }, { 2, 1 }, { 1, 0 } }

#define MULMOD_TAB \
   { 4, 4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 3, 3, 2, 2, 2, 2, 1, 1 }

#define FFT_N_NUM 19

#define FFT_MULMOD_2EXPP1_CUTOFF 256


/* Tuneup completed successfully, took 129 seconds */
