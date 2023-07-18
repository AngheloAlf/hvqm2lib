#include "hvqm/hvqm2dec.h"
#include "hvqm/HVQM2File.h"
#include "hvqm/HVQmd.h"
#include "include_asm.h"
#include "custom_macros.h"

#define UNK_SIZE 1

typedef void* UNK_PTR;

typedef s32 UNK_TYPE;


typedef struct struct_00000040_arg0 {
    /* 0x0 */ u32 unk_0;
    /* 0x4 */ s32 unk_4;
    /* 0x8 */ s32 *unk_8;
} struct_00000040_arg0; // size = 0xC

// guessed size
typedef struct struct_00000040_arg1 {
    /* 0x000 */ u16 unk_000;
    /* 0x002 */ u16 unk_002[UNK_SIZE];
    /* 0x004 */ char unk_004[0x3FE];
    /* 0x402 */ u16 unk_402[UNK_SIZE];
    /* 0x404 */ char unk_404[0x3FE];
} struct_00000040_arg1; // size = 0x802

// guessed size
typedef struct struct_009240 {
    /* 0x00 */ u8 *unk_00;
    /* 0x04 */ u8 *unk_04;
    /* 0x08 */ u8 *unk_08;
    /* 0x0C */ u8 *unk_0C;
    /* 0x10 */ u8 *unk_10;
    /* 0x14 */ u8 *unk_14;
    /* 0x18 */ u8 unk_18;
    /* 0x18 */ u8 unk_19;
    /* 0x18 */ u8 unk_1A;
    /* 0x18 */ u8 unk_1B;
    /* 0x1C */ u8 unk_1C;
} struct_009240; // size = 0x1D

extern u8 B_006010[0xA64];
// STATIC u8 B_006010[0xA64];
/* .space 0xA64 */

extern struct_00000040_arg0 B_006A74;
// STATIC struct_00000040_arg0 B_006A74;
/* .space 0x0C */

extern struct_00000040_arg0 B_006A80;
// STATIC struct_00000040_arg0 B_006A80;
/* .space 0x0C */

// array?
extern struct_00000040_arg0 B_006A90;
// STATIC struct_00000040_arg0 B_006A90;
/* .space 0x0C */

extern struct_00000040_arg0 B_006A9C;
// STATIC struct_00000040_arg0 B_006A9C;
/* .space 0x0C */

extern struct_00000040_arg0 B_006AA8;
// STATIC struct_00000040_arg0 B_006AA8;
/* .space 0x0C */

extern struct_00000040_arg0 B_006AB4;
// STATIC struct_00000040_arg0 B_006AB4;
/* .space 0x0C */

extern struct_00000040_arg0 B_006AC0[3];
// STATIC struct_00000040_arg0 B_006AC0[3];
/* .space 0x24 */

extern struct_00000040_arg0 B_006AE8;
// STATIC struct_00000040_arg0 B_006AE8;
/* .space 0x0C */

extern struct_00000040_arg0 B_006AF4;
// STATIC struct_00000040_arg0 B_006AF4;
/* .space 0x0C */

extern struct_00000040_arg0 B_006B00;
// STATIC struct_00000040_arg0 B_006B00;
/* .space 0x0C */

extern struct_00000040_arg0 B_006B10[3];
// STATIC struct_00000040_arg0 B_006B10[3];
/* .space 0x24 */

extern UNK_PTR B_006B34[3];
// STATIC UNK_PTR B_006B34[3];
/* .space 0x0C */

extern struct_00000040_arg1 B_006B40;
// STATIC struct_00000040_arg1 B_006B40;
/* .space 0x802 */

extern struct_00000040_arg1 B_007350;
// STATIC struct_00000040_arg1 B_007350;
/* .space 0x802 */

extern struct_00000040_arg1 B_007B60;
// STATIC struct_00000040_arg1 B_007B60;
/* .space 0x802 */

extern struct_00000040_arg1 B_008370;
// STATIC struct_00000040_arg1 B_008370;
/* .space 0x802 */

extern struct_00000040_arg1 B_008B80;
// STATIC struct_00000040_arg1 B_008B80;
/* .space 0x802 */

extern u16 B_009382;
// STATIC u16 B_009382;
/* .space 0x02 */

extern s16 B_009384;
// STATIC s16 B_009384;
/* .space 0x02 */

extern s16 B_009386;
// STATIC s16 B_009386;
/* .space 0x02 */

extern u8 *B_009388;
// STATIC u8 *B_009388;
/* .space 0x04 */

extern u8 *B_00938C;
// STATIC u8 *B_00938C;
/* .space 0x04 */

extern u8 *B_009390;
// STATIC u8 *B_009390;
/* .space 0x04 */

extern u8 *B_009394;
// STATIC u8 *B_009394;
/* .space 0x04 */

extern u8 *B_009398;
// STATIC u8 *B_009398;
/* .space 0x04 */

extern u8 *B_00939C;
// STATIC u8 *B_00939C;
/* .space 0x04 */

extern struct_009240 B_0093A0;
// STATIC struct_009240 B_0093A0;
/* .space 0x1D */

extern struct_009240 B_0093C0;
// STATIC struct_009240 B_0093C0;
/* .space 0x1D */

extern struct_009240 B_0093E0;
// STATIC struct_009240 B_0093E0;
/* .space 0x1D */

extern struct_009240 B_009400;
// STATIC struct_009240 B_009400;
/* .space 0x1D */

extern u32 B_009420[0x200];
// STATIC u32 B_009420[0x200];
/* .space 0x800 */

extern u8 B_009C20[0x300];
// STATIC u8 B_009C20[0x300];
/* .space 0x300 */

extern void (*B_009F20)(u32 *outbuf, u16 arg1[4][0x10], u16 arg2[0x10], u16 arg3[0x10]);
// STATIC void (*B_009F20)(u32 *outbuf, u16 arg1[4][0x10], u16 arg2[0x10], u16 arg3[0x10]);
/* .space 0x04 */

extern s32 B_009F24;
// STATIC s32 B_009F24;
/* .space 0x04 */

extern s32 B_009F28;
// STATIC s32 B_009F28;
/* .space 0x04 */

extern s32 B_009F2C;
// STATIC s32 B_009F2C;
/* .space 0x04 */

extern s32 B_009F30;
// STATIC s32 B_009F30;
/* .space 0x04 */

extern s32 B_009F34;
// STATIC s32 B_009F34;
/* .space 0x04 */

extern s32 B_009F38;
// STATIC s32 B_009F38;
/* .space 0x04 */

extern s32 B_009F3C;
// STATIC s32 B_009F3C;
/* .space 0x04 */

extern s32 B_009F40;
// STATIC s32 B_009F40;
/* .space 0x04 */

extern s32 B_009F44;
// STATIC s32 B_009F44;
/* .space 0x04 */

extern s32 B_009F48;
// STATIC s32 B_009F48;
/* .space 0x04 */

extern s32 B_009F4C;
// STATIC s32 B_009F4C;
/* .space 0x04 */

extern s32 B_009F50;
// STATIC s32 B_009F50;
/* .space 0x04 */

extern s32 B_009F54;
// STATIC s32 B_009F54;
/* .space 0x04 */

extern s32 B_009F58;
// STATIC s32 B_009F58;
/* .space 0x04 */

extern s32 B_009F5C;
// STATIC s32 B_009F5C;
/* .space 0x04 */

extern u8 *B_009F60;
// STATIC u8 *B_009F60;
/* .space 0x04 */

extern s32 B_009F64;
// STATIC s32 B_009F64;
/* .space 0x04 */

extern s32 B_009F68;
// STATIC s32 B_009F68;
/* .space 0x04 */

extern u8 B_009F6C;
// STATIC u8 B_009F6C;
/* .space 0x01 */

extern u8 B_009F6D;
// STATIC u8 B_009F6D;
/* .space 0x01 */

extern u16 B_009F70[4][0x10];
// STATIC u16 B_009F70[4][0x10];
/* .space 0x80 */

extern u16 B_009FF0[0x10];
// STATIC u16 B_009FF0[0x10];
/* .space 0x20 */

extern u16 B_00A010[0x10];
// STATIC u16 B_00A010[0x10];
/* .space 0x20 */


STATIC_INLINE u32 inlined_func_00(struct_00000040_arg0 *arg0) {
    u32 ret;

    if (arg0->unk_0 == 0) {
        arg0->unk_4 = *arg0->unk_8++;
        arg0->unk_0 = 0x80000000;
    }

    ret = !!(arg0->unk_4 & arg0->unk_0);
    arg0->unk_0 >>= 1;

    return ret;
}

STATIC_INLINE s16 inlined_func_01(void) {
    return B_009382++;
}

STATIC_INLINE s16 inlined_func_02(struct_00000040_arg0 *arg0, struct_00000040_arg1 *arg1) {
    s16 var_a1 = arg1->unk_000;

    while (var_a1 >= 0x100) {
        if (inlined_func_00(arg0)) {
            var_a1 = arg1->unk_402[var_a1];
        } else {
            var_a1 = arg1->unk_002[var_a1];
        }
    }

    return var_a1;
}

STATIC_INLINE s16 inlined_func_03(struct_00000040_arg0 *arg0, struct_00000040_arg1 *arg1) {
    return arg1->unk_002[inlined_func_02(arg0, arg1)];
}

STATIC u32 func_00000040(struct_00000040_arg0 *arg0, struct_00000040_arg1 *arg1) {
    u32 temp7;
    u32 temp6;
    u32 temp5;
    u32 temp4;
    u32 temp3;
    u32 temp2;
    u32 temp1;
    u32 temp0;

    if (inlined_func_00(arg0)) {
        s16 temp_s1 = inlined_func_01();

        arg1->unk_002[temp_s1] = func_00000040(arg0, arg1);
        arg1->unk_402[temp_s1] = func_00000040(arg0, arg1);
        return temp_s1;
    }

    temp7 = inlined_func_00(arg0);

    temp6 = inlined_func_00(arg0);

    temp5 = inlined_func_00(arg0);

    temp4 = inlined_func_00(arg0);

    temp3 = inlined_func_00(arg0);

    temp2 = inlined_func_00(arg0);

    temp1 = inlined_func_00(arg0);

    temp0 = inlined_func_00(arg0);

    return (temp7 << 7) | (temp6 << 6) | (temp5 << 5) | (temp4 << 4) | (temp3 << 3) | (temp2 << 2) | (temp1 << 1) | (temp0 << 0);
}

STATIC s32 func_000002F8(struct_00000040_arg0 *arg0) {
    s16 temp_v1 = inlined_func_03(arg0, &B_006B40);
    s16 var_t0 = temp_v1;

    if ((temp_v1 == B_009386) || (temp_v1 == B_009384)) {
        do {
            temp_v1 = inlined_func_03(arg0, &B_006B40);
            var_t0 += temp_v1;
        } while ((B_009386 >= temp_v1) || (temp_v1 >= B_009384));
    }

    return var_t0;
}

STATIC s32 func_000004A8(u8 *arg0, struct_00000040_arg0 *arg1, struct_00000040_arg0 *arg2) {
    u8 var_v0;

    if (*arg0 == 0) {
        var_v0 = inlined_func_02(arg1, &B_007350);

        if (var_v0 != 0) {
            return var_v0;
        }
        *arg0 = inlined_func_02(arg2, &B_007B60);
    } else {
        *arg0 -= 1;
    }
    return 0;
}

#if 0
void func_0000061C(u16 *arg0, struct_009240 *arg1, s32 arg2) {
    s16 sp0[0x10];
    s32 sp20;
    s16 temp_v0_40;
    s16 var_a1_2;
    s16 var_v0_10;
    s16 var_v0_11;
    s16 var_v0_12;
    s16 var_v0_13;
    s16 var_v0_14;
    s16 var_v0_15;
    s16 var_v0_16;
    s16 var_v0_3;
    s16 var_v0_4;
    s16 var_v0_5;
    s16 var_v0_6;
    s16 var_v0_7;
    s16 var_v0_8;
    s16 var_v0_9;
    s16 var_v1_2;
    s16 var_v1_3;
    s32 *temp_v0_20;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1_2;
    s32 temp_a3_2;
    s32 temp_lo;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_t3_2;
    s32 temp_t4;
    s32 temp_t4_2;
    s32 temp_t5;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1_3;
    u8 var_t2;
    s32 var_t7_2;
    s32 var_v0_2;
    s32 var_v1;
    u16 **temp_v1_6;
    u16 *temp_v0_21;
    u16 temp_t6;
    u32 temp_a0_5;
    u8 **temp_v1_5;
    u8 *temp_t0_2;
    u8 *temp_t0_3;
    u8 *temp_t0_4;
    u8 *temp_t0_5;
    u8 *temp_t0_6;
    u8 *temp_t0_7;
    u8 *temp_t0_8;
    u8 *temp_t0_9;
    u8 *temp_t2_2;
    u8 *temp_t2_3;
    u8 *temp_t2_4;
    u8 *temp_t2_5;
    u8 *temp_v0_4;
    u8 temp_a0_6;
    u8 temp_a0_7;
    u8 temp_a0_8;
    u8 temp_a0_9;
    u8 temp_a1_18;
    u8 temp_a1_19;
    u8 temp_a1_20;
    u8 temp_a1_21;
    u8 temp_a2_2;
    u8 temp_a3;
    u8 temp_t9;
    u8 temp_v0;
    u8 temp_v0_22;
    u8 temp_v0_23;
    u8 temp_v0_24;
    u8 temp_v0_25;
    u8 temp_v1_7;
    u8 temp_v1_8;
    u8 temp_v1_9;
    u8 var_a1;
    u8 var_t7;
    u8 *temp_v0_18;

    temp_v0 = arg1->unk_1A;
    temp_t9 = arg1->unk_1B;
    if (temp_v0 == 0) {
        var_t7 = temp_t9;
        if (arg1->unk_18 == 0) {
            var_t7 = arg1->unk_19;
        }
        var_a1 = temp_t9;
        if (*arg1->unk_00 == 0) {
            var_a1 = *arg1->unk_04;
        }
        if (*arg1->unk_10 == 0) {
            var_t2 = *arg1->unk_14;
        } else {
            var_t2 = temp_t9;
        }

        temp_v1_3 = (temp_t9 * 8) + 4;

        temp_t5 = temp_t9 * 2;
        temp_a3 = arg1->unk_1C;
        temp_a0 = var_a1 - var_t2;
        temp_v0_2 = temp_a3 - var_t7;

        temp_s2 = (var_t2 + var_t7) - temp_t5;
        temp_t3 = (var_a1 + var_t7) - temp_t5;
        temp_s3 = temp_a0 + temp_v0_2;
        temp_t1 = (var_a1 + temp_a3) - temp_t5;
        temp_t4 = var_a1 - temp_a3;
        temp_a0_2 = temp_a0 - temp_v0_2;
        temp_a1_2 = var_a1 - var_t7;
        temp_v0_3 = (temp_a3 + var_t2) - temp_t5;
        temp_a3_2 = var_t2 - temp_a3;
        temp_t2 = var_t2 - var_t7;

        arg0[0] = (u32) (temp_v1_3 + temp_s3 + temp_t1) >> 3;
        arg0[1] = (u32) (temp_v1_3 + temp_s3 + temp_t4) >> 3;
        arg0[2] = (u32) (temp_v1_3 + temp_a0_2 + temp_a1_2) >> 3;
        arg0[3] = (u32) (temp_v1_3 + temp_a0_2 + temp_t3) >> 3;
        arg0[4] = (u32) (temp_v1_3 + temp_s3 - temp_t4) >> 3;
        arg0[5] = (u32) (temp_v1_3 - temp_s2) >> 3;
        arg0[6] = (u32) (temp_v1_3 - temp_v0_3) >> 3;
        arg0[7] = (u32) (temp_v1_3 + temp_a0_2 - temp_a1_2) >> 3;
        arg0[8] = (u32) (temp_v1_3 - temp_a0_2 - temp_a3_2) >> 3;
        arg0[9] = (u32) (temp_v1_3 - temp_t3) >> 3;
        arg0[10] = (u32) (temp_v1_3 - temp_t1) >> 3;
        arg0[11] = (u32) (temp_v1_3 - temp_s3 - temp_t2) >> 3;
        arg0[12] = (u32) (temp_v1_3 - temp_a0_2 + temp_v0_3) >> 3;
        arg0[13] = (u32) (temp_v1_3 - temp_a0_2 + temp_a3_2) >> 3;
        arg0[14] = (u32) (temp_v1_3 - temp_s3 + temp_t2) >> 3;
        arg0[15] = (s32) (temp_v1_3 - temp_s3 + temp_s2) >> 3;

        arg1->unk_1C = temp_t9;
    } else {
        if (temp_v0 == 8) {
            temp_v1_5 = &B_006B34[arg2];

            temp_v0_4 = *temp_v1_5;
            *temp_v1_5 = temp_v0_4 + 0x10;

            arg0[0] = temp_v0_4[0];
            arg0[1] = temp_v0_4[1];
            arg0[2] = temp_v0_4[2];
            arg0[3] = temp_v0_4[3];
            arg0[4] = temp_v0_4[4];
            arg0[5] = temp_v0_4[5];
            arg0[6] = temp_v0_4[6];
            arg0[7] = temp_v0_4[7];
            arg0[8] = temp_v0_4[8];
            arg0[9] = temp_v0_4[9];
            arg0[10] = temp_v0_4[10];
            arg0[11] = temp_v0_4[11];
            arg0[12] = temp_v0_4[12];
            arg0[13] = temp_v0_4[13];
            arg0[14] = temp_v0_4[14];
            arg0[15] = temp_v0_4[15];
        } else {
            arg0[0] = temp_t9;
            arg0[1] = temp_t9;
            arg0[2] = temp_t9;
            arg0[3] = temp_t9;
            arg0[4] = temp_t9;
            arg0[5] = temp_t9;
            arg0[6] = temp_t9;
            arg0[7] = temp_t9;
            arg0[8] = temp_t9;
            arg0[9] = temp_t9;
            arg0[10] = temp_t9;
            arg0[11] = temp_t9;
            arg0[12] = temp_t9;
            arg0[13] = temp_t9;
            arg0[14] = temp_t9;
            arg0[15] = temp_t9;

            for (var_t7_2 = 0; var_t7_2 < temp_v0; var_t7_2++) {
                s32 temp;

                sp20 = inlined_func_03(&B_006AC0[arg2], &B_008370);

                temp_v1_6 = &B_006B34[arg2];
                temp_v0_21 = *temp_v1_6;
                temp_t6 = *temp_v0_21;
                *temp_v1_6 = temp_v0_21 + 2;
                temp_t4_2 = (temp_t6 & 1) + 1;
                temp_a0_5 = temp_t6 & 0xFFFF;

                if (B_009F6C == 8) {
                    var_v1 = ((temp_a0_5 >> 8) & 0x1F) * B_009F64;
                    var_v0_2 = (temp_a0_5 >> 2) & 0x3F;
                } else {
                    var_v1 = ((temp_a0_5 >> 7) & 0x3F) * B_009F64;
                    var_v0_2 = (temp_a0_5 >> 2) & 0x1F;
                }

                temp_t2_2 = B_009F60 + (var_v0_2 + var_v1);
                temp_a1_18 = *temp_t2_2;
                temp_t0_2 = temp_t2_2 + temp_t4_2;
                temp_lo = (((temp_a0_5 >> 1) & 1) + 1) * B_009F64;

                sp0[0] = (u16) temp_a1_18;
                temp_v0_22 = *temp_t0_2;
                temp_t0_3 = temp_t0_2 + temp_t4_2;
                sp0[1] = (s16) temp_v0_22;
                temp_v1_7 = *temp_t0_3;
                sp0[2] = (s16) temp_v1_7;
                temp_a0_6 = *(temp_t0_3 + temp_t4_2);
                sp0[3] = (s16) temp_a0_6;
                temp_t2_3 = temp_t2_2 + temp_lo;
                temp_a2_2 = *temp_t2_3;
                temp_t0_4 = temp_t2_3 + temp_t4_2;
                sp0[4] = (s16) temp_a2_2;
                temp_a1_19 = *temp_t0_4;
                temp_t2_4 = temp_t2_3 + temp_lo;
                temp_t0_5 = temp_t0_4 + temp_t4_2;
                sp0[5] = (s16) temp_a1_19;
                temp_v0_23 = *temp_t0_5;
                sp0[6] = (s16) temp_v0_23;
                temp_v1_8 = *(temp_t0_5 + temp_t4_2);
                sp0[7] = (s16) temp_v1_8;
                temp_a1_20 = *temp_t2_4;
                temp_t0_6 = temp_t2_4 + temp_t4_2;
                sp0[8] = (s16) temp_a1_20;
                temp_a0_7 = *temp_t0_6;
                temp_t2_5 = temp_t2_4 + temp_lo;
                temp_t0_7 = temp_t0_6 + temp_t4_2;
                sp0[9] = (s16) temp_a0_7;
                temp_v0_24 = *temp_t0_7;
                sp0[10] = (s16) temp_v0_24;
                temp_v1_9 = *(temp_t0_7 + temp_t4_2);
                sp0[11] = (s16) temp_v1_9;
                temp_a0_8 = *temp_t2_5;
                temp_t0_8 = temp_t2_5 + temp_t4_2;
                sp0[12] = (s16) temp_a0_8;
                temp_a1_21 = *temp_t0_8;
                temp_t0_9 = temp_t0_8 + temp_t4_2;
                sp0[13] = (s16) temp_a1_21;
                temp_v0_25 = *temp_t0_9;
                sp0[14] = (s16) temp_v0_25;
                temp_a0_9 = *(temp_t0_9 + temp_t4_2);
                sp0[15] = (s16) temp_a0_9;


                temp_t3_2 = temp_a0_9 + (temp_v0_25 + (temp_a1_21 + (temp_a0_8 + (temp_v1_9 + (temp_v0_24 + (temp_a0_7 + (temp_a1_20 + (temp_v1_8 + (temp_v0_23 + (temp_a1_19 + (temp_a2_2 + (temp_a0_6 + (temp_v1_7 + (temp_v0_22 + temp_a1_18))))))))))))));

                temp = (temp_t3_2 + 8) >> 4;


                sp0[0] = sp0[0] - temp;

                var_v1_2 = (s16) sp0[0];
                if (var_v1_2 < 0) {
                    var_v1_2 = -var_v1_2;
                }
                var_a1_2 = var_v1_2;
                sp0[1] = sp0[1] - temp;

                var_v0_3 = (s16) sp0[1];
                if (var_v0_3 < 0) {
                    var_v0_3 = -var_v0_3;
                }

                if (var_v1_2 < var_v0_3) {
                    var_a1_2 = var_v0_3;
                }
                sp0[2] = sp0[2] - temp;

                var_v0_4 = sp0[2];
                if (var_v0_4 < 0) {
                    var_v0_4 = -var_v0_4;
                }

                if (var_a1_2 < var_v0_4) {
                    var_a1_2 = var_v0_4;
                }
                sp0[3] = sp0[3] - temp;

                var_v0_5 = (s16) sp0[3];
                if (var_v0_5 < 0) {
                    var_v0_5 = -var_v0_5;
                }

                if (var_a1_2 < var_v0_5) {
                    var_a1_2 = var_v0_5;
                }
                sp0[4] = sp0[4] - temp;

                var_v0_6 = sp0[4];
                if (var_v0_6 < 0) {
                    var_v0_6 = -var_v0_6;
                }

                if (var_a1_2 < var_v0_6) {
                    var_a1_2 = var_v0_6;
                }
                sp0[5] = sp0[5] - temp;

                var_v0_7 = sp0[5];
                if (var_v0_7 < 0) {
                    var_v0_7 = -var_v0_7;
                }

                if (var_a1_2 < var_v0_7) {
                    var_a1_2 = var_v0_7;
                }
                sp0[6] = sp0[6] - temp;

                var_v0_8 = (s16) sp0[6];
                if (var_v0_8 < 0) {
                    var_v0_8 = -var_v0_8;
                }

                if (var_a1_2 < var_v0_8) {
                    var_a1_2 = var_v0_8;
                }
                sp0[7] = sp0[7] - temp;

                var_v0_9 = sp0[7];
                if (var_v0_9 < 0) {
                    var_v0_9 = -var_v0_9;
                }

                if (var_a1_2 < var_v0_9) {
                    var_a1_2 = var_v0_9;
                }
                sp0[8] = sp0[8] - temp;

                var_v0_10 = (s16) sp0[8];
                if (var_v0_10 < 0) {
                    var_v0_10 = -var_v0_10;
                }

                if (var_a1_2 < var_v0_10) {
                    var_a1_2 = var_v0_10;
                }
                sp0[9] = sp0[9] - temp;

                var_v0_11 = (s16) sp0[9];
                if (var_v0_11 < 0) {
                    var_v0_11 = -var_v0_11;
                }

                if (var_a1_2 < var_v0_11) {
                    var_a1_2 = var_v0_11;
                }
                sp0[10] = sp0[10] - temp;

                var_v0_12 = (s16) sp0[10];
                if (var_v0_12 < 0) {
                    var_v0_12 = -var_v0_12;
                }

                if (var_a1_2 < var_v0_12) {
                    var_a1_2 = var_v0_12;
                }
                sp0[11] = sp0[11] - temp;

                var_v0_13 = (s16) sp0[11];
                if (var_v0_13 < 0) {
                    var_v0_13 = -var_v0_13;
                }

                if (var_a1_2 < var_v0_13) {
                    var_a1_2 = var_v0_13;
                }
                sp0[12] = sp0[12] - temp;

                var_v0_14 = (s16) sp0[12];
                if (var_v0_14 < 0) {
                    var_v0_14 = -var_v0_14;
                }

                if (var_a1_2 < var_v0_14) {
                    var_a1_2 = var_v0_14;
                }
                sp0[13] = sp0[13] - temp;

                var_v0_15 = (s16) sp0[13];
                if (var_v0_15 < 0) {
                    var_v0_15 = -var_v0_15;
                }

                if (var_a1_2 < var_v0_15) {
                    var_a1_2 = var_v0_15;
                }
                sp0[14] = sp0[14] - temp;

                var_v0_16 = (s16) sp0[14];
                if (var_v0_16 < 0) {
                    var_v0_16 = -var_v0_16;
                }

                if (var_a1_2 < var_v0_16) {
                    var_a1_2 = var_v0_16;
                }
                sp0[15] = sp0[15] - temp;

                var_v1_3 = sp0[15];
                if (var_v1_3 < 0) {
                    var_v1_3 = -var_v1_3;
                }
                if (var_a1_2 < var_v1_3) {
                    var_a1_2 = var_v1_3;
                }

                sp20 = B_009420[var_a1_2] * (sp20 + (temp_t6 >> 0xD));

                arg0[0] += (s32) ((sp20 * sp0[0]) + 0x200) >> 0xA;
                arg0[1] += (s32) ((sp20 * sp0[1]) + 0x200) >> 0xA;
                arg0[2] += (s32) ((sp20 * sp0[2]) + 0x200) >> 0xA;
                arg0[3] += (s32) ((sp20 * sp0[3]) + 0x200) >> 0xA;
                arg0[4] += (s32) ((sp20 * sp0[4]) + 0x200) >> 0xA;
                arg0[5] += (s32) ((sp20 * sp0[5]) + 0x200) >> 0xA;
                arg0[6] += (s32) ((sp20 * sp0[6]) + 0x200) >> 0xA;
                arg0[7] += (s32) ((sp20 * sp0[7]) + 0x200) >> 0xA;
                arg0[8] += (s32) ((sp20 * sp0[8]) + 0x200) >> 0xA;
                arg0[9] += (s32) ((sp20 * sp0[9]) + 0x200) >> 0xA;
                arg0[10] += (s32) ((sp20 * sp0[10]) + 0x200) >> 0xA;
                arg0[11] += (s32) ((sp20 * sp0[11]) + 0x200) >> 0xA;
                arg0[12] += (s32) ((sp20 * sp0[12]) + 0x200) >> 0xA;
                arg0[13] += (s32) ((sp20 * sp0[13]) + 0x200) >> 0xA;
                arg0[14] += (s32) ((sp20 * sp0[14]) + 0x200) >> 0xA;
                arg0[15] += (s32) ((sp20 * sp0[15]) + 0x200) >> 0xA;
            }
        }

        arg1->unk_1C = arg1->unk_19;
    }

    arg1->unk_00 += 1;
    arg1->unk_04 += 1;
    arg1->unk_10 += 1;
    arg1->unk_14 += 1;
}
#else
void func_0000061C(u16 *arg0, struct_009240 *arg1, s32 arg2);
INCLUDE_ASM("asm/functions/hvqm2dec2", func_0000061C);
#endif

#ifdef NON_MATCHING
void func_000012E4(u32 *outbuf, u16 arg1[4][0x10], u16 arg2[0x10], u16 arg3[0x10]) {
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_a2;
    s16 temp_a3;
    s16 temp_t0;
    s16 temp_v0;
    s16 temp_v1;
    s32 var_t7;
    u16 *var_t2;
    u16 *var_t3;

    int new_var;

    var_t2 = arg1[0];
    var_t3 = arg1[1];

    for (var_t7 = 4; var_t7 > 0; var_t7--, outbuf += B_009F24) {
        temp_t0 = *var_t2++ << 6;
        temp_v1 = *arg3++ - 0x80;

        temp_a2 = 0x4020 + (temp_v1 * 0x5A);
        temp_a1 = *arg2++ - 0x80;

        new_var = temp_a1 * 0x16;
        temp_a0 = ((-(temp_v1 * 0x2E)) - new_var) + 0x4020;

        temp_a3 = 0x4020 + (temp_a1 * 0x71);

        outbuf[0] = (B_009C20[(s32) (temp_t0 + temp_a2) >> 6] << 0x18) | (B_009C20[(s32) (temp_t0 + temp_a0) >> 6] << 0x10) | (B_009C20[(s32) (temp_t0 + temp_a3) >> 6] << 8) | B_009F6D;

        temp_v0 = *var_t2++ << 6;
        outbuf[1] = (B_009C20[(s32) (temp_v0 + temp_a2) >> 6] << 0x18) | (B_009C20[(s32) (temp_v0 + temp_a0) >> 6] << 0x10) | (B_009C20[(s32) (temp_v0 + temp_a3) >> 6] << 8) | B_009F6D;


        temp_t0 = *var_t2++ << 6;
        temp_v1 = *arg3++ - 0x80;
        temp_a2 = (temp_v1 * 0x5A) + 0x4020;

        temp_a1 = *arg2++ - 0x80;


        new_var = temp_a1 * 0x16;
        temp_a0 = ((-(temp_v1 * 0x2E)) - new_var) + 0x4020;

        temp_a3 = (temp_a1 * 0x71) + 0x4020;

        outbuf[2] = (B_009C20[(s32) (temp_t0 + temp_a2) >> 6] << 0x18) | (B_009C20[(s32) (temp_t0 + temp_a0) >> 6] << 0x10) | (B_009C20[(s32) (temp_t0 + temp_a3) >> 6] << 8) | B_009F6D;

        temp_v0 = *var_t2++ << 6;

        outbuf[3] = (B_009C20[(s32) (temp_v0 + temp_a2) >> 6] << 0x18) | (B_009C20[(s32) (temp_v0 + temp_a0) >> 6] << 0x10) | (B_009C20[(s32) (temp_v0 + temp_a3) >> 6] << 8) | B_009F6D;


        temp_t0 = *var_t3++ << 6;
        temp_v1 = *arg3++ - 0x80;
        temp_a2 = (temp_v1 * 0x5A) + 0x4020;

        temp_a1 = *arg2++ - 0x80;


        new_var = temp_a1 * 0x16;
        temp_a0 = ((-(temp_v1 * 0x2E)) - new_var) + 0x4020;

        temp_a3 = (temp_a1 * 0x71) + 0x4020;

        outbuf[4] = (B_009C20[(s32) (temp_t0 + temp_a2) >> 6] << 0x18) | (B_009C20[(s32) (temp_t0 + temp_a0) >> 6] << 0x10) | (B_009C20[(s32) (temp_t0 + temp_a3) >> 6] << 8) | B_009F6D;


        temp_v0 = *var_t3++ << 6;

        outbuf[5] = (B_009C20[(s32) (temp_v0 + temp_a2) >> 6] << 0x18) | (B_009C20[(s32) (temp_v0 + temp_a0) >> 6] << 0x10) | (B_009C20[(s32) (temp_v0 + temp_a3) >> 6] << 8) | B_009F6D;


        temp_t0 = *var_t3++ << 6;
        temp_v1 = *arg3++ - 0x80;
        temp_a2 = (temp_v1 * 0x5A) + 0x4020;

        temp_a1 = *arg2++ - 0x80;


        new_var = temp_a1 * 0x16;
        temp_a0 = ((-(temp_v1 * 0x2E)) - new_var) + 0x4020;

        temp_a3 = (temp_a1 * 0x71) + 0x4020;

        outbuf[6] = (B_009C20[(s32) (temp_t0 + temp_a2) >> 6] << 0x18) | (B_009C20[(s32) (temp_t0 + temp_a0) >> 6] << 0x10) | (B_009C20[(s32) (temp_t0 + temp_a3) >> 6] << 8) | B_009F6D;

        temp_v0 = *var_t3++ << 6;

        outbuf[7] = (B_009C20[(s32) (temp_v0 + temp_a2) >> 6] << 0x18) | (B_009C20[(s32) (temp_v0 + temp_a0) >> 6] << 0x10) | (B_009C20[(s32) (temp_v0 + temp_a3) >> 6] << 8) | B_009F6D;
    }
}
#else
void func_000012E4(u32 *outbuf, u16 arg1[4][0x10], u16 arg2[0x10], u16 arg3[0x10]);
INCLUDE_ASM("asm/functions/hvqm2dec2", func_000012E4);
#endif

#if 0
void func_000018CC(u32 *outbuf, u16 arg1[4][0x10], u16 arg2[0x10], u16 arg3[0x10]) {
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_a0_4;
    s16 temp_a0_5;
    s16 temp_a0_6;
    s16 temp_a0_7;
    s16 temp_a0_8;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_a1_3;
    s16 temp_a1_4;
    s16 temp_a1_5;
    s16 temp_a1_6;
    s16 temp_a1_7;
    s16 temp_a1_8;
    s16 temp_a2;
    s16 temp_a2_2;
    s16 temp_a3;
    s16 temp_a3_2;
    s16 temp_s0;
    s16 temp_s0_2;
    s16 temp_s1;
    s16 temp_s1_2;
    s16 temp_t0;
    s16 temp_t0_2;
    s16 temp_t1;
    s16 temp_t1_2;
    s16 temp_t2;
    s16 temp_t2_2;
    s16 temp_t3;
    s16 temp_t3_2;
    s16 temp_t4;
    s16 temp_t4_2;
    s16 temp_t5;
    s16 temp_t5_2;
    s16 temp_t6;
    s16 temp_t6_2;
    s16 temp_t7;
    s16 temp_t7_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 temp_v1;
    s16 temp_v1_10;
    s16 temp_v1_11;
    s16 temp_v1_12;
    s16 temp_v1_13;
    s16 temp_v1_14;
    s16 temp_v1_15;
    s16 temp_v1_16;
    s16 temp_v1_17;
    s16 temp_v1_18;
    s16 temp_v1_19;
    s16 temp_v1_20;
    s16 temp_v1_21;
    s16 temp_v1_22;
    s16 temp_v1_23;
    s16 temp_v1_24;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 temp_v1_5;
    s16 temp_v1_6;
    s16 temp_v1_7;
    s16 temp_v1_8;
    s16 temp_v1_9;
    s32 var_s6;
    s32 var_s6_2;
    u16 (*temp_s7)[0x10];
    u16 (*var_t8)[0x10];
    u16 (*var_t8_2)[0x10];
    u16 (*var_t9)[0x10];
    u16 (*var_t9_2)[0x10];
    u16 *temp_s4;
    u16 *temp_s4_2;
    u16 *temp_s4_3;
    u16 *temp_s4_4;
    u16 *temp_s4_5;
    u16 *temp_s4_6;
    u16 *temp_s5;
    u16 *temp_s5_2;
    u16 *temp_s5_3;
    u16 *temp_s5_4;
    u16 *temp_s5_5;
    u16 *temp_s5_6;
    u16 *temp_t8;
    u16 *temp_t8_10;
    u16 *temp_t8_11;
    u16 *temp_t8_12;
    u16 *temp_t8_13;
    u16 *temp_t8_14;
    u16 *temp_t8_2;
    u16 *temp_t8_3;
    u16 *temp_t8_4;
    u16 *temp_t8_5;
    u16 *temp_t8_6;
    u16 *temp_t8_7;
    u16 *temp_t8_8;
    u16 *temp_t8_9;
    u16 *temp_t9;
    u16 *temp_t9_10;
    u16 *temp_t9_11;
    u16 *temp_t9_12;
    u16 *temp_t9_13;
    u16 *temp_t9_14;
    u16 *temp_t9_2;
    u16 *temp_t9_3;
    u16 *temp_t9_4;
    u16 *temp_t9_5;
    u16 *temp_t9_6;
    u16 *temp_t9_7;
    u16 *temp_t9_8;
    u16 *temp_t9_9;
    u16 *var_s4;
    u16 *var_s5;
    u32 *temp_s3;
    u32 *temp_s3_2;
    u32 *var_s3;

    var_s3 = outbuf;
    var_s5 = arg2;
    var_s4 = arg3;
    var_t8 = arg1;
    var_t9 = var_t8 + 0x20;
    temp_s7 = var_t9;
    var_s6 = 4;
    do {
        temp_t8 = &var_t8[0][1];
        temp_s4 = var_s4 + 2;
        temp_s5 = var_s5 + 2;
        temp_a0 = *var_s4 - 0x80;
        temp_s0 = (temp_a0 * 0x5A) + 0x4020;
        temp_v1 = *var_s5 - 0x80;
        temp_t2 = (-(temp_a0 * 0x2E) - (temp_v1 * 0x16)) + 0x4020;
        temp_a1 = var_t8[0][0] << 6;
        temp_s1 = (temp_v1 * 0x71) + 0x4020;
        var_s3->unk_0 = (B_009C20[(s32) (temp_a1 + temp_s0) >> 6] << 0x18) | (B_009C20[(s32) (temp_a1 + temp_t2) >> 6] << 0x10) | (B_009C20[(s32) (temp_a1 + temp_s1) >> 6] << 8) | B_009F6D;
        temp_t8_2 = temp_t8 + 2;
        temp_v1_2 = *temp_t8 << 6;
        var_s3->unk_4 = (s32) ((B_009C20[(s32) (temp_v1_2 + temp_s0) >> 6] << 0x18) | (B_009C20[(s32) (temp_v1_2 + temp_t2) >> 6] << 0x10) | (B_009C20[(s32) (temp_v1_2 + temp_s1) >> 6] << 8) | B_009F6D);
        temp_t8_3 = temp_t8_2 + 2;
        temp_v1_3 = *temp_s4 - 0x80;
        temp_t6 = (temp_v1_3 * 0x5A) + 0x4020;
        temp_a0_2 = *temp_s5 - 0x80;
        temp_t0 = (-(temp_v1_3 * 0x2E) - (temp_a0_2 * 0x16)) + 0x4020;
        temp_a1_2 = *temp_t8_2 << 6;
        temp_t7 = (temp_a0_2 * 0x71) + 0x4020;
        var_s3->unk_8 = (s32) ((B_009C20[(s32) (temp_a1_2 + temp_t6) >> 6] << 0x18) | (B_009C20[(s32) (temp_a1_2 + temp_t0) >> 6] << 0x10) | (B_009C20[(s32) (temp_a1_2 + temp_t7) >> 6] << 8) | B_009F6D);
        temp_s4_2 = temp_s4 + 2;
        temp_s5_2 = temp_s5 + 2;
        temp_v1_4 = *temp_t8_3 << 6;
        var_s3->unk_C = (s32) ((B_009C20[(s32) (temp_v1_4 + temp_t6) >> 6] << 0x18) | (B_009C20[(s32) (temp_v1_4 + temp_t0) >> 6] << 0x10) | (B_009C20[(s32) (temp_v1_4 + temp_t7) >> 6] << 8) | B_009F6D);
        temp_t9 = &var_t9[0][1];
        temp_s4_3 = temp_s4_2 + 2;
        temp_v1_5 = *temp_s4_2 - 0x80;
        temp_t4 = (temp_v1_5 * 0x5A) + 0x4020;
        temp_a0_3 = *temp_s5_2 - 0x80;
        temp_a3 = (-(temp_v1_5 * 0x2E) - (temp_a0_3 * 0x16)) + 0x4020;
        temp_a1_3 = var_t9[0][0] << 6;
        temp_t5 = (temp_a0_3 * 0x71) + 0x4020;
        var_s3->unk_10 = (s32) ((B_009C20[(s32) (temp_a1_3 + temp_t4) >> 6] << 0x18) | (B_009C20[(s32) (temp_a1_3 + temp_a3) >> 6] << 0x10) | (B_009C20[(s32) (temp_a1_3 + temp_t5) >> 6] << 8) | B_009F6D);
        temp_s5_3 = temp_s5_2 + 2;
        temp_t9_2 = temp_t9 + 2;
        temp_v1_6 = *temp_t9 << 6;
        var_s3->unk_14 = (s32) ((B_009C20[(s32) (temp_v1_6 + temp_t4) >> 6] << 0x18) | (B_009C20[(s32) (temp_v1_6 + temp_a3) >> 6] << 0x10) | (B_009C20[(s32) (temp_v1_6 + temp_t5) >> 6] << 8) | B_009F6D);
        temp_t9_3 = temp_t9_2 + 2;
        temp_v1_7 = *temp_s4_3 - 0x80;
        temp_t1 = (temp_v1_7 * 0x5A) + 0x4020;
        temp_a0_4 = *temp_s5_3 - 0x80;
        temp_a2 = (-(temp_v1_7 * 0x2E) - (temp_a0_4 * 0x16)) + 0x4020;
        temp_a1_4 = *temp_t9_2 << 6;
        temp_t3 = (temp_a0_4 * 0x71) + 0x4020;
        var_s3->unk_18 = (s32) ((B_009C20[(s32) (temp_a1_4 + temp_t1) >> 6] << 0x18) | (B_009C20[(s32) (temp_a1_4 + temp_a2) >> 6] << 0x10) | (B_009C20[(s32) (temp_a1_4 + temp_t3) >> 6] << 8) | B_009F6D);
        temp_t8_4 = temp_t8_3 + 2;
        temp_v1_8 = *temp_t9_3 << 6;
        var_s3->unk_1C = (s32) ((B_009C20[(s32) (temp_v1_8 + temp_t1) >> 6] << 0x18) | (B_009C20[(s32) (temp_v1_8 + temp_a2) >> 6] << 0x10) | (B_009C20[(s32) (temp_v1_8 + temp_t3) >> 6] << 8) | B_009F6D);
        temp_t8_5 = temp_t8_4 + 2;
        temp_v1_9 = *temp_t8_4 << 6;
        temp_s3 = &var_s3[B_009F24];
        temp_s3->unk_0 = (B_009C20[(s32) (temp_v1_9 + temp_s0) >> 6] << 0x18) | (B_009C20[(s32) (temp_v1_9 + temp_t2) >> 6] << 0x10) | (B_009C20[(s32) (temp_v1_9 + temp_s1) >> 6] << 8) | B_009F6D;
        temp_t8_6 = temp_t8_5 + 2;
        temp_v0 = *temp_t8_5 << 6;
        temp_s3->unk_4 = (s32) ((B_009C20[(s32) (temp_v0 + temp_s0) >> 6] << 0x18) | (B_009C20[(s32) (temp_v0 + temp_t2) >> 6] << 0x10) | (B_009C20[(s32) (temp_v0 + temp_s1) >> 6] << 8) | B_009F6D);
        temp_t8_7 = temp_t8_6 + 2;
        temp_v1_10 = *temp_t8_6 << 6;
        temp_s3->unk_8 = (s32) ((B_009C20[(s32) (temp_v1_10 + temp_t6) >> 6] << 0x18) | (B_009C20[(s32) (temp_v1_10 + temp_t0) >> 6] << 0x10) | (B_009C20[(s32) (temp_v1_10 + temp_t7) >> 6] << 8) | B_009F6D);
        temp_t9_4 = temp_t9_3 + 2;
        temp_v0_2 = *temp_t8_7 << 6;
        temp_s3->unk_C = (s32) ((B_009C20[(s32) (temp_v0_2 + temp_t6) >> 6] << 0x18) | (B_009C20[(s32) (temp_v0_2 + temp_t0) >> 6] << 0x10) | (B_009C20[(s32) (temp_v0_2 + temp_t7) >> 6] << 8) | B_009F6D);
        temp_t9_5 = temp_t9_4 + 2;
        temp_v1_11 = *temp_t9_4 << 6;
        temp_s3->unk_10 = (s32) ((B_009C20[(s32) (temp_v1_11 + temp_t4) >> 6] << 0x18) | (B_009C20[(s32) (temp_v1_11 + temp_a3) >> 6] << 0x10) | (B_009C20[(s32) (temp_v1_11 + temp_t5) >> 6] << 8) | B_009F6D);
        temp_t9_6 = temp_t9_5 + 2;
        temp_v0_3 = *temp_t9_5 << 6;
        temp_s3->unk_14 = (s32) ((B_009C20[(s32) (temp_v0_3 + temp_t4) >> 6] << 0x18) | (B_009C20[(s32) (temp_v0_3 + temp_a3) >> 6] << 0x10) | (B_009C20[(s32) (temp_v0_3 + temp_t5) >> 6] << 8) | B_009F6D);
        var_s6 -= 2;
        temp_t9_7 = temp_t9_6 + 2;
        temp_v1_12 = *temp_t9_6 << 6;
        temp_s3->unk_18 = (s32) ((B_009C20[(s32) (temp_v1_12 + temp_t1) >> 6] << 0x18) | (B_009C20[(s32) (temp_v1_12 + temp_a2) >> 6] << 0x10) | (B_009C20[(s32) (temp_v1_12 + temp_t3) >> 6] << 8) | B_009F6D);
        var_s4 = temp_s4_3 + 2;
        var_s5 = temp_s5_3 + 2;
        temp_v0_4 = *temp_t9_7 << 6;
        temp_s3->unk_1C = (s32) ((B_009C20[(s32) (temp_v0_4 + temp_t1) >> 6] << 0x18) | (B_009C20[(s32) (temp_v0_4 + temp_a2) >> 6] << 0x10) | (B_009C20[(s32) (temp_v0_4 + temp_t3) >> 6] << 8) | B_009F6D);
        var_t8 = (u16 (*)[0x10]) (temp_t8_7 + 2);
        var_t9 = (u16 (*)[0x10]) (temp_t9_7 + 2);
        var_s3 = &temp_s3[B_009F24];
    } while (var_s6 > 0);
    var_t8_2 = temp_s7 + 0x20;
    var_t9_2 = var_t8_2 + 0x20;
    var_s6_2 = 4;
    do {
        temp_t8_8 = &var_t8_2[0][1];
        temp_s4_4 = var_s4 + 2;
        temp_s5_4 = var_s5 + 2;
        temp_a0_5 = *var_s4 - 0x80;
        temp_s0_2 = (temp_a0_5 * 0x5A) + 0x4020;
        temp_v1_13 = *var_s5 - 0x80;
        temp_t2_2 = (-(temp_a0_5 * 0x2E) - (temp_v1_13 * 0x16)) + 0x4020;
        temp_a1_5 = var_t8_2[0][0] << 6;
        temp_s1_2 = (temp_v1_13 * 0x71) + 0x4020;
        var_s3->unk_0 = (B_009C20[(s32) (temp_a1_5 + temp_s0_2) >> 6] << 0x18) | (B_009C20[(s32) (temp_a1_5 + temp_t2_2) >> 6] << 0x10) | (B_009C20[(s32) (temp_a1_5 + temp_s1_2) >> 6] << 8) | B_009F6D;
        temp_t8_9 = temp_t8_8 + 2;
        temp_v1_14 = *temp_t8_8 << 6;
        var_s3->unk_4 = (s32) ((B_009C20[(s32) (temp_v1_14 + temp_s0_2) >> 6] << 0x18) | (B_009C20[(s32) (temp_v1_14 + temp_t2_2) >> 6] << 0x10) | (B_009C20[(s32) (temp_v1_14 + temp_s1_2) >> 6] << 8) | B_009F6D);
        temp_t8_10 = temp_t8_9 + 2;
        temp_v1_15 = *temp_s4_4 - 0x80;
        temp_t6_2 = (temp_v1_15 * 0x5A) + 0x4020;
        temp_a0_6 = *temp_s5_4 - 0x80;
        temp_t0_2 = (-(temp_v1_15 * 0x2E) - (temp_a0_6 * 0x16)) + 0x4020;
        temp_a1_6 = *temp_t8_9 << 6;
        temp_t7_2 = (temp_a0_6 * 0x71) + 0x4020;
        var_s3->unk_8 = (s32) ((B_009C20[(s32) (temp_a1_6 + temp_t6_2) >> 6] << 0x18) | (B_009C20[(s32) (temp_a1_6 + temp_t0_2) >> 6] << 0x10) | (B_009C20[(s32) (temp_a1_6 + temp_t7_2) >> 6] << 8) | B_009F6D);
        temp_s4_5 = temp_s4_4 + 2;
        temp_s5_5 = temp_s5_4 + 2;
        temp_v1_16 = *temp_t8_10 << 6;
        var_s3->unk_C = (s32) ((B_009C20[(s32) (temp_v1_16 + temp_t6_2) >> 6] << 0x18) | (B_009C20[(s32) (temp_v1_16 + temp_t0_2) >> 6] << 0x10) | (B_009C20[(s32) (temp_v1_16 + temp_t7_2) >> 6] << 8) | B_009F6D);
        temp_t9_8 = &var_t9_2[0][1];
        temp_s4_6 = temp_s4_5 + 2;
        temp_v1_17 = *temp_s4_5 - 0x80;
        temp_t4_2 = (temp_v1_17 * 0x5A) + 0x4020;
        temp_a0_7 = *temp_s5_5 - 0x80;
        temp_a3_2 = (-(temp_v1_17 * 0x2E) - (temp_a0_7 * 0x16)) + 0x4020;
        temp_a1_7 = var_t9_2[0][0] << 6;
        temp_t5_2 = (temp_a0_7 * 0x71) + 0x4020;
        var_s3->unk_10 = (s32) ((B_009C20[(s32) (temp_a1_7 + temp_t4_2) >> 6] << 0x18) | (B_009C20[(s32) (temp_a1_7 + temp_a3_2) >> 6] << 0x10) | (B_009C20[(s32) (temp_a1_7 + temp_t5_2) >> 6] << 8) | B_009F6D);
        temp_s5_6 = temp_s5_5 + 2;
        temp_t9_9 = temp_t9_8 + 2;
        temp_v1_18 = *temp_t9_8 << 6;
        var_s3->unk_14 = (s32) ((B_009C20[(s32) (temp_v1_18 + temp_t4_2) >> 6] << 0x18) | (B_009C20[(s32) (temp_v1_18 + temp_a3_2) >> 6] << 0x10) | (B_009C20[(s32) (temp_v1_18 + temp_t5_2) >> 6] << 8) | B_009F6D);
        temp_t9_10 = temp_t9_9 + 2;
        temp_v1_19 = *temp_s4_6 - 0x80;
        temp_t1_2 = (temp_v1_19 * 0x5A) + 0x4020;
        temp_a0_8 = *temp_s5_6 - 0x80;
        temp_a2_2 = (-(temp_v1_19 * 0x2E) - (temp_a0_8 * 0x16)) + 0x4020;
        temp_a1_8 = *temp_t9_9 << 6;
        temp_t3_2 = (temp_a0_8 * 0x71) + 0x4020;
        var_s3->unk_18 = (s32) ((B_009C20[(s32) (temp_a1_8 + temp_t1_2) >> 6] << 0x18) | (B_009C20[(s32) (temp_a1_8 + temp_a2_2) >> 6] << 0x10) | (B_009C20[(s32) (temp_a1_8 + temp_t3_2) >> 6] << 8) | B_009F6D);
        temp_t8_11 = temp_t8_10 + 2;
        temp_v1_20 = *temp_t9_10 << 6;
        var_s3->unk_1C = (s32) ((B_009C20[(s32) (temp_v1_20 + temp_t1_2) >> 6] << 0x18) | (B_009C20[(s32) (temp_v1_20 + temp_a2_2) >> 6] << 0x10) | (B_009C20[(s32) (temp_v1_20 + temp_t3_2) >> 6] << 8) | B_009F6D);
        temp_t8_12 = temp_t8_11 + 2;
        temp_v1_21 = *temp_t8_11 << 6;
        temp_s3_2 = &var_s3[B_009F24];
        temp_s3_2->unk_0 = (B_009C20[(s32) (temp_v1_21 + temp_s0_2) >> 6] << 0x18) | (B_009C20[(s32) (temp_v1_21 + temp_t2_2) >> 6] << 0x10) | (B_009C20[(s32) (temp_v1_21 + temp_s1_2) >> 6] << 8) | B_009F6D;
        temp_t8_13 = temp_t8_12 + 2;
        temp_v0_5 = *temp_t8_12 << 6;
        temp_s3_2->unk_4 = (s32) ((B_009C20[(s32) (temp_v0_5 + temp_s0_2) >> 6] << 0x18) | (B_009C20[(s32) (temp_v0_5 + temp_t2_2) >> 6] << 0x10) | (B_009C20[(s32) (temp_v0_5 + temp_s1_2) >> 6] << 8) | B_009F6D);
        temp_t8_14 = temp_t8_13 + 2;
        temp_v1_22 = *temp_t8_13 << 6;
        temp_s3_2->unk_8 = (s32) ((B_009C20[(s32) (temp_v1_22 + temp_t6_2) >> 6] << 0x18) | (B_009C20[(s32) (temp_v1_22 + temp_t0_2) >> 6] << 0x10) | (B_009C20[(s32) (temp_v1_22 + temp_t7_2) >> 6] << 8) | B_009F6D);
        temp_t9_11 = temp_t9_10 + 2;
        temp_v0_6 = *temp_t8_14 << 6;
        temp_s3_2->unk_C = (s32) ((B_009C20[(s32) (temp_v0_6 + temp_t6_2) >> 6] << 0x18) | (B_009C20[(s32) (temp_v0_6 + temp_t0_2) >> 6] << 0x10) | (B_009C20[(s32) (temp_v0_6 + temp_t7_2) >> 6] << 8) | B_009F6D);
        temp_t9_12 = temp_t9_11 + 2;
        temp_v1_23 = *temp_t9_11 << 6;
        temp_s3_2->unk_10 = (s32) ((B_009C20[(s32) (temp_v1_23 + temp_t4_2) >> 6] << 0x18) | (B_009C20[(s32) (temp_v1_23 + temp_a3_2) >> 6] << 0x10) | (B_009C20[(s32) (temp_v1_23 + temp_t5_2) >> 6] << 8) | B_009F6D);
        temp_t9_13 = temp_t9_12 + 2;
        temp_v0_7 = *temp_t9_12 << 6;
        temp_s3_2->unk_14 = (s32) ((B_009C20[(s32) (temp_v0_7 + temp_t4_2) >> 6] << 0x18) | (B_009C20[(s32) (temp_v0_7 + temp_a3_2) >> 6] << 0x10) | (B_009C20[(s32) (temp_v0_7 + temp_t5_2) >> 6] << 8) | B_009F6D);
        var_s6_2 -= 2;
        temp_t9_14 = temp_t9_13 + 2;
        temp_v1_24 = *temp_t9_13 << 6;
        temp_s3_2->unk_18 = (s32) ((B_009C20[(s32) (temp_v1_24 + temp_t1_2) >> 6] << 0x18) | (B_009C20[(s32) (temp_v1_24 + temp_a2_2) >> 6] << 0x10) | (B_009C20[(s32) (temp_v1_24 + temp_t3_2) >> 6] << 8) | B_009F6D);
        var_s4 = temp_s4_6 + 2;
        var_s5 = temp_s5_6 + 2;
        temp_v0_8 = *temp_t9_14 << 6;
        temp_s3_2->unk_1C = (s32) ((B_009C20[(s32) (temp_v0_8 + temp_t1_2) >> 6] << 0x18) | (B_009C20[(s32) (temp_v0_8 + temp_a2_2) >> 6] << 0x10) | (B_009C20[(s32) (temp_v0_8 + temp_t3_2) >> 6] << 8) | B_009F6D);
        var_t8_2 = (u16 (*)[0x10]) (temp_t8_14 + 2);
        var_t9_2 = (u16 (*)[0x10]) (temp_t9_14 + 2);
        var_s3 = &temp_s3_2[B_009F24];
    } while (var_s6_2 > 0);
}
#else
void func_000018CC(u32 *outbuf, u16 arg1[4][0x10], u16 arg2[0x10], u16 arg3[0x10]);
INCLUDE_ASM("asm/functions/hvqm2dec2", func_000018CC);
#endif

#if 0
extern s32 B_009F30;
extern s32 B_009F38;
extern s32 B_009F54;
extern u16 B_009F70;
extern u16 B_009FF0;
extern u16 B_00A010;

void func_00002B80(u32 *outbuf) {
    u32 *sp14;
    s32 var_s7;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_v1_13;
    u8 *temp_v1_14;
    u8 *temp_v1_15;
    u8 *temp_v1_16;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_t0;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    void *temp_v1;
    void *temp_v1_10;
    void *temp_v1_11;
    void *temp_v1_12;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_8;
    void *temp_v1_9;

    sp14 = outbuf;
    B_0093E0.unk_18 = *B_0093E0.unk_08;
    temp_v0 = *B_0093E0.unk_0C;
    B_0093E0.unk_1C = temp_v0;
    B_0093E0.unk_19 = temp_v0;
    B_009400.unk_18 = *B_009400.unk_08;
    temp_v0_2 = *B_009400.unk_0C;
    B_009400.unk_1C = temp_v0_2;
    B_009400.unk_19 = temp_v0_2;
    B_0093A0.unk_18.unk_0 = *B_0093A0.unk_08;
    temp_v0_3 = *B_0093A0.unk_0C;
    B_0093A0.unk_1C = temp_v0_3;
    B_0093A0.unk_19 = temp_v0_3;
    if (B_009F38 != 0) {
        B_0093C0.unk_18 = *B_0093C0.unk_08;
        temp_v0_4 = *B_0093C0.unk_0C;
        B_0093C0.unk_1C = temp_v0_4;
        B_0093C0.unk_19 = temp_v0_4;
    }
    var_s7 = B_009F54 - 1;
    if (var_s7 > 0) {
        temp_s2 = &B_0093C0.unk_1A - 0x1A;
        do {
            temp_a0 = B_0093A0.unk_18.unk_0;
            if ((temp_a0 & 0xFF) != 0x80) {
                temp_v1 = B_0093A0.unk_18.unk_-10;
                B_0093A0.unk_18.unk_2 = temp_a0;
                B_0093A0.unk_18.unk_-10 = (void *) (temp_v1 + 1);
                temp_v1_2 = B_0093A0.unk_18.unk_-C;
                B_0093A0.unk_18.unk_3 = (u8) B_0093A0.unk_18.unk_1;
                B_0093A0.unk_18.unk_-C = (void *) (temp_v1_2 + 1);
                B_0093A0.unk_18.unk_0 = temp_v1->unk_1;
                B_0093A0.unk_18.unk_1 = (u8) temp_v1_2->unk_1;
                func_0000061C(&B_009F70, &B_0093A0, 0);
                temp_v1_3 = B_0093A0.unk_18.unk_-10;
                B_0093A0.unk_18.unk_2 = (u8) B_0093A0.unk_18.unk_0;
                B_0093A0.unk_18.unk_-10 = (void *) (temp_v1_3 + 1);
                temp_v1_4 = B_0093A0.unk_18.unk_-C;
                B_0093A0.unk_18.unk_3 = (u8) B_0093A0.unk_18.unk_1;
                B_0093A0.unk_18.unk_-C = (void *) (temp_v1_4 + 1);
                B_0093A0.unk_18.unk_0 = temp_v1_3->unk_1;
                B_0093A0.unk_18.unk_1 = (u8) temp_v1_4->unk_1;
                func_0000061C(&B_009F70 + 0x20, &B_0093A0, 0);
                if (B_009F38 != 0) {
                    temp_v1_5 = B_0093C0.unk_1A.unk_-12;
                    B_0093C0.unk_1A.unk_0 = B_0093C0.unk_1A.unk_-2;
                    B_0093C0.unk_1A.unk_-12 = (void *) (temp_v1_5 + 1);
                    temp_v1_6 = B_0093C0.unk_1A.unk_-E;
                    B_0093C0.unk_1A.unk_1 = (u8) B_0093C0.unk_1A.unk_-1;
                    B_0093C0.unk_1A.unk_-E = (void *) (temp_v1_6 + 1);
                    B_0093C0.unk_1A.unk_-2 = (u8) temp_v1_5->unk_1;
                    B_0093C0.unk_1A.unk_-1 = (u8) temp_v1_6->unk_1;
                    func_0000061C(&B_009F70 + 0x40, (struct_009240 *) temp_s2, 0);
                    temp_v1_7 = B_0093C0.unk_1A.unk_-12;
                    B_0093C0.unk_1A.unk_0 = B_0093C0.unk_1A.unk_-2;
                    B_0093C0.unk_1A.unk_-12 = (void *) (temp_v1_7 + 1);
                    temp_v1_8 = B_0093C0.unk_1A.unk_-E;
                    B_0093C0.unk_1A.unk_1 = (u8) B_0093C0.unk_1A.unk_-1;
                    B_0093C0.unk_1A.unk_-E = (void *) (temp_v1_8 + 1);
                    B_0093C0.unk_1A.unk_-2 = (u8) temp_v1_7->unk_1;
                    B_0093C0.unk_1A.unk_-1 = (u8) temp_v1_8->unk_1;
                    func_0000061C(&B_009F70 + 0x60, (struct_009240 *) temp_s2, 0);
                }
                temp_v1_9 = (&B_0093E0.unk_18)[2].unk_-12;
                (&B_0093E0.unk_18)[2] = (&B_0093E0.unk_18)[2].unk_-2;
                (&B_0093E0.unk_18)[2].unk_-12 = (s32) (temp_v1_9 + 1);
                temp_v1_10 = (&B_0093E0.unk_18)[2].unk_-E;
                (&B_0093E0.unk_18)[2].unk_1 = (u8) (&B_0093E0.unk_18)[2].unk_-1;
                (&B_0093E0.unk_18)[2].unk_-E = (s32) (temp_v1_10 + 1);
                (&B_0093E0.unk_18)[2].unk_-2 = (u8) temp_v1_9->unk_1;
                (&B_0093E0.unk_18)[2].unk_-1 = (u8) temp_v1_10->unk_1;
                func_0000061C(&B_009FF0, &(&B_0093E0.unk_18)[2].unk_-1A, 1);
                temp_v1_11 = (&B_009400.unk_18)[2].unk_-12;
                (&B_009400.unk_18)[2] = (&B_009400.unk_18)[2].unk_-2;
                (&B_009400.unk_18)[2].unk_-12 = (s32) (temp_v1_11 + 1);
                temp_v1_12 = (&B_009400.unk_18)[2].unk_-E;
                (&B_009400.unk_18)[2].unk_1 = (u8) (&B_009400.unk_18)[2].unk_-1;
                (&B_009400.unk_18)[2].unk_-E = (s32) (temp_v1_12 + 1);
                (&B_009400.unk_18)[2].unk_-2 = (u8) temp_v1_11->unk_1;
                (&B_009400.unk_18)[2].unk_-1 = (u8) temp_v1_12->unk_1;
                func_0000061C(&B_00A010, &(&B_009400.unk_18)[2].unk_-1A, 2);
                B_009F20(sp14, &B_009F70, &B_009FF0, &B_00A010);
            } else {
                B_0093A0.unk_18.unk_-10 = (void *) (B_0093A0.unk_18.unk_-10 + 2);
                B_0093A0.unk_18.unk_-14 = (s32) (B_0093A0.unk_18.unk_-14 + 2);
                B_0093A0.unk_18.unk_-C = (void *) (B_0093A0.unk_18.unk_-C + 2);
                B_0093A0.unk_18.unk_-8 = (s32) (B_0093A0.unk_18.unk_-8 + 2);
                B_0093A0.unk_18.unk_-4 = (s32) (B_0093A0.unk_18.unk_-4 + 2);
                B_0093A0.unk_18.unk_-18 = (s32) (B_0093A0.unk_18.unk_-18 + 2);
                B_0093A0.unk_18.unk_0 = *B_0093A0.unk_08;
                temp_v0_5 = *B_0093A0.unk_0C;
                B_0093A0.unk_18.unk_4 = temp_v0_5;
                B_0093A0.unk_18.unk_1 = temp_v0_5;
                if (B_009F38 != 0) {
                    (&B_0093C0.unk_1A)[-0x1A].unk_8 = (s32) ((&B_0093C0.unk_1A)[-0x1A].unk_8 + 2);
                    (&B_0093C0.unk_1A)[-0x1A].unk_4 = (s32) ((&B_0093C0.unk_1A)[-0x1A].unk_4 + 2);
                    (&B_0093C0.unk_1A)[-0x1A].unk_C = (s32) ((&B_0093C0.unk_1A)[-0x1A].unk_C + 2);
                    (&B_0093C0.unk_1A)[-0x1A].unk_10 = (s32) ((&B_0093C0.unk_1A)[-0x1A].unk_10 + 2);
                    (&B_0093C0.unk_1A)[-0x1A].unk_14 = (s32) ((&B_0093C0.unk_1A)[-0x1A].unk_14 + 2);
                    (&B_0093C0.unk_1A)[-0x1A] = (s32) ((&B_0093C0.unk_1A)[-0x1A] + 2);
                    (&B_0093C0.unk_1A)[-0x1A].unk_18 = (u8) *B_0093C0.unk_08;
                    temp_v0_6 = *B_0093C0.unk_0C;
                    (&B_0093C0.unk_1A)[-0x1A].unk_1C = temp_v0_6;
                    (&B_0093C0.unk_1A)[-0x1A].unk_19 = temp_v0_6;
                }
                (&B_0093E0.unk_18)[-0x18].unk_8 = (s32) ((&B_0093E0.unk_18)[-0x18].unk_8 + 1);
                (&B_0093E0.unk_18)[-0x18].unk_4 = (s32) ((&B_0093E0.unk_18)[-0x18].unk_4 + 1);
                (&B_0093E0.unk_18)[-0x18].unk_C = (s32) ((&B_0093E0.unk_18)[-0x18].unk_C + 1);
                (&B_0093E0.unk_18)[-0x18].unk_10 = (s32) ((&B_0093E0.unk_18)[-0x18].unk_10 + 1);
                (&B_0093E0.unk_18)[-0x18].unk_14 = (s32) ((&B_0093E0.unk_18)[-0x18].unk_14 + 1);
                (&B_0093E0.unk_18)[-0x18] = (s32) ((&B_0093E0.unk_18)[-0x18] + 1);
                (&B_0093E0.unk_18)[-0x18].unk_18 = (u8) *B_0093E0.unk_08;
                temp_t0 = *B_0093E0.unk_0C;
                (&B_009400.unk_18)[-0x18].unk_8 = (s32) ((&B_009400.unk_18)[-0x18].unk_8 + 1);
                (&B_009400.unk_18)[-0x18].unk_4 = (s32) ((&B_009400.unk_18)[-0x18].unk_4 + 1);
                (&B_009400.unk_18)[-0x18].unk_C = (s32) ((&B_009400.unk_18)[-0x18].unk_C + 1);
                (&B_009400.unk_18)[-0x18].unk_10 = (s32) ((&B_009400.unk_18)[-0x18].unk_10 + 1);
                (&B_009400.unk_18)[-0x18].unk_14 = (s32) ((&B_009400.unk_18)[-0x18].unk_14 + 1);
                (&B_009400.unk_18)[-0x18] = (s32) ((&B_009400.unk_18)[-0x18] + 1);
                (&B_0093E0.unk_18)[-0x18].unk_1C = temp_t0;
                (&B_0093E0.unk_18)[-0x18].unk_19 = temp_t0;
                (&B_009400.unk_18)[-0x18].unk_18 = (u8) *B_009400.unk_08;
                temp_v0_7 = *B_009400.unk_0C;
                (&B_009400.unk_18)[-0x18].unk_1C = temp_v0_7;
                (&B_009400.unk_18)[-0x18].unk_19 = temp_v0_7;
            }
            var_s7 -= 1;
            sp14 = &sp14[B_009F30];
        } while (var_s7 > 0);
    }
    temp_a0_2 = B_0093A0.unk_18.unk_0;
    temp_s0 = &B_0093A0.unk_18 - 0x18;
    if ((temp_a0_2 & 0xFF) != 0x80) {
        temp_v1_13 = B_0093A0.unk_08;
        B_0093A0.unk_1A = temp_a0_2;
        B_0093A0.unk_08 = temp_v1_13 + 1;
        temp_v1_14 = B_0093A0.unk_0C;
        B_0093A0.unk_1B = B_0093A0.unk_19;
        B_0093A0.unk_0C = temp_v1_14 + 1;
        B_0093A0.unk_18.unk_0 = temp_v1_13->unk_1;
        B_0093A0.unk_19 = temp_v1_14->unk_1;
        func_0000061C(&B_009F70, (struct_009240 *) temp_s0, 0);
        B_0093A0.unk_1A = B_0093A0.unk_18.unk_0;
        B_0093A0.unk_08 = B_0093A0.unk_08 + 1;
        B_0093A0.unk_1B = B_0093A0.unk_19;
        B_0093A0.unk_0C = B_0093A0.unk_0C + 1;
        func_0000061C(&B_009F70 + 0x20, (struct_009240 *) temp_s0, 0);
        if (B_009F38 != 0) {
            temp_v1_15 = B_0093C0.unk_08;
            B_0093C0.unk_1A.unk_0 = B_0093C0.unk_18;
            B_0093C0.unk_08 = temp_v1_15 + 1;
            temp_v1_16 = B_0093C0.unk_0C;
            temp_s1 = &B_0093C0.unk_1A - 0x1A;
            B_0093C0.unk_1B = B_0093C0.unk_19;
            B_0093C0.unk_0C = temp_v1_16 + 1;
            B_0093C0.unk_18 = temp_v1_15->unk_1;
            B_0093C0.unk_19 = temp_v1_16->unk_1;
            func_0000061C(&B_009F70 + 0x40, (struct_009240 *) temp_s1, 0);
            B_0093C0.unk_1A.unk_0 = B_0093C0.unk_18;
            B_0093C0.unk_08 = B_0093C0.unk_08 + 1;
            B_0093C0.unk_1B = B_0093C0.unk_19;
            B_0093C0.unk_0C = B_0093C0.unk_0C + 1;
            func_0000061C(&B_009F70 + 0x60, (struct_009240 *) temp_s1, 0);
        }
        B_0093E0.unk_1A = B_0093E0.unk_18;
        B_0093E0.unk_08 = B_0093E0.unk_08 + 1;
        B_0093E0.unk_1B = B_0093E0.unk_19;
        B_0093E0.unk_0C = B_0093E0.unk_0C + 1;
        func_0000061C(&B_009FF0, (struct_009240 *) (&B_0093E0.unk_1A - 0x1A), 1);
        B_009400.unk_1A = B_009400.unk_18;
        B_009400.unk_08 = B_009400.unk_08 + 1;
        B_009400.unk_1B = B_009400.unk_19;
        B_009400.unk_0C = B_009400.unk_0C + 1;
        func_0000061C(&B_00A010, (struct_009240 *) (&B_009400.unk_1A - 0x1A), 2);
        B_009F20(sp14, &B_009F70, &B_009FF0, &B_00A010);
        return;
    }
    B_0093A0.unk_00 += 2;
    B_0093A0.unk_04 = B_0093A0.unk_04 + 2;
    B_0093A0.unk_08 = B_0093A0.unk_08 + 2;
    B_0093A0.unk_0C = B_0093A0.unk_0C + 2;
    B_0093A0.unk_10 = B_0093A0.unk_10 + 2;
    B_0093A0.unk_14 = B_0093A0.unk_14 + 2;
    if (B_009F38 != 0) {
        B_0093C0.unk_00 += 2;
        B_0093C0.unk_04 = B_0093C0.unk_04 + 2;
        B_0093C0.unk_08 = B_0093C0.unk_08 + 2;
        B_0093C0.unk_0C = B_0093C0.unk_0C + 2;
        B_0093C0.unk_10 = B_0093C0.unk_10 + 2;
        B_0093C0.unk_14 = B_0093C0.unk_14 + 2;
    }
    B_0093E0.unk_00 += 1;
    B_0093E0.unk_04 = B_0093E0.unk_04 + 1;
    B_0093E0.unk_08 = B_0093E0.unk_08 + 1;
    B_0093E0.unk_0C = B_0093E0.unk_0C + 1;
    B_0093E0.unk_10 = B_0093E0.unk_10 + 1;
    B_0093E0.unk_14 = B_0093E0.unk_14 + 1;
    B_009400.unk_00 += 1;
    B_009400.unk_04 = B_009400.unk_04 + 1;
    B_009400.unk_08 = B_009400.unk_08 + 1;
    B_009400.unk_0C = B_009400.unk_0C + 1;
    B_009400.unk_10 = B_009400.unk_10 + 1;
    B_009400.unk_14 = B_009400.unk_14 + 1;
}
#else
void func_00002B80(u32 *outbuf);
INCLUDE_ASM("asm/functions/hvqm2dec2", func_00002B80);
#endif

void func_00003560(u32 *outbuf) {
    s32 var_s2;

    B_0093E0.unk_00 = B_0093E0.unk_08 = B_00938C;
    B_0093E0.unk_10 = &B_00938C[B_009F54];
    B_0093E0.unk_0C = B_009398;
    B_0093E0.unk_04 = B_009398;
    B_0093E0.unk_14 = &B_009398[B_009F54];

    B_009400.unk_00 = B_009400.unk_08 = B_009390;
    B_009400.unk_10 = &B_009390[B_009F54];
    B_009400.unk_0C = B_00939C;
    B_009400.unk_04 = B_00939C;
    B_009400.unk_14 = &B_00939C[B_009F54];

    B_0093A0.unk_00 = B_0093A0.unk_08 = B_009388;
    B_0093A0.unk_10 = &B_009388[B_009F48];
    B_0093A0.unk_0C = B_009394;
    B_0093A0.unk_04 = B_009394;
    B_0093A0.unk_14 = &B_009394[B_009F48];

    if (B_009F38 != 0) {
        B_0093C0.unk_00 = B_009388;
        B_0093C0.unk_08 = B_0093A0.unk_10;
        B_0093C0.unk_10 = &B_0093A0.unk_10[B_009F48];
        B_0093C0.unk_04 = B_009394;
        B_0093C0.unk_0C = B_0093A0.unk_14;
        B_0093C0.unk_14 = &B_0093A0.unk_14[B_009F48];
    }

    func_00002B80(outbuf);
    outbuf = &outbuf[B_009F34];

    B_0093E0.unk_00 = B_00938C;
    B_0093E0.unk_04 = B_009398;
    B_009400.unk_00 = B_009390;
    B_009400.unk_04 = B_00939C;
    if (B_009F38 != 0) {
        B_0093A0.unk_08 = &B_0093A0.unk_08[B_009F48];
        B_0093A0.unk_0C = &B_0093A0.unk_0C[B_009F48];
        B_0093A0.unk_10 = &B_0093A0.unk_10[B_009F48];
        B_0093A0.unk_14 = &B_0093A0.unk_14[B_009F48];
        B_0093C0.unk_00 = &B_0093C0.unk_00[B_009F48];
        B_0093C0.unk_04 = &B_0093C0.unk_04[B_009F48];
        B_0093C0.unk_08 = &B_0093C0.unk_08[B_009F48];
        B_0093C0.unk_0C = &B_0093C0.unk_0C[B_009F48];
        B_0093C0.unk_10 = &B_0093C0.unk_10[B_009F48];
        B_0093C0.unk_14 = &B_0093C0.unk_14[B_009F48];
    } else {
        B_0093A0.unk_00 = B_009388;
        B_0093A0.unk_04 = B_009394;
    }

    for (var_s2 = B_009F58 - 2; var_s2 > 0; var_s2--) {
        func_00002B80(outbuf);
        outbuf += B_009F34;

        if (B_009F38 != 0) {
            B_0093A0.unk_00 = &B_0093A0.unk_00[B_009F48];
            B_0093A0.unk_04 = &B_0093A0.unk_04[B_009F48];
            B_0093A0.unk_08 = &B_0093A0.unk_08[B_009F48];
            B_0093A0.unk_0C = &B_0093A0.unk_0C[B_009F48];
            B_0093A0.unk_10 = &B_0093A0.unk_10[B_009F48];
            B_0093A0.unk_14 = &B_0093A0.unk_14[B_009F48];
            B_0093C0.unk_00 = &B_0093C0.unk_00[B_009F48];
            B_0093C0.unk_04 = &B_0093C0.unk_04[B_009F48];
            B_0093C0.unk_08 = &B_0093C0.unk_08[B_009F48];
            B_0093C0.unk_0C = &B_0093C0.unk_0C[B_009F48];
            B_0093C0.unk_10 = &B_0093C0.unk_10[B_009F48];
            B_0093C0.unk_14 = &B_0093C0.unk_14[B_009F48];
        }
    }

    B_0093E0.unk_10 = B_0093E0.unk_08;
    B_0093E0.unk_14 = B_0093E0.unk_0C;
    B_009400.unk_10 = B_009400.unk_08;
    B_009400.unk_14 = B_009400.unk_0C;

    if (B_009F38 != 0) {
        B_0093C0.unk_10 = B_0093C0.unk_08;
        B_0093C0.unk_14 = B_0093C0.unk_0C;
    } else {
        B_0093A0.unk_10 = B_0093A0.unk_08;
        B_0093A0.unk_14 = B_0093A0.unk_0C;
    }

    func_00002B80(outbuf);
}

#if 0
void hvqm2Decode2(void *code, u32 format, u32 *outbuf, u32 *previm, u16 *workbuf) {
    u8 sp10;
    u8 sp11;
    u8 sp12;
    u32 *sp1C;
    u32 *sp24;
    s32 *sp2C;
    u8 *sp34;
    u8 *sp3C;
    u8 *sp44;
    u8 *sp4C;
    u8 *sp54;
    s32 sp5C;
    u8 *sp64;
    u32 *sp6C;
    u8 sp77;
    u8 sp7F;                                        /* compiler-managed */
    s32 sp84;
    s16 var_v0_10;
    s16 var_v0_12;
    s16 var_v0_14;
    s16 var_v0_16;
    s16 var_v0_18;
    s16 var_v0_20;
    s16 var_v0_22;
    s16 var_v0_24;
    s16 var_v0_26;
    s16 var_v0_28;
    s16 var_v0_30;
    s16 var_v0_8;
    s32 *temp_a0_5;
    s32 *temp_v0_11;
    s32 *temp_v0_13;
    s32 *temp_v0_15;
    s32 *temp_v0_17;
    s32 *temp_v0_19;
    s32 *temp_v0_21;
    s32 *temp_v0_23;
    s32 *temp_v0_26;
    s32 *temp_v0_29;
    s32 *temp_v0_32;
    s32 *temp_v0_35;
    s32 *temp_v0_38;
    s32 *temp_v0_41;
    s32 *temp_v0_44;
    s32 *temp_v0_49;
    s32 *temp_v0_50;
    s32 *temp_v0_52;
    s32 *temp_v0_56;
    s32 *temp_v0_7;
    s32 *temp_v0_9;
    s32 *temp_v1;
    s32 *temp_v1_10;
    s32 *temp_v1_11;
    s32 *temp_v1_24;
    s32 *temp_v1_2;
    s32 *temp_v1_3;
    s32 *temp_v1_4;
    s32 *temp_v1_5;
    s32 *temp_v1_6;
    s32 *temp_v1_7;
    s32 *temp_v1_8;
    s32 *temp_v1_9;
    s32 *var_a1_3;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_v0_10;
    s32 temp_v0_12;
    s32 temp_v0_14;
    s32 temp_v0_16;
    s32 temp_v0_18;
    s32 temp_v0_20;
    s32 temp_v0_22;
    s32 temp_v0_24;
    s32 temp_v0_27;
    s32 temp_v0_30;
    s32 temp_v0_33;
    s32 temp_v0_36;
    s32 temp_v0_39;
    s32 temp_v0_42;
    s32 temp_v0_45;
    s32 temp_v0_51;
    s32 temp_v0_53;
    s32 temp_v0_57;
    s32 temp_v0_58;
    s32 temp_v0_59;
    s32 temp_v0_60;
    s32 temp_v0_63;
    s32 temp_v0_6;
    s32 temp_v0_8;
    s32 temp_v1_12;
    s32 temp_v1_13;
    s32 temp_v1_14;
    s32 temp_v1_15;
    s32 temp_v1_16;
    s32 temp_v1_17;
    s32 temp_v1_18;
    s32 temp_v1_19;
    s32 temp_v1_20;
    s32 temp_v1_21;
    s32 temp_v1_22;
    s32 temp_v1_23;
    s32 temp_v1_25;
    s32 temp_v1_26;
    s32 var_a0_6;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_a3_3;
    s32 var_a3_4;
    s32 var_a3_5;
    s32 var_a3_6;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s3_4;
    s32 var_s6;
    s32 var_t0_2;
    s32 var_t0_3;
    s32 var_t0_4;
    s32 var_t1;
    s32 var_t1_2;
    s32 var_t2;
    s32 var_t3;
    s32 var_t4;
    s32 var_v0;
    s32 var_v0_11;
    s32 var_v0_13;
    s32 var_v0_15;
    s32 var_v0_17;
    s32 var_v0_19;
    s32 var_v0_21;
    s32 var_v0_23;
    s32 var_v0_25;
    s32 var_v0_27;
    s32 var_v0_29;
    s32 var_v0_2;
    s32 var_v0_31;
    s32 var_v0_32;
    s32 var_v0_33;
    s32 var_v0_3;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_9;
    s32 var_v1_10;
    s32 var_v1_11;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_8;
    s32 var_v1_9;
    s8 temp_v0_54;
    struct_00000040_arg0 *var_a0_3;
    u16 var_a1_10;
    u16 var_a1_11;
    u16 var_a1_12;
    u16 var_a1_13;
    u16 var_a1_14;
    u16 var_a1_15;
    u16 var_a1_16;
    u16 var_a1_17;
    u16 var_a1_18;
    u16 var_a1_19;
    u16 var_a1_22;
    u16 var_a1_23;
    u16 var_a1_4;
    u16 var_a1_5;
    u16 var_a1_6;
    u16 var_a1_7;
    u16 var_a1_8;
    u16 var_a1_9;
    u16 var_v1_3;
    u32 *var_a0;
    u32 *var_a1_24;
    u32 *var_a2_5;
    u32 *var_a3;
    u32 *var_fp_3;
    u32 *var_t0;
    u32 *var_t0_5;
    u32 *var_v1;
    u32 *var_v1_12;
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_a0_3;
    u32 temp_a0_4;
    u32 temp_a0_6;
    u32 temp_s2_2;
    u32 temp_s2_3;
    u32 temp_s2_4;
    u32 temp_v0;
    u32 temp_v0_55;
    u32 var_v0_4;
    u8 *temp_a0_10;
    u8 *temp_a0_11;
    u8 *temp_a0_12;
    u8 *temp_a0_13;
    u8 *temp_a0_14;
    u8 *temp_a0_15;
    u8 *temp_a0_16;
    u8 *temp_a0_17;
    u8 *temp_a0_18;
    u8 *temp_a0_19;
    u8 *temp_a0_20;
    u8 *temp_a0_21;
    u8 *temp_a0_7;
    u8 *temp_a0_8;
    u8 *temp_a0_9;
    u8 *temp_a1;
    u8 *temp_a1_2;
    u8 *temp_a1_3;
    u8 *temp_a1_4;
    u8 *temp_a3;
    u8 *temp_a3_2;
    u8 *temp_a3_3;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    u8 *temp_v0_5;
    u8 *temp_v1_27;
    u8 *temp_v1_28;
    u8 *temp_v1_29;
    u8 *temp_v1_30;
    u8 *temp_v1_31;
    u8 *temp_v1_32;
    u8 *temp_v1_33;
    u8 *temp_v1_34;
    u8 *temp_v1_35;
    u8 *temp_v1_36;
    u8 *temp_v1_37;
    u8 *temp_v1_38;
    u8 *temp_v1_39;
    u8 *temp_v1_40;
    u8 *temp_v1_41;
    u8 *temp_v1_42;
    u8 *temp_v1_43;
    u8 *temp_v1_44;
    u8 *var_a0_4;
    u8 *var_a0_5;
    u8 *var_a1_20;
    u8 *var_a1_21;
    u8 *var_a2_2;
    u8 *var_a2_3;
    u8 *var_a2_4;
    u8 *var_a3_2;
    u8 *var_s0;
    u8 *var_s1;
    u8 temp_s0;
    u8 temp_s0_2;
    u8 temp_s0_3;
    u8 temp_s0_4;
    u8 temp_s1;
    u8 temp_s2;
    u8 temp_s2_5;
    u8 temp_v0_25;
    u8 temp_v0_28;
    u8 temp_v0_31;
    u8 temp_v0_34;
    u8 temp_v0_37;
    u8 temp_v0_40;
    u8 temp_v0_43;
    u8 temp_v0_46;
    u8 temp_v0_47;
    u8 temp_v0_48;
    u8 temp_v0_61;
    u8 temp_v0_62;
    u8 var_fp;
    u8 var_fp_2;
    u8 var_s2;
    u8 var_s2_2;
    u8 var_s2_3;
    u8 var_s2_4;
    u8 var_s3_5;
    u8 var_s4;
    u8 var_s5;
    u8 var_s7;
    u8 var_s7_2;
    void **var_a0_2;
    void *var_v1_2;

    sp1C = outbuf;
    sp24 = previm;
    if (format == 2) {
        var_t1 = B_009F44;
        var_a0 = sp1C;
        var_a3 = sp24;
        if (var_t1 > 0) {
            do {
                var_a1 = B_009F40;
                var_t0 = var_a0;
                var_v1 = var_a3;
                if (var_a1 > 0) {
                    do {
                        temp_v0 = *var_v1;
                        var_v1 += 4;
                        var_a1 -= 1;
                        *var_t0 = temp_v0;
                        var_t0 += 4;
                    } while (var_a1 > 0);
                }
                var_t1 -= 1;
                var_a0 = &var_a0[B_009F24];
                var_a3 = &var_a3[B_009F24];
            } while (var_t1 > 0);
        }
    } else {
        B_009388 = (u8 *) workbuf;
        temp_v0_2 = workbuf + B_009F50;
        B_009394 = temp_v0_2;
        temp_v0_3 = &temp_v0_2[B_009F50];
        B_00938C = temp_v0_3;
        temp_v0_4 = &temp_v0_3[B_009F5C];
        B_009398 = temp_v0_4;
        temp_v0_5 = &temp_v0_4[B_009F5C];
        B_009390 = temp_v0_5;
        B_00939C = &temp_v0_5[B_009F5C];
        temp_v1 = code + code->unk_0;
        if (*temp_v1 != 0) {
            B_006A90.unk_8 = temp_v1 + 4;
            B_006A90.unk_0 = 0;
            if (&B_007350 != NULL) {
                B_009382 = 0x100;
                B_007350.unk_000 = func_00000040(&B_006A90, &B_007350);
            }
        } else {
            B_006A90.unk_8 = NULL;
            B_006A90.unk_0 = 0;
        }
        temp_v1_2 = code + code->unk_4;
        if (*temp_v1_2 != 0) {
            B_007350 = temp_v1_2 + 4;
        } else {
            B_006A9C.unk_8 = NULL;
        }
        B_006A9C.unk_0 = 0;
        temp_v1_3 = code + code->unk_8;
        if (*temp_v1_3 != 0) {
            B_006AA8.unk_8 = temp_v1_3 + 4;
            B_006AA8.unk_0 = 0;
            if (&B_007B60 != NULL) {
                B_009382 = 0x100;
                B_007B60.unk_000 = func_00000040(&B_006AA8, &B_007B60);
            }
        } else {
            B_006AA8.unk_8 = NULL;
            B_006AA8.unk_0 = 0;
        }
        temp_v1_4 = code + code->unk_C;
        if (*temp_v1_4 != 0) {
            B_007B60 = temp_v1_4 + 4;
        } else {
            B_006AB4.unk_8 = NULL;
        }
        B_006AB4.unk_0 = 0;
        temp_v1_5 = code + code->unk_10;
        if (*temp_v1_5 != 0) {
            B_006AC0->unk_8 = temp_v1_5 + 4;
            B_006AC0->unk_0 = 0;
            if (&B_008370 != NULL) {
                B_009382 = 0x100;
                B_008370.unk_000 = func_00000040(B_006AC0, &B_008370);
            }
        } else {
            B_006AC0->unk_8 = NULL;
            B_006AC0->unk_0 = 0;
        }
        temp_v1_6 = code + code->unk_14;
        if (*temp_v1_6 != 0) {
            B_008370 = temp_v1_6 + 4;
        } else {
            *(B_006AC0 + 0x14) = 0;
        }
        (B_006AC0 + 0xC)->unk_0 = 0;
        temp_v1_7 = code + code->unk_18;
        if (*temp_v1_7 != 0) {
            *(B_006AC0 + 0x14) = temp_v1_7 + 4;
        } else {
            *(B_006AC0 + 0x20) = 0;
        }
        (B_006AC0 + 0x18)->unk_0 = 0;
        temp_v1_8 = code + code->unk_28;
        if (*temp_v1_8 != 0) {
            B_006AE8.unk_8 = temp_v1_8 + 4;
            B_006AE8.unk_0 = 0;
            if (&B_006B40 != NULL) {
                B_009382 = 0x100;
                B_006B40.unk_000 = func_00000040(&B_006AE8, &B_006B40);
            }
        } else {
            B_006AE8.unk_8 = NULL;
            B_006AE8.unk_0 = 0;
        }
        temp_v1_9 = code + code->unk_2C;
        if (*temp_v1_9 != 0) {
            B_006B40 = temp_v1_9 + 4;
        } else {
            B_006AF4.unk_8 = NULL;
        }
        B_006AF4.unk_0 = 0;
        temp_v1_10 = code + code->unk_30;
        if (*temp_v1_10 != 0) {
            B_006AF4.unk_8 = temp_v1_10 + 4;
        } else {
            B_006B00.unk_8 = NULL;
        }
        B_006B00.unk_0 = 0;
        var_a1_2 = 0;
        var_a0_2 = &B_006B34;
        var_v1_2 = code;
        do {
            temp_v0_6 = var_v1_2->unk_1C;
            var_v1_2 += 4;
            var_a1_2 += 1;
            *var_a0_2 = code + temp_v0_6 + 4;
            var_a0_2 += 4;
        } while (var_a1_2 < 3);
        B_009F60 = B_006010;
        switch (format) {                           /* irregular */
            case 0x0:
                var_a2 = 0;
                var_a0_3 = B_006B10;
                sp2C = code + 0x34;
                var_a1_3 = sp2C;
                do {
                    temp_v1_11 = code + *var_a1_3;
                    if (*temp_v1_11 != 0) {
                        var_a0_3->unk_8 = temp_v1_11 + 4;
                    } else {
                        var_a0_3->unk_8 = NULL;
                    }
                    var_a0_3->unk_0 = 0;
                    var_a0_3 += 0xC;
                    var_a2 += 1;
                    var_a1_3 += 4;
                } while (var_a2 < 3);
                var_t0_2 = B_009F50;
                var_a2_2 = B_009388;
                if (var_t0_2 > 0) {
                    do {
                        var_a1_4 = B_007350.unk_000;
                        var_v1_3 = var_a1_4;
                        if ((s16) B_007350.unk_000 >= 0x100) {
                            do {
                                if (B_006A90.unk_0 == 0) {
                                    temp_v0_7 = B_006A90.unk_8;
                                    B_006A90.unk_8 = temp_v0_7 + 4;
                                    B_006A90.unk_0 = 0x80000000;
                                    B_006A90.unk_4 = *temp_v0_7;
                                }
                                temp_v1_12 = B_006A90.unk_4 & B_006A90.unk_0;
                                B_006A90.unk_0 = (u32) B_006A90.unk_0 >> 1;
                                temp_v0_8 = var_a1_4 << 0x10;
                                if (temp_v1_12 != 0) {
                                    var_a1_4 = ((temp_v0_8 >> 0xF) + &B_007350)->unk_402;
                                    var_v0 = var_a1_4 << 0x10;
                                } else {
                                    var_a1_4 = ((temp_v0_8 >> 0xF) + &B_007350)->unk_2;
                                    var_v0 = var_a1_4 << 0x10;
                                }
                                var_v1_3 = var_a1_4;
                            } while ((var_v0 >> 0x10) >= 0x100);
                        }
                        if (var_v1_3 & 0xFF) {
                            *var_a2_2 = (u8) var_v1_3;
                            var_a2_2 += 1;
                            var_t0_2 -= 1;
                        } else {
                            var_a1_5 = B_007B60.unk_000;
                            var_v0_2 = var_a1_5 & 0xFF;
                            if ((s16) B_007B60.unk_000 >= 0x100) {
                                do {
                                    if (B_006AA8.unk_0 == 0) {
                                        temp_v0_9 = B_006AA8.unk_8;
                                        B_006AA8.unk_8 = temp_v0_9 + 4;
                                        B_006AA8.unk_0 = 0x80000000;
                                        B_006AA8.unk_4 = *temp_v0_9;
                                    }
                                    temp_v1_13 = B_006AA8.unk_4 & B_006AA8.unk_0;
                                    B_006AA8.unk_0 = (u32) B_006AA8.unk_0 >> 1;
                                    temp_v0_10 = var_a1_5 << 0x10;
                                    if (temp_v1_13 != 0) {
                                        var_a1_5 = ((temp_v0_10 >> 0xF) + &B_007B60)->unk_402;
                                        var_v0_3 = var_a1_5 << 0x10;
                                    } else {
                                        var_a1_5 = ((temp_v0_10 >> 0xF) + &B_007B60)->unk_2;
                                        var_v0_3 = var_a1_5 << 0x10;
                                    }
                                    var_v0_2 = var_a1_5 & 0xFF;
                                } while ((var_v0_3 >> 0x10) >= 0x100);
                            }
                            var_t0_2 -= var_v0_2 + 1;
                            var_v1_4 = var_v0_2;
                            if (var_v1_4 != -1) {
                                do {
                                    *var_a2_2 = 0;
                                    var_v1_4 -= 1;
                                    var_a2_2 += 1;
                                } while (var_v1_4 != -1);
                            }
                        }
                    } while (var_t0_2 > 0);
                }
                var_t0_3 = B_009F5C;
                var_a2_3 = B_00938C;
                var_a3_2 = B_009390;
                if (var_t0_3 > 0) {
                    do {
                        var_a1_6 = B_007350.unk_000;
                        var_v0_4 = var_a1_6 & 0xFF;
                        if ((s16) B_007350.unk_000 >= 0x100) {
                            do {
                                if (B_006A9C.unk_0 == 0) {
                                    temp_v0_11 = B_006A9C.unk_8;
                                    B_006A9C.unk_8 = temp_v0_11 + 4;
                                    B_006A9C.unk_0 = 0x80000000;
                                    B_006A9C.unk_4 = *temp_v0_11;
                                }
                                temp_v1_14 = B_006A9C.unk_4 & B_006A9C.unk_0;
                                B_006A9C.unk_0 = (u32) B_006A9C.unk_0 >> 1;
                                temp_v0_12 = var_a1_6 << 0x10;
                                if (temp_v1_14 != 0) {
                                    var_a1_6 = ((temp_v0_12 >> 0xF) + &B_007350)->unk_402;
                                    var_v0_5 = var_a1_6 << 0x10;
                                } else {
                                    var_a1_6 = ((temp_v0_12 >> 0xF) + &B_007350)->unk_2;
                                    var_v0_5 = var_a1_6 << 0x10;
                                }
                                var_v0_4 = var_a1_6 & 0xFF;
                            } while ((var_v0_5 >> 0x10) >= 0x100);
                        }
                        if (var_v0_4 == 0) {
                            var_a1_7 = B_007B60.unk_000;
                            var_v0_6 = var_a1_7 & 0xFF;
                            if ((s16) B_007B60.unk_000 >= 0x100) {
                                do {
                                    if (B_006AB4.unk_0 == 0) {
                                        temp_v0_13 = B_006AB4.unk_8;
                                        B_006AB4.unk_8 = temp_v0_13 + 4;
                                        B_006AB4.unk_0 = 0x80000000;
                                        B_006AB4.unk_4 = *temp_v0_13;
                                    }
                                    temp_v1_15 = B_006AB4.unk_4 & B_006AB4.unk_0;
                                    B_006AB4.unk_0 = (u32) B_006AB4.unk_0 >> 1;
                                    temp_v0_14 = var_a1_7 << 0x10;
                                    if (temp_v1_15 != 0) {
                                        var_a1_7 = ((temp_v0_14 >> 0xF) + &B_007B60)->unk_402;
                                        var_v0_7 = var_a1_7 << 0x10;
                                    } else {
                                        var_a1_7 = ((temp_v0_14 >> 0xF) + &B_007B60)->unk_2;
                                        var_v0_7 = var_a1_7 << 0x10;
                                    }
                                    var_v0_6 = var_a1_7 & 0xFF;
                                } while ((var_v0_7 >> 0x10) >= 0x100);
                            }
                            var_t0_3 -= var_v0_6 + 1;
                            var_v1_5 = var_v0_6;
                            if (var_v1_5 != -1) {
                                do {
                                    *var_a2_3 = 0;
                                    var_a2_3 += 1;
                                    *var_a3_2 = 0;
                                    var_v1_5 -= 1;
                                    var_a3_2 += 1;
                                } while (var_v1_5 != -1);
                            }
                        } else {
                            *var_a2_3 = var_v0_4 & 0xF;
                            var_a2_3 += 1;
                            *var_a3_2 = (u8) (var_v0_4 >> 4);
                            var_a3_2 += 1;
                            var_t0_3 -= 1;
                        }
                    } while (var_t0_3 > 0);
                }
                var_s0 = B_009394;
                var_s3 = B_009F54;
                sp3C = B_009398;
                sp4C = B_00939C;
                var_fp = 0;
                sp34 = B_009398;
                var_s7 = 0;
                var_s2 = 0;
                sp12 = 0;
                sp11 = 0;
                sp10 = 0;
                var_s1 = var_s0;
                sp44 = B_00939C;
                if (var_s3 > 0) {
                    sp54 = &sp10;
                    do {
                        if (sp10 == 0) {
                            var_v0_8 = func_000002F8(&B_006AE8);
                            if (var_v0_8 == 0) {
                                var_a1_8 = B_007B60.unk_000;
                                if ((s16) B_007B60.unk_000 >= 0x100) {
                                    do {
                                        if (B_006B10->unk_0 == 0) {
                                            temp_v0_15 = B_006B10->unk_8;
                                            B_006B10->unk_8 = temp_v0_15 + 4;
                                            B_006B10->unk_0 = 0x80000000;
                                            B_006B10->unk_4 = *temp_v0_15;
                                        }
                                        temp_v1_16 = B_006B10->unk_4 & B_006B10->unk_0;
                                        B_006B10->unk_0 = (u32) B_006B10->unk_0 >> 1;
                                        temp_v0_16 = var_a1_8 << 0x10;
                                        if (temp_v1_16 != 0) {
                                            var_a1_8 = ((temp_v0_16 >> 0xF) + &B_007B60)->unk_402;
                                            var_v0_9 = var_a1_8 << 0x10;
                                        } else {
                                            var_a1_8 = ((temp_v0_16 >> 0xF) + &B_007B60)->unk_2;
                                            var_v0_9 = var_a1_8 << 0x10;
                                        }
                                    } while ((var_v0_9 >> 0x10) >= 0x100);
                                }
                                var_v0_8 = 0;
                                *sp54 = (u8) var_a1_8;
                            }
                        } else {
                            sp10 -= 1;
                            var_v0_8 = 0;
                        }
                        temp_s2 = var_v0_8 + var_s2;
                        *var_s0 = temp_s2;
                        if (sp10 == 0) {
                            var_v0_10 = func_000002F8(&B_006AE8);
                            if (var_v0_10 == 0) {
                                var_a1_9 = B_007B60.unk_000;
                                if ((s16) B_007B60.unk_000 < 0x100) {
                                    sp10 = (u8) var_a1_9;
                                } else {
                                    do {
                                        if (B_006B10->unk_0 == 0) {
                                            temp_v0_17 = B_006B10->unk_8;
                                            B_006B10->unk_8 = temp_v0_17 + 4;
                                            B_006B10->unk_0 = 0x80000000;
                                            B_006B10->unk_4 = *temp_v0_17;
                                        }
                                        temp_v1_17 = B_006B10->unk_4 & B_006B10->unk_0;
                                        B_006B10->unk_0 = (u32) B_006B10->unk_0 >> 1;
                                        temp_v0_18 = var_a1_9 << 0x10;
                                        if (temp_v1_17 != 0) {
                                            var_a1_9 = ((temp_v0_18 >> 0xF) + &B_007B60)->unk_402;
                                            var_v0_11 = var_a1_9 << 0x10;
                                        } else {
                                            var_a1_9 = ((temp_v0_18 >> 0xF) + &B_007B60)->unk_2;
                                            var_v0_11 = var_a1_9 << 0x10;
                                        }
                                    } while ((var_v0_11 >> 0x10) >= 0x100);
                                    sp10 = (u8) var_a1_9;
                                }
                                goto block_122;
                            }
                        } else {
                            sp10 -= 1;
block_122:
                            var_v0_10 = 0;
                        }
                        var_s2 = var_v0_10 + temp_s2;
                        var_s0[1] = var_s2;
                        var_s0 = &var_s0[1].unk_1;
                        if (sp11 == 0) {
                            var_v0_12 = func_000002F8(&B_006AF4);
                            if (var_v0_12 == 0) {
                                var_a1_10 = B_007B60.unk_000;
                                if ((s16) B_007B60.unk_000 < 0x100) {
                                    sp11 = (u8) var_a1_10;
                                } else {
                                    do {
                                        if ((B_006B10 + 0xC)->unk_0 == 0) {
                                            temp_v0_19 = *(B_006B10 + 0x14);
                                            *(B_006B10 + 0x14) = temp_v0_19 + 4;
                                            (B_006B10 + 0xC)->unk_0 = 0x80000000;
                                            *(B_006B10 + 0x10) = *temp_v0_19;
                                        }
                                        temp_a0 = (B_006B10 + 0xC)->unk_0;
                                        (B_006B10 + 0xC)->unk_0 = temp_a0 >> 1;
                                        temp_v0_20 = var_a1_10 << 0x10;
                                        if (*(B_006B10 + 0x10) & temp_a0) {
                                            var_a1_10 = ((temp_v0_20 >> 0xF) + &B_007B60)->unk_402;
                                            var_v0_13 = var_a1_10 << 0x10;
                                        } else {
                                            var_a1_10 = ((temp_v0_20 >> 0xF) + &B_007B60)->unk_2;
                                            var_v0_13 = var_a1_10 << 0x10;
                                        }
                                    } while ((var_v0_13 >> 0x10) >= 0x100);
                                    sp11 = (u8) var_a1_10;
                                }
                                goto block_136;
                            }
                        } else {
                            sp11 -= 1;
block_136:
                            var_v0_12 = 0;
                        }
                        var_s7 += var_v0_12;
                        *sp3C = var_s7;
                        sp3C += 1;
                        if (sp12 == 0) {
                            var_v0_14 = func_000002F8(&B_006B00);
                            if (var_v0_14 == 0) {
                                var_a1_11 = B_007B60.unk_000;
                                if ((s16) B_007B60.unk_000 < 0x100) {
                                    sp12 = (u8) var_a1_11;
                                } else {
                                    do {
                                        if ((B_006B10 + 0x18)->unk_0 == 0) {
                                            temp_v0_21 = *(B_006B10 + 0x20);
                                            *(B_006B10 + 0x20) = temp_v0_21 + 4;
                                            (B_006B10 + 0x18)->unk_0 = 0x80000000;
                                            *(B_006B10 + 0x1C) = *temp_v0_21;
                                        }
                                        temp_a0_2 = (B_006B10 + 0x18)->unk_0;
                                        (B_006B10 + 0x18)->unk_0 = temp_a0_2 >> 1;
                                        temp_v0_22 = var_a1_11 << 0x10;
                                        if (*(B_006B10 + 0x1C) & temp_a0_2) {
                                            var_a1_11 = ((temp_v0_22 >> 0xF) + &B_007B60)->unk_402;
                                            var_v0_15 = var_a1_11 << 0x10;
                                        } else {
                                            var_a1_11 = ((temp_v0_22 >> 0xF) + &B_007B60)->unk_2;
                                            var_v0_15 = var_a1_11 << 0x10;
                                        }
                                    } while ((var_v0_15 >> 0x10) >= 0x100);
                                    sp12 = (u8) var_a1_11;
                                }
                                goto block_150;
                            }
                        } else {
                            sp12 -= 1;
block_150:
                            var_v0_14 = 0;
                        }
                        var_fp += var_v0_14;
                        var_s3 -= 1;
                        *sp4C = var_fp;
                        sp4C += 1;
                    } while (var_s3 > 0);
                }
                if (B_009F38 != 0) {
                    var_s3_2 = B_009F54;
                    var_s2_2 = *var_s1;
                    if (var_s3_2 > 0) {
                        do {
                            if (sp10 == 0) {
                                var_v0_16 = func_000002F8(&B_006AE8);
                                if (var_v0_16 == 0) {
                                    var_a1_12 = B_007B60.unk_000;
                                    if ((s16) B_007B60.unk_000 < 0x100) {
                                        sp10 = (u8) var_a1_12;
                                    } else {
                                        do {
                                            if (B_006B10->unk_0 == 0) {
                                                temp_v0_23 = B_006B10->unk_8;
                                                B_006B10->unk_8 = temp_v0_23 + 4;
                                                B_006B10->unk_0 = 0x80000000;
                                                B_006B10->unk_4 = *temp_v0_23;
                                            }
                                            temp_v1_18 = B_006B10->unk_4 & B_006B10->unk_0;
                                            B_006B10->unk_0 = (u32) B_006B10->unk_0 >> 1;
                                            temp_v0_24 = var_a1_12 << 0x10;
                                            if (temp_v1_18 != 0) {
                                                var_a1_12 = ((temp_v0_24 >> 0xF) + &B_007B60)->unk_402;
                                                var_v0_17 = var_a1_12 << 0x10;
                                            } else {
                                                var_a1_12 = ((temp_v0_24 >> 0xF) + &B_007B60)->unk_2;
                                                var_v0_17 = var_a1_12 << 0x10;
                                            }
                                        } while ((var_v0_17 >> 0x10) >= 0x100);
                                        sp10 = (u8) var_a1_12;
                                    }
                                    goto block_168;
                                }
                            } else {
                                sp10 -= 1;
block_168:
                                var_v0_16 = 0;
                            }
                            temp_v0_25 = var_v0_16 + var_s2_2;
                            *var_s0 = temp_v0_25;
                            temp_s2_2 = (u32) (var_s1[1] + (temp_v0_25 & 0xFF)) >> 1;
                            if (sp10 == 0) {
                                var_v0_18 = func_000002F8(&B_006AE8);
                                if (var_v0_18 == 0) {
                                    var_a1_13 = B_007B60.unk_000;
                                    if ((s16) B_007B60.unk_000 < 0x100) {
                                        sp10 = (u8) var_a1_13;
                                    } else {
                                        do {
                                            if (B_006B10->unk_0 == 0) {
                                                temp_v0_26 = B_006B10->unk_8;
                                                B_006B10->unk_8 = temp_v0_26 + 4;
                                                B_006B10->unk_0 = 0x80000000;
                                                B_006B10->unk_4 = *temp_v0_26;
                                            }
                                            temp_v1_19 = B_006B10->unk_4 & B_006B10->unk_0;
                                            B_006B10->unk_0 = (u32) B_006B10->unk_0 >> 1;
                                            temp_v0_27 = var_a1_13 << 0x10;
                                            if (temp_v1_19 != 0) {
                                                var_a1_13 = ((temp_v0_27 >> 0xF) + &B_007B60)->unk_402;
                                                var_v0_19 = var_a1_13 << 0x10;
                                            } else {
                                                var_a1_13 = ((temp_v0_27 >> 0xF) + &B_007B60)->unk_2;
                                                var_v0_19 = var_a1_13 << 0x10;
                                            }
                                        } while ((var_v0_19 >> 0x10) >= 0x100);
                                        sp10 = (u8) var_a1_13;
                                    }
                                    goto block_182;
                                }
                            } else {
                                sp10 -= 1;
block_182:
                                var_v0_18 = 0;
                            }
                            var_s1 = &var_s1[1].unk_1;
                            temp_v0_28 = var_v0_18 + temp_s2_2;
                            var_s0[1] = temp_v0_28;
                            var_s0 = &var_s0[1].unk_1;
                            var_s3_2 -= 1;
                            var_s2_2 = (u8) ((u32) (*var_s1 + (temp_v0_28 & 0xFF)) >> 1);
                        } while (var_s3_2 > 0);
                    }
                }
                sp5C = B_009F58;
                if (B_009F58 >= 2) {
                    do {
                        var_s7_2 = *sp34;
                        var_s3_3 = B_009F54;
                        var_s2_3 = *var_s1;
                        var_fp_2 = *sp44;
                        if (var_s3_3 > 0) {
                            sp64 = &sp10;
                            do {
                                if (sp10 == 0) {
                                    var_v0_20 = func_000002F8(&B_006AE8);
                                    if (var_v0_20 == 0) {
                                        var_a1_14 = B_007B60.unk_000;
                                        if ((s16) B_007B60.unk_000 >= 0x100) {
                                            do {
                                                if (B_006B10->unk_0 == 0) {
                                                    temp_v0_29 = B_006B10->unk_8;
                                                    B_006B10->unk_8 = temp_v0_29 + 4;
                                                    B_006B10->unk_0 = 0x80000000;
                                                    B_006B10->unk_4 = *temp_v0_29;
                                                }
                                                temp_v1_20 = B_006B10->unk_4 & B_006B10->unk_0;
                                                B_006B10->unk_0 = (u32) B_006B10->unk_0 >> 1;
                                                temp_v0_30 = var_a1_14 << 0x10;
                                                if (temp_v1_20 != 0) {
                                                    var_a1_14 = ((temp_v0_30 >> 0xF) + &B_007B60)->unk_402;
                                                    var_v0_21 = var_a1_14 << 0x10;
                                                } else {
                                                    var_a1_14 = ((temp_v0_30 >> 0xF) + &B_007B60)->unk_2;
                                                    var_v0_21 = var_a1_14 << 0x10;
                                                }
                                            } while ((var_v0_21 >> 0x10) >= 0x100);
                                        }
                                        var_v0_20 = 0;
                                        *sp64 = (u8) var_a1_14;
                                    }
                                } else {
                                    sp10 -= 1;
                                    var_v0_20 = 0;
                                }
                                temp_v0_31 = var_v0_20 + var_s2_3;
                                *var_s0 = temp_v0_31;
                                temp_s2_3 = (u32) (var_s1[1] + (temp_v0_31 & 0xFF)) >> 1;
                                if (sp10 == 0) {
                                    var_v0_22 = func_000002F8(&B_006AE8);
                                    if (var_v0_22 == 0) {
                                        var_a1_15 = B_007B60.unk_000;
                                        if ((s16) B_007B60.unk_000 < 0x100) {
                                            sp10 = (u8) var_a1_15;
                                        } else {
                                            do {
                                                if (B_006B10->unk_0 == 0) {
                                                    temp_v0_32 = B_006B10->unk_8;
                                                    B_006B10->unk_8 = temp_v0_32 + 4;
                                                    B_006B10->unk_0 = 0x80000000;
                                                    B_006B10->unk_4 = *temp_v0_32;
                                                }
                                                temp_v1_21 = B_006B10->unk_4 & B_006B10->unk_0;
                                                B_006B10->unk_0 = (u32) B_006B10->unk_0 >> 1;
                                                temp_v0_33 = var_a1_15 << 0x10;
                                                if (temp_v1_21 != 0) {
                                                    var_a1_15 = ((temp_v0_33 >> 0xF) + &B_007B60)->unk_402;
                                                    var_v0_23 = var_a1_15 << 0x10;
                                                } else {
                                                    var_a1_15 = ((temp_v0_33 >> 0xF) + &B_007B60)->unk_2;
                                                    var_v0_23 = var_a1_15 << 0x10;
                                                }
                                            } while ((var_v0_23 >> 0x10) >= 0x100);
                                            sp10 = (u8) var_a1_15;
                                        }
                                        goto block_212;
                                    }
                                } else {
                                    sp10 -= 1;
block_212:
                                    var_v0_22 = 0;
                                }
                                var_s1 = &var_s1[1].unk_1;
                                temp_v0_34 = var_v0_22 + temp_s2_3;
                                var_s0[1] = temp_v0_34;
                                var_s0 = &var_s0[1].unk_1;
                                var_s2_3 = (u8) ((u32) (*var_s1 + (temp_v0_34 & 0xFF)) >> 1);
                                if (sp11 == 0) {
                                    var_v0_24 = func_000002F8(&B_006AF4);
                                    if (var_v0_24 == 0) {
                                        var_a1_16 = B_007B60.unk_000;
                                        if ((s16) B_007B60.unk_000 < 0x100) {
                                            sp11 = (u8) var_a1_16;
                                        } else {
                                            do {
                                                if ((B_006B10 + 0xC)->unk_0 == 0) {
                                                    temp_v0_35 = *(B_006B10 + 0x14);
                                                    *(B_006B10 + 0x14) = temp_v0_35 + 4;
                                                    (B_006B10 + 0xC)->unk_0 = 0x80000000;
                                                    *(B_006B10 + 0x10) = *temp_v0_35;
                                                }
                                                temp_a0_3 = (B_006B10 + 0xC)->unk_0;
                                                (B_006B10 + 0xC)->unk_0 = temp_a0_3 >> 1;
                                                temp_v0_36 = var_a1_16 << 0x10;
                                                if (*(B_006B10 + 0x10) & temp_a0_3) {
                                                    var_a1_16 = ((temp_v0_36 >> 0xF) + &B_007B60)->unk_402;
                                                    var_v0_25 = var_a1_16 << 0x10;
                                                } else {
                                                    var_a1_16 = ((temp_v0_36 >> 0xF) + &B_007B60)->unk_2;
                                                    var_v0_25 = var_a1_16 << 0x10;
                                                }
                                            } while ((var_v0_25 >> 0x10) >= 0x100);
                                            sp11 = (u8) var_a1_16;
                                        }
                                        goto block_226;
                                    }
                                } else {
                                    sp11 -= 1;
block_226:
                                    var_v0_24 = 0;
                                }
                                sp34 += 1;
                                temp_v0_37 = var_v0_24 + var_s7_2;
                                *sp3C = temp_v0_37;
                                var_s7_2 = (u8) ((u32) (sp34[1] + (temp_v0_37 & 0xFF)) >> 1);
                                sp3C += 1;
                                if (sp12 == 0) {
                                    var_v0_26 = func_000002F8(&B_006B00);
                                    if (var_v0_26 == 0) {
                                        var_a1_17 = B_007B60.unk_000;
                                        if ((s16) B_007B60.unk_000 < 0x100) {
                                            sp12 = (u8) var_a1_17;
                                        } else {
                                            do {
                                                if ((B_006B10 + 0x18)->unk_0 == 0) {
                                                    temp_v0_38 = *(B_006B10 + 0x20);
                                                    *(B_006B10 + 0x20) = temp_v0_38 + 4;
                                                    (B_006B10 + 0x18)->unk_0 = 0x80000000;
                                                    *(B_006B10 + 0x1C) = *temp_v0_38;
                                                }
                                                temp_a0_4 = (B_006B10 + 0x18)->unk_0;
                                                (B_006B10 + 0x18)->unk_0 = temp_a0_4 >> 1;
                                                temp_v0_39 = var_a1_17 << 0x10;
                                                if (*(B_006B10 + 0x1C) & temp_a0_4) {
                                                    var_a1_17 = ((temp_v0_39 >> 0xF) + &B_007B60)->unk_402;
                                                    var_v0_27 = var_a1_17 << 0x10;
                                                } else {
                                                    var_a1_17 = ((temp_v0_39 >> 0xF) + &B_007B60)->unk_2;
                                                    var_v0_27 = var_a1_17 << 0x10;
                                                }
                                            } while ((var_v0_27 >> 0x10) >= 0x100);
                                            sp12 = (u8) var_a1_17;
                                        }
                                        goto block_240;
                                    }
                                } else {
                                    sp12 -= 1;
block_240:
                                    var_v0_26 = 0;
                                }
                                sp44 += 1;
                                temp_v0_40 = var_v0_26 + var_fp_2;
                                var_s3_3 -= 1;
                                *sp4C = temp_v0_40;
                                var_fp_2 = (u8) ((u32) (sp44[1] + (temp_v0_40 & 0xFF)) >> 1);
                                sp4C += 1;
                            } while (var_s3_3 > 0);
                        }
                        if (B_009F38 != 0) {
                            var_s3_4 = B_009F54;
                            var_s2_4 = *var_s1;
                            if (var_s3_4 > 0) {
                                do {
                                    if (sp10 == 0) {
                                        var_v0_28 = func_000002F8(&B_006AE8);
                                        if (var_v0_28 == 0) {
                                            var_a1_18 = B_007B60.unk_000;
                                            if ((s16) B_007B60.unk_000 < 0x100) {
                                                sp10 = (u8) var_a1_18;
                                            } else {
                                                do {
                                                    if (B_006B10->unk_0 == 0) {
                                                        temp_v0_41 = B_006B10->unk_8;
                                                        B_006B10->unk_8 = temp_v0_41 + 4;
                                                        B_006B10->unk_0 = 0x80000000;
                                                        B_006B10->unk_4 = *temp_v0_41;
                                                    }
                                                    temp_v1_22 = B_006B10->unk_4 & B_006B10->unk_0;
                                                    B_006B10->unk_0 = (u32) B_006B10->unk_0 >> 1;
                                                    temp_v0_42 = var_a1_18 << 0x10;
                                                    if (temp_v1_22 != 0) {
                                                        var_a1_18 = ((temp_v0_42 >> 0xF) + &B_007B60)->unk_402;
                                                        var_v0_29 = var_a1_18 << 0x10;
                                                    } else {
                                                        var_a1_18 = ((temp_v0_42 >> 0xF) + &B_007B60)->unk_2;
                                                        var_v0_29 = var_a1_18 << 0x10;
                                                    }
                                                } while ((var_v0_29 >> 0x10) >= 0x100);
                                                sp10 = (u8) var_a1_18;
                                            }
                                            goto block_258;
                                        }
                                    } else {
                                        sp10 -= 1;
block_258:
                                        var_v0_28 = 0;
                                    }
                                    temp_v0_43 = var_v0_28 + var_s2_4;
                                    *var_s0 = temp_v0_43;
                                    temp_s2_4 = (u32) (var_s1[1] + (temp_v0_43 & 0xFF)) >> 1;
                                    if (sp10 == 0) {
                                        var_v0_30 = func_000002F8(&B_006AE8);
                                        if (var_v0_30 == 0) {
                                            var_a1_19 = B_007B60.unk_000;
                                            if ((s16) B_007B60.unk_000 < 0x100) {
                                                sp10 = (u8) var_a1_19;
                                            } else {
                                                do {
                                                    if (B_006B10->unk_0 == 0) {
                                                        temp_v0_44 = B_006B10->unk_8;
                                                        B_006B10->unk_8 = temp_v0_44 + 4;
                                                        B_006B10->unk_0 = 0x80000000;
                                                        B_006B10->unk_4 = *temp_v0_44;
                                                    }
                                                    temp_v1_23 = B_006B10->unk_4 & B_006B10->unk_0;
                                                    B_006B10->unk_0 = (u32) B_006B10->unk_0 >> 1;
                                                    temp_v0_45 = var_a1_19 << 0x10;
                                                    if (temp_v1_23 != 0) {
                                                        var_a1_19 = ((temp_v0_45 >> 0xF) + &B_007B60)->unk_402;
                                                        var_v0_31 = var_a1_19 << 0x10;
                                                    } else {
                                                        var_a1_19 = ((temp_v0_45 >> 0xF) + &B_007B60)->unk_2;
                                                        var_v0_31 = var_a1_19 << 0x10;
                                                    }
                                                } while ((var_v0_31 >> 0x10) >= 0x100);
                                                sp10 = (u8) var_a1_19;
                                            }
                                            goto block_272;
                                        }
                                    } else {
                                        sp10 -= 1;
block_272:
                                        var_v0_30 = 0;
                                    }
                                    var_s1 = &var_s1[1].unk_1;
                                    temp_v0_46 = var_v0_30 + temp_s2_4;
                                    var_s0[1] = temp_v0_46;
                                    var_s0 = &var_s0[1].unk_1;
                                    var_s3_4 -= 1;
                                    var_s2_4 = (u8) ((u32) (*var_s1 + (temp_v0_46 & 0xFF)) >> 1);
                                } while (var_s3_4 > 0);
                            }
                        }
                        temp_t6 = sp5C - 1;
                        sp5C = temp_t6;
                    } while (temp_t6 >= 2);
                }
                var_a2_4 = B_009F60;
                var_a0_4 = &B_009394[sp2C->unk_C + (sp2C->unk_E * B_009F48)];
                var_t0_4 = B_009F48;
                if (B_009F48 < B_009F64) {
                    var_t2 = B_009F64 - var_t0_4;
                    if (var_t0_4 < var_t2) {
                        var_t2 = var_t0_4;
                    }
                    var_t3 = B_009F64 - (var_t0_4 + var_t2);
                } else {
                    var_t0_4 = B_009F64;
                    var_t2 = 0;
                    var_t3 = 0;
                }
                var_v1_6 = B_009F4C;
                var_t1_2 = B_009F68 - var_v1_6;
                if (var_v1_6 < B_009F68) {
                    if (var_v1_6 < var_t1_2) {
                        var_t1_2 = var_v1_6;
                    }
                    var_t4 = B_009F68 - (var_v1_6 + var_t1_2);
                } else {
                    var_v1_6 = B_009F68;
                    var_t1_2 = 0;
                    var_t4 = 0;
                }
                var_a3_3 = var_v1_6;
                if (var_a3_3 > 0) {
                    do {
                        var_v1_7 = var_t0_4;
                        var_a1_20 = var_a0_4;
                        if (var_v1_7 > 0) {
                            do {
                                temp_v0_47 = *var_a1_20;
                                var_a1_20 += 1;
                                var_v1_7 -= 1;
                                *var_a2_4 = temp_v0_47;
                                var_a2_4 += 1;
                            } while (var_v1_7 > 0);
                        }
                        var_v1_8 = var_t2;
                        if (var_v1_8 > 0) {
                            do {
                                var_a1_20 -= 1;
                                var_v1_8 -= 1;
                                *var_a2_4 = *var_a1_20;
                                var_a2_4 += 1;
                            } while (var_v1_8 > 0);
                        }
                        var_v1_9 = var_t3;
                        if (var_v1_9 > 0) {
                            do {
                                *var_a2_4 = 0;
                                var_v1_9 -= 1;
                                var_a2_4 += 1;
                            } while (var_v1_9 > 0);
                        }
                        var_a3_3 -= 1;
                        var_a0_4 = &var_a0_4[B_009F48];
                    } while (var_a3_3 > 0);
                }
                var_a3_4 = var_t1_2;
                var_a1_21 = var_a2_4 - B_009F64;
                if (var_a3_4 > 0) {
                    do {
                        var_v1_10 = B_009F64;
                        var_a0_5 = var_a1_21;
                        if (var_v1_10 > 0) {
                            do {
                                temp_v0_48 = *var_a0_5;
                                var_a0_5 += 1;
                                var_v1_10 -= 1;
                                *var_a2_4 = temp_v0_48;
                                var_a2_4 += 1;
                            } while (var_v1_10 > 0);
                        }
                        var_a3_4 -= 1;
                        var_a1_21 -= B_009F64;
                    } while (var_a3_4 > 0);
                }
                var_a3_5 = var_t4;
                if (var_a3_5 > 0) {
loop_298:
                    var_v1_11 = B_009F64;
                    if (var_v1_11 > 0) {
                        do {
                            *var_a2_4 = 0;
                            var_v1_11 -= 1;
                            var_a2_4 += 1;
                        } while (var_v1_11 > 0);
                    }
                    var_a3_5 -= 1;
                    if (var_a3_5 > 0) {
                        goto loop_298;
                    }
                }
block_348:
                func_00003560(sp1C);
                return;
            case 0x1:
                temp_v1_24 = code + code->unk_34;
                if (*temp_v1_24 != 0) {
                    B_006A80.unk_8 = temp_v1_24 + 4;
                    B_006A80.unk_0 = 0;
                    if (&B_008B80 != NULL) {
                        B_009382 = 0x100;
                        B_008B80.unk_000 = func_00000040(&B_006A80, &B_008B80);
                    }
                } else {
                    B_006A80.unk_8 = NULL;
                    B_006A80.unk_0 = 0;
                }
                temp_a0_5 = code + (code + 0x34)->unk_4;
                if (*temp_a0_5 != 0) {
                    B_008B80 = temp_a0_5 + 4;
                } else {
                    B_006A74.unk_8 = NULL;
                }
                B_006A74.unk_0 = 0;
                var_s3_5 = 0;
                var_s4 = 0;
                sp77 = 0;
                sp7F = 0;
                sp10 = 0;
                sp11 = 0;
                B_0093A0.unk_08 = B_009388;
                B_0093A0.unk_0C = B_009394;
                sp6C = sp1C;
                B_0093A0.unk_10 = &B_009388[B_009F48];
                B_0093A0.unk_14 = &B_009394[B_009F48];
                B_0093E0.unk_08 = B_00938C;
                B_0093E0.unk_0C = B_009398;
                B_009400.unk_08 = B_009390;
                B_009400.unk_0C = B_00939C;
                var_s5 = 0;
                if (B_009F38 == 0) {
                    B_0093E0.unk_10 = &B_00938C[B_009F54];
                    B_0093E0.unk_14 = &B_009398[B_009F54];
                    B_009400.unk_10 = &B_009390[B_009F54];
                    B_009400.unk_14 = &B_00939C[B_009F54];
                }
                sp84 = 0;
                if (B_009F44 > 0) {
                    do {
                        var_fp_3 = sp6C;
                        var_s6 = 0;
                        if (B_009F40 > 0) {
                            do {
                                if (B_006A74.unk_0 == 0) {
                                    temp_v0_49 = B_006A74.unk_8;
                                    B_006A74.unk_8 = temp_v0_49 + 4;
                                    B_006A74.unk_0 = 0x80000000;
                                    B_006A74.unk_4 = *temp_v0_49;
                                }
                                temp_a0_6 = (u32) B_006A74.unk_0 >> 1;
                                B_006A74.unk_0 = temp_a0_6;
                                if (!(B_006A74.unk_4 & B_006A74.unk_0)) {
                                    var_a1_22 = B_008B80.unk_000;
                                    if ((s16) B_008B80.unk_000 >= 0x100) {
                                        do {
                                            if (B_006A80.unk_0 == 0) {
                                                temp_v0_50 = B_006A80.unk_8;
                                                B_006A80.unk_8 = temp_v0_50 + 4;
                                                B_006A80.unk_0 = 0x80000000;
                                                B_006A80.unk_4 = *temp_v0_50;
                                            }
                                            temp_v1_25 = B_006A80.unk_4 & B_006A80.unk_0;
                                            B_006A80.unk_0 = (u32) B_006A80.unk_0 >> 1;
                                            temp_v0_51 = var_a1_22 << 0x10;
                                            if (temp_v1_25 != 0) {
                                                var_a1_22 = ((temp_v0_51 >> 0xF) + &B_008B80)->unk_402;
                                                var_v0_32 = var_a1_22 << 0x10;
                                            } else {
                                                var_a1_22 = ((temp_v0_51 >> 0xF) + &B_008B80)->unk_2;
                                                var_v0_32 = var_a1_22 << 0x10;
                                            }
                                        } while ((var_v0_32 >> 0x10) >= 0x100);
                                    }
                                    var_a1_23 = B_008B80.unk_000;
                                    sp77 += var_a1_22 & 0xFF;
                                    if ((s16) B_008B80.unk_000 >= 0x100) {
                                        do {
                                            if (B_006A80.unk_0 == 0) {
                                                temp_v0_52 = B_006A80.unk_8;
                                                B_006A80.unk_8 = temp_v0_52 + 4;
                                                B_006A80.unk_0 = 0x80000000;
                                                B_006A80.unk_4 = *temp_v0_52;
                                            }
                                            temp_v1_26 = B_006A80.unk_4 & B_006A80.unk_0;
                                            B_006A80.unk_0 = (u32) B_006A80.unk_0 >> 1;
                                            temp_v0_53 = var_a1_23 << 0x10;
                                            if (temp_v1_26 != 0) {
                                                var_a1_23 = ((temp_v0_53 >> 0xF) + &B_008B80)->unk_402;
                                                var_v0_33 = var_a1_23 << 0x10;
                                            } else {
                                                var_a1_23 = ((temp_v0_53 >> 0xF) + &B_008B80)->unk_2;
                                                var_v0_33 = var_a1_23 << 0x10;
                                            }
                                        } while ((var_v0_33 >> 0x10) >= 0x100);
                                    }
                                    temp_v0_54 = sp7F + (var_a1_23 & 0xFF);
                                    var_t0_5 = var_fp_3;
                                    var_a3_6 = 8;
                                    sp7F = temp_v0_54;
                                    var_v1_12 = &(&sp24[var_s6 + (s8) sp77])[(sp84 + temp_v0_54) * B_009F24];
                                    do {
                                        var_a2_5 = var_t0_5;
                                        var_a1_24 = var_v1_12;
                                        var_a0_6 = 8;
loop_333:
                                        temp_v0_55 = *var_a1_24;
                                        var_a1_24 += 4;
                                        var_a0_6 -= 1;
                                        *var_a2_5 = temp_v0_55;
                                        var_a2_5 += 4;
                                        if (var_a0_6 != 0) {
                                            goto loop_333;
                                        }
                                        var_a3_6 -= 1;
                                        var_t0_5 = &var_t0_5[B_009F24];
                                        var_v1_12 = &var_v1_12[B_009F24];
                                    } while (var_a3_6 != 0);
                                    temp_v1_27 = B_0093A0.unk_08;
                                    B_0093A0.unk_08 = temp_v1_27 + 1;
                                    *temp_v1_27 = 0x80;
                                    temp_v1_28 = B_0093A0.unk_08;
                                    B_0093A0.unk_08 = temp_v1_28 + 1;
                                    *temp_v1_28 = 0x80;
                                    temp_v1_29 = B_0093A0.unk_10;
                                    B_0093A0.unk_0C = B_0093A0.unk_0C + 2;
                                    B_0093A0.unk_10 = temp_v1_29 + 1;
                                    *temp_v1_29 = 0x80;
                                    temp_v1_30 = B_0093A0.unk_10;
                                    B_0093A0.unk_10 = temp_v1_30 + 1;
                                    *temp_v1_30 = 0x80;
                                    temp_v1_31 = B_0093E0.unk_08;
                                    B_0093A0.unk_14 = B_0093A0.unk_14 + 2;
                                    B_0093E0.unk_08 = temp_v1_31 + 1;
                                    *temp_v1_31 = 0x80;
                                    temp_v1_32 = B_009400.unk_08;
                                    B_0093E0.unk_0C = B_0093E0.unk_0C + 1;
                                    B_009400.unk_08 = temp_v1_32 + 1;
                                    *temp_v1_32 = 0x80;
                                    B_009400.unk_0C = B_009400.unk_0C + 1;
                                    if (B_009F38 == 0) {
                                        temp_v1_33 = B_0093E0.unk_10;
                                        B_0093E0.unk_10 = temp_v1_33 + 1;
                                        *temp_v1_33 = 0x80;
                                        temp_v1_34 = B_009400.unk_10;
                                        B_0093E0.unk_14 = B_0093E0.unk_14 + 1;
                                        B_009400.unk_10 = temp_v1_34 + 1;
                                        *temp_v1_34 = 0x80;
                                        B_009400.unk_14 = B_009400.unk_14 + 1;
                                    }
                                } else {
                                    if (temp_a0_6 == 0) {
                                        temp_v0_56 = B_006A74.unk_8;
                                        B_006A74.unk_8 = temp_v0_56 + 4;
                                        B_006A74.unk_0 = 0x80000000;
                                        B_006A74.unk_4 = *temp_v0_56;
                                    }
                                    B_006A74.unk_0 = (u32) B_006A74.unk_0 >> 1;
                                    if (!(B_006A74.unk_4 & B_006A74.unk_0)) {
                                        temp_v0_57 = func_000004A8(&sp10, &B_006A90, &B_006AA8);
                                        temp_a1 = B_0093A0.unk_08;
                                        B_0093A0.unk_08 = temp_a1 + 1;
                                        *temp_a1 = (u8) temp_v0_57;
                                        temp_a3 = B_0093A0.unk_0C;
                                        temp_s0 = var_s3_5 + func_000002F8(&B_006AE8);
                                        B_0093A0.unk_0C = temp_a3 + 1;
                                        *temp_a3 = temp_s0;
                                        temp_v0_58 = func_000004A8(&sp10, &B_006A90, &B_006AA8);
                                        temp_a1_2 = B_0093A0.unk_08;
                                        B_0093A0.unk_08 = temp_a1_2 + 1;
                                        *temp_a1_2 = (u8) temp_v0_58;
                                        temp_a3_2 = B_0093A0.unk_0C;
                                        temp_s0_2 = temp_s0 + func_000002F8(&B_006AE8);
                                        B_0093A0.unk_0C = temp_a3_2 + 1;
                                        *temp_a3_2 = temp_s0_2;
                                        temp_v0_59 = func_000004A8(&sp10, &B_006A90, &B_006AA8);
                                        temp_a1_3 = B_0093A0.unk_10;
                                        B_0093A0.unk_10 = temp_a1_3 + 1;
                                        *temp_a1_3 = (u8) temp_v0_59;
                                        temp_a3_3 = B_0093A0.unk_14;
                                        temp_s0_3 = temp_s0_2 + func_000002F8(&B_006AE8);
                                        B_0093A0.unk_14 = temp_a3_3 + 1;
                                        *temp_a3_3 = temp_s0_3;
                                        temp_v0_60 = func_000004A8(&sp10, &B_006A90, &B_006AA8);
                                        temp_a1_4 = B_0093A0.unk_10;
                                        B_0093A0.unk_10 = temp_a1_4 + 1;
                                        *temp_a1_4 = (u8) temp_v0_60;
                                        temp_s0_4 = temp_s0_3 + func_000002F8(&B_006AE8);
                                        var_s3_5 = temp_s0_4;
                                        temp_v1_35 = B_0093A0.unk_14;
                                        B_0093A0.unk_14 = temp_v1_35 + 1;
                                        *temp_v1_35 = temp_s0_4;
                                        temp_v1_36 = B_0093E0.unk_08;
                                        temp_s0_5 = func_000004A8(&sp11, &B_006A9C, &B_006AB4);
                                        B_0093E0.unk_08 = temp_v1_36 + 1;
                                        *temp_v1_36 = temp_s0_5 & 0xF;
                                        temp_a0_7 = B_0093E0.unk_0C;
                                        temp_s2_5 = var_s4 + func_000002F8(&B_006AF4);
                                        B_0093E0.unk_0C = temp_a0_7 + 1;
                                        *temp_a0_7 = temp_s2_5;
                                        temp_v1_37 = B_009400.unk_08;
                                        B_009400.unk_08 = temp_v1_37 + 1;
                                        *temp_v1_37 = (u8) ((u32) (temp_s0_5 & 0xFF) >> 4);
                                        temp_a0_8 = B_009400.unk_0C;
                                        temp_s1 = var_s5 + func_000002F8(&B_006B00);
                                        B_009400.unk_0C = temp_a0_8 + 1;
                                        *temp_a0_8 = temp_s1;
                                        var_s4 = temp_s2_5;
                                        var_s5 = temp_s1;
                                        if (B_009F38 == 0) {
                                            temp_v1_38 = B_0093E0.unk_10;
                                            temp_s0_6 = func_000004A8(&sp11, &B_006A9C, &B_006AB4);
                                            B_0093E0.unk_10 = temp_v1_38 + 1;
                                            *temp_v1_38 = temp_s0_6 & 0xF;
                                            temp_a0_9 = B_0093E0.unk_14;
                                            temp_v0_61 = temp_s2_5 + func_000002F8(&B_006AF4);
                                            B_0093E0.unk_14 = temp_a0_9 + 1;
                                            *temp_a0_9 = temp_v0_61;
                                            temp_v1_39 = B_009400.unk_10;
                                            var_s4 = temp_v0_61;
                                            B_009400.unk_10 = temp_v1_39 + 1;
                                            *temp_v1_39 = (u8) ((u32) (temp_s0_6 & 0xFF) >> 4);
                                            temp_a0_10 = B_009400.unk_14;
                                            temp_v0_62 = temp_s1 + func_000002F8(&B_006B00);
                                            var_s5 = temp_v0_62;
                                            B_009400.unk_14 = temp_a0_10 + 1;
                                            *temp_a0_10 = temp_v0_62;
                                        }
                                    } else {
                                        var_s3_5 += func_000002F8(&B_006AE8);
                                        var_s4 += func_000002F8(&B_006AF4);
                                        temp_v0_63 = func_000002F8(&B_006B00);
                                        temp_a0_11 = B_0093A0.unk_08;
                                        B_0093A0.unk_08 = temp_a0_11 + 1;
                                        *temp_a0_11 = 0;
                                        temp_a0_12 = B_0093A0.unk_0C;
                                        B_0093A0.unk_0C = temp_a0_12 + 1;
                                        *temp_a0_12 = var_s3_5;
                                        temp_a0_13 = B_0093A0.unk_08;
                                        B_0093A0.unk_08 = temp_a0_13 + 1;
                                        *temp_a0_13 = 0;
                                        temp_a0_14 = B_0093A0.unk_0C;
                                        B_0093A0.unk_0C = temp_a0_14 + 1;
                                        *temp_a0_14 = var_s3_5;
                                        temp_a0_15 = B_0093A0.unk_10;
                                        B_0093A0.unk_10 = temp_a0_15 + 1;
                                        *temp_a0_15 = 0;
                                        temp_a0_16 = B_0093A0.unk_14;
                                        B_0093A0.unk_14 = temp_a0_16 + 1;
                                        *temp_a0_16 = var_s3_5;
                                        temp_a0_17 = B_0093A0.unk_10;
                                        B_0093A0.unk_10 = temp_a0_17 + 1;
                                        *temp_a0_17 = 0;
                                        temp_a0_18 = B_0093A0.unk_14;
                                        B_0093A0.unk_14 = temp_a0_18 + 1;
                                        *temp_a0_18 = var_s3_5;
                                        temp_a0_19 = B_0093E0.unk_08;
                                        B_0093E0.unk_08 = temp_a0_19 + 1;
                                        *temp_a0_19 = 0;
                                        temp_a0_20 = B_0093E0.unk_0C;
                                        B_0093E0.unk_0C = temp_a0_20 + 1;
                                        *temp_a0_20 = var_s4;
                                        temp_a0_21 = B_009400.unk_08;
                                        B_009400.unk_08 = temp_a0_21 + 1;
                                        *temp_a0_21 = 0;
                                        temp_v1_40 = B_009400.unk_0C;
                                        var_s5 += temp_v0_63;
                                        B_009400.unk_0C = temp_v1_40 + 1;
                                        *temp_v1_40 = var_s5;
                                        if (B_009F38 == 0) {
                                            temp_v1_41 = B_0093E0.unk_10;
                                            B_0093E0.unk_10 = temp_v1_41 + 1;
                                            *temp_v1_41 = 0;
                                            temp_v1_42 = B_0093E0.unk_14;
                                            B_0093E0.unk_14 = temp_v1_42 + 1;
                                            *temp_v1_42 = var_s4;
                                            temp_v1_43 = B_009400.unk_10;
                                            B_009400.unk_10 = temp_v1_43 + 1;
                                            *temp_v1_43 = 0;
                                            temp_v1_44 = B_009400.unk_14;
                                            B_009400.unk_14 = temp_v1_44 + 1;
                                            *temp_v1_44 = var_s5;
                                        }
                                    }
                                }
                                var_s6 += 8;
                                var_fp_3 += 0x20;
                            } while (var_s6 < B_009F40);
                        }
                        B_0093A0.unk_08 = &B_0093A0.unk_08[B_009F48];
                        B_0093A0.unk_0C = &B_0093A0.unk_0C[B_009F48];
                        B_0093A0.unk_10 = &B_0093A0.unk_10[B_009F48];
                        B_0093A0.unk_14 = &B_0093A0.unk_14[B_009F48];
                        if (B_009F38 == 0) {
                            B_0093E0.unk_08 = &B_0093E0.unk_08[B_009F54];
                            B_0093E0.unk_0C = &B_0093E0.unk_0C[B_009F54];
                            B_009400.unk_08 = &B_009400.unk_08[B_009F54];
                            B_009400.unk_0C = &B_009400.unk_0C[B_009F54];
                            B_0093E0.unk_10 = &B_0093E0.unk_10[B_009F54];
                            B_0093E0.unk_14 = &B_0093E0.unk_14[B_009F54];
                            B_009400.unk_10 = &B_009400.unk_10[B_009F54];
                            B_009400.unk_14 = &B_009400.unk_14[B_009F54];
                        }
                        temp_t6_2 = sp84 + 8;
                        sp84 = temp_t6_2;
                        sp6C = &sp6C[B_009F3C];
                    } while (temp_t6_2 < B_009F44);
                }
                goto block_348;
        }
    }
}
#else
INCLUDE_ASM("asm/functions/hvqm2dec2", hvqm2Decode2);
#endif

u32 hvqm2Setup2(HVQM2Header *header, u32 outbufWidth) {
    s32 i;
    s8 var_a2;
    u16 *var_a0_2;
    u16 *var_a1_2;
    s32 temp_t0_2;
    s32 temp;

    B_009F24 = outbufWidth;
    B_009F40 = header->width;
    B_009F44 = header->height;

    if (outbufWidth == 0) {
        B_009F24 = B_009F40;
    }

    B_009F28 = header->h_sampling_rate;
    B_009F2C = header->v_sampling_rate;
    B_009F30 = header->h_sampling_rate * 4;

    temp = B_009F24 * 4;
    B_009F34 = header->v_sampling_rate * temp;

    B_009F38 = header->v_sampling_rate == 2;

    B_009F48 = B_009F40 >> 2;
    B_009F4C = B_009F44 >> 2;
    B_009F50 = B_009F48 * B_009F4C;
    B_009F54 = B_009F40 >> 3;

    B_009F58 = B_009F44 >> (B_009F38 ? 3 : 2);

    B_009F3C = B_009F24 * 8;
    B_009F5C = B_009F54 * B_009F58;

    B_009F20 = B_009F38 ? func_000018CC : func_000012E4;

    B_009F6C = header->y_shiftnum;
    B_009F6C = header->y_shiftnum;
    if (B_009F6C == 8) {
        B_009F64 = 0x46;
        B_009F68 = 0x26;
    } else {
        B_009F64 = 0x26;
        B_009F68 = 0x46;
    }

    i = 0;
    var_a2 = 0;
    var_a1_2 = B_006B40.unk_002;
    var_a0_2 = B_008370.unk_002;
    temp_t0_2 = header->video_quantize_shift;
    B_009384 = 0x0000007F << temp_t0_2;
    B_009386 = 0xFFFFFF80 << temp_t0_2;

    while (i < 0x100) {
        *var_a0_2 = var_a2 << 3;
        *var_a1_2 = var_a2 << temp_t0_2;
        var_a1_2 += 1;
        var_a0_2 += 1;
        var_a2 += 1;
        i += 1;
    }

    return header->total_frames;
}

void hvqm2Init2(u8 alpha) {
    s32 i;
    s32 var_a0;

    B_009F6D = alpha;

    for (i = 0, var_a0 = -0x100; i < ARRAY_COUNT(B_009C20); i++, var_a0++) {
        if (var_a0 >= 0) {
            if (var_a0 < 0x100) {
                B_009C20[i] = var_a0;
            } else {
                B_009C20[i] = -1;
            }
        } else {
            B_009C20[i] = 0;
        }
    }

    B_009420[0] = 0;
    for (i = 1; i < ARRAY_COUNT(B_009420); i++) {
        B_009420[i] = 0x1000 / i;
    }
}
