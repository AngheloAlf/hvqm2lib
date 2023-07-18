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

extern HVQM2Info *B_003D60;
// STATIC HVQM2Info *B_003D60;
/* .space 0x04 */

extern struct_00000040_arg0 B_003D64;
// STATIC struct_00000040_arg0 B_003D64;
/* .space 0x0C */

extern struct_00000040_arg0 B_003D70;
// STATIC struct_00000040_arg0 B_003D70;
/* .space 0x0C */

extern struct_00000040_arg0 B_003D80;
// STATIC struct_00000040_arg0 B_003D80;
/* .space 0x0C */

extern struct_00000040_arg0 B_003D8C;
// STATIC struct_00000040_arg0 B_003D8C;
/* .space 0x0C */

extern struct_00000040_arg0 B_003D98;
// STATIC struct_00000040_arg0 B_003D98;
/* .space 0x0C */

extern struct_00000040_arg0 B_003DA4;
// STATIC struct_00000040_arg0 B_003DA4;
/* .space 0x0C */

extern struct_00000040_arg0 B_003DB0[3];
// STATIC struct_00000040_arg0 B_003DB0[3];
/* .space 0x24 */

extern struct_00000040_arg0 B_003DD8;
// STATIC struct_00000040_arg0 B_003DD8;
/* .space 0x0C */

extern struct_00000040_arg0 B_003DE4;
// STATIC struct_00000040_arg0 B_003DE4;
/* .space 0x0C */

extern struct_00000040_arg0 B_003DF0;
// STATIC struct_00000040_arg0 B_003DF0;
/* .space 0x0C */

extern struct_00000040_arg0 B_003E00[3];
// STATIC struct_00000040_arg0 B_003E00[3];
/* .space 0x24 */

extern UNK_PTR B_003E24[3];
// STATIC UNK_PTR B_003E24[3];
/* .space 0x0C */

extern struct_00000040_arg1 B_003E30;
// STATIC struct_00000040_arg1 B_003E30;
/* .space 0x802 */

extern struct_00000040_arg1 B_004640;
// STATIC struct_00000040_arg1 B_004640;
/* .space 0x802 */

extern struct_00000040_arg1 B_004E50;
// STATIC struct_00000040_arg1 B_004E50;
/* .space 0x802 */

extern struct_00000040_arg1 B_005660;
// STATIC struct_00000040_arg1 B_005660;
/* .space 0x802 */

extern struct_00000040_arg1 B_005E70;
// STATIC struct_00000040_arg1 B_005E70;
/* .space 0x802 */

extern u16 B_006672;
// STATIC u16 B_006672;
/* .space 0x02 */

extern s16 B_006674;
// STATIC u8 B_006674;
/* .space 0x02 */

extern s16 B_006676;
// STATIC s16 B_006676;
/* .space 0x02 */

extern u8 *B_006678;
// STATIC u8 *B_006678;
/* .space 0x04 */

extern u8 *B_00667C;
// STATIC u8 *B_00667C;
/* .space 0x04 */

extern u8 *B_006680;
// STATIC u8 *B_006680;
/* .space 0x04 */

extern u8 *B_006684;
// STATIC u8 *B_006684;
/* .space 0x04 */

extern u8 *B_006688;
// STATIC u8 *B_006688;
/* .space 0x04 */

extern u8 *B_00668C;
// STATIC u8 *B_00668C;
/* .space 0x04 */

extern struct_009240 B_006690;
// STATIC struct_009240 B_006690;
/* .space 0x1D */

extern struct_009240 B_0066B0;
// STATIC struct_009240 B_0066B0;
/* .space 0x1D */

extern struct_009240 B_0066D0;
// STATIC struct_009240 B_0066D0;
/* .space 0x1D */

extern struct_009240 B_0066F0;
// STATIC struct_009240 B_0066F0;
/* .space 0x1D */

extern s32 B_006710;
// STATIC s32 B_006710;
/* .space 0x04 */

extern s32 B_006714;
// STATIC s32 B_006714;
/* .space 0x04 */

extern s32 B_006718;
// STATIC s32 B_006718;
/* .space 0x04 */

extern s32 B_00671C;
// STATIC s32 B_00671C;
/* .space 0x04 */

extern s32 B_006720;
// STATIC s32 B_006720;
/* .space 0x04 */

extern s32 B_006724;
// STATIC s32 B_006724;
/* .space 0x04 */

extern s32 B_006728;
// STATIC s32 B_006728;
/* .space 0x04 */

extern s32 B_00672C;
// STATIC s32 B_00672C;
/* .space 0x04 */

extern s32 B_006730;
// STATIC s32 B_006730;
/* .space 0x04 */

extern s32 B_006734;
// STATIC s32 B_006734;
/* .space 0x04 */

extern s32 B_006738;
// STATIC s32 B_006738;
/* .space 0x04 */

extern s32 B_00673C;
// STATIC s32 B_00673C;
/* .space 0x04 */

extern s32 B_006740;
// STATIC s32 B_006740;
/* .space 0x04 */

extern u8 *B_006744;
// STATIC u8 *B_006744;
/* .space 0x04 */

extern s32 B_006748;
// STATIC s32 B_006748;
/* .space 0x04 */

extern s32 B_00674C;
// STATIC s32 B_00674C;
/* .space 0x04 */

extern u8 B_006750;
// STATIC u8 B_006750;
/* .space 0x01 */

extern u8 B_006751;
// STATIC u8 B_006751;
/* .space 0x0F */


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
    return B_006672++;
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
    s16 temp_v1 = inlined_func_03(arg0, &B_003E30);
    s16 var_t0 = temp_v1;

    if ((temp_v1 == B_006676) || (temp_v1 == B_006674)) {
        do {
            temp_v1 = inlined_func_03(arg0, &B_003E30);
            var_t0 += temp_v1;
        } while ((B_006676 >= temp_v1) || (temp_v1 >= B_006674));
    }

    return var_t0;
}

STATIC s32 func_000004A8(u8 *arg0, struct_00000040_arg0 *arg1, struct_00000040_arg0 *arg2) {
    u8 var_v0;

    if (*arg0 == 0) {
        var_v0 = inlined_func_02(arg1, &B_004640);

        if (var_v0 != 0) {
            return var_v0;
        }
        *arg0 = inlined_func_02(arg2, &B_004E50);
    } else {
        *arg0 -= 1;
    }
    return 0;
}

#if 0
void func_0000061C(struct_009240 *arg0, s32 arg1) {
    HVQM2Info *temp_a0_3;
    HVQM2Info *temp_v1;
    HVQM2Info *temp_v1_2;
    s32 *temp_v0_16;
    s32 temp_a0;
    s32 var_t1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    struct_00000040_arg0 *temp_a2_2;
    u16 **temp_t4;
    u16 *temp_v1_16;
    u16 temp_a3;
    u16 temp_v1_17;
    u16 var_a1;
    u32 temp_a0_2;
    u32 temp_a1_2;
    u8 **temp_a1;
    u8 *temp_v0;
    u8 *temp_v0_10;
    u8 *temp_v0_11;
    u8 *temp_v0_12;
    u8 *temp_v0_13;
    u8 *temp_v0_14;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    u8 *temp_v0_5;
    u8 *temp_v0_6;
    u8 *temp_v0_7;
    u8 *temp_v0_8;
    u8 *temp_v0_9;
    u8 *temp_v1_10;
    u8 *temp_v1_11;
    u8 *temp_v1_12;
    u8 *temp_v1_13;
    u8 *temp_v1_14;
    u8 *temp_v1_3;
    u8 *temp_v1_4;
    u8 *temp_v1_5;
    u8 *temp_v1_6;
    u8 *temp_v1_7;
    u8 *temp_v1_8;
    u8 *temp_v1_9;
    u8 temp_a2;
    u8 temp_t5;
    u8 var_a0;
    void *temp_v0_15;
    void *temp_v1_15;

    temp_v1 = B_003D60;
    B_003D60 = temp_v1 + 8;
    temp_a2 = arg0->unk_1B;
    temp_v1->blockinfo.dc = temp_a2;
    temp_t5 = arg0->unk_1A;
    temp_a0 = temp_t5 & 0xFF;
    temp_v1->blockinfo.nbase = temp_t5;
    if (temp_a0 == 0) {
        temp_v1->blockinfo.dc_l = arg0->unk_1C;
        var_a0 = temp_a2;
        if (arg0->unk_18 == 0) {
            var_a0 = arg0->unk_19;
        }
        temp_v1->blockinfo.dc_r = var_a0;
        if (*arg0->unk_00 == 0) {
            temp_v1->blockinfo.dc_u = *arg0->unk_04;
        } else {
            temp_v1->blockinfo.dc_u = temp_a2;
        }
        if (*arg0->unk_10 == 0) {
            temp_v1->blockinfo.dc_d = *arg0->unk_14;
        } else {
            temp_v1->blockinfo.dc_d = temp_a2;
        }
        arg0->unk_1C = temp_a2;
    } else {
        if (temp_a0 == 8) {
            temp_v1->blockinfo.nbase = 0x10;
            temp_v1_2 = B_003D60;
            temp_a1 = (arg1 * 4) + &B_003E24;
            temp_v0 = *temp_a1;
            B_003D60 = temp_v1_2 + 0x10;
            *temp_a1 = temp_v0 + 0x10;
            temp_v0_2 = temp_v0 + 1;
            temp_v1_2->blockinfo.nbase = *temp_v0;
            temp_v1_3 = &temp_v1_2->blockinfo.dc;
            temp_v0_3 = temp_v0_2 + 1;
            *temp_v1_3 = *temp_v0_2;
            temp_v0_4 = temp_v0_3 + 1;
            temp_v1_3[1] = *temp_v0_3;
            temp_v1_4 = &temp_v1_3[1].unk_1;
            temp_v0_5 = temp_v0_4 + 1;
            *temp_v1_4 = *temp_v0_4;
            temp_v1_5 = temp_v1_4 + 1;
            temp_v0_6 = temp_v0_5 + 1;
            *temp_v1_5 = *temp_v0_5;
            temp_v1_6 = temp_v1_5 + 1;
            temp_v0_7 = temp_v0_6 + 1;
            *temp_v1_6 = *temp_v0_6;
            temp_v1_7 = temp_v1_6 + 1;
            temp_v0_8 = temp_v0_7 + 1;
            *temp_v1_7 = *temp_v0_7;
            temp_v1_8 = temp_v1_7 + 1;
            temp_v0_9 = temp_v0_8 + 1;
            *temp_v1_8 = *temp_v0_8;
            temp_v1_9 = temp_v1_8 + 1;
            temp_v0_10 = temp_v0_9 + 1;
            *temp_v1_9 = *temp_v0_9;
            temp_v1_10 = temp_v1_9 + 1;
            temp_v0_11 = temp_v0_10 + 1;
            *temp_v1_10 = *temp_v0_10;
            temp_v1_11 = temp_v1_10 + 1;
            temp_v0_12 = temp_v0_11 + 1;
            *temp_v1_11 = *temp_v0_11;
            temp_v1_12 = temp_v1_11 + 1;
            temp_v0_13 = temp_v0_12 + 1;
            *temp_v1_12 = *temp_v0_12;
            temp_v1_13 = temp_v1_12 + 1;
            temp_v0_14 = temp_v0_13 + 1;
            *temp_v1_13 = *temp_v0_13;
            temp_v1_14 = temp_v1_13 + 1;
            temp_v0_15 = temp_v0_14 + 1;
            *temp_v1_14 = *temp_v0_14;
            temp_v1_15 = temp_v1_14 + 1;
            temp_v1_15->unk_0 = (u8) temp_v0_15->unk_0;
            temp_v1_15->unk_1 = (u8) temp_v0_15->unk_1;
        } else {
            var_t1 = 0;
            if (temp_a0 != 0) {
                temp_a2_2 = &B_003DB0[arg1];
                temp_t4 = (arg1 * 4) + &B_003E24;
                do {
                    var_a1 = B_005660.unk_000;
                    var_v0 = var_a1 << 0x10;
                    if ((s16) B_005660.unk_000 >= 0x100) {
                        do {
                            if (temp_a2_2->unk_0 == 0) {
                                temp_v0_16 = temp_a2_2->unk_8;
                                temp_a2_2->unk_8 = temp_v0_16 + 4;
                                temp_a2_2->unk_0 = 0x80000000;
                                temp_a2_2->unk_4 = *temp_v0_16;
                            }
                            temp_a0_2 = temp_a2_2->unk_0;
                            temp_a2_2->unk_0 = temp_a0_2 >> 1;
                            if (temp_a2_2->unk_4 & temp_a0_2) {
                                var_a1 = (((s32) (var_a1 << 0x10) >> 0xF) + &B_005660)->unk_402;
                                var_v0_2 = var_a1 << 0x10;
                            } else {
                                var_a1 = (((s32) (var_a1 << 0x10) >> 0xF) + &B_005660)->unk_2;
                                var_v0_2 = var_a1 << 0x10;
                            }
                            var_v0 = var_a1 << 0x10;
                        } while ((var_v0_2 >> 0x10) >= 0x100);
                    }
                    temp_v1_16 = *temp_t4;
                    temp_a3 = *temp_v1_16;
                    *temp_t4 = temp_v1_16 + 2;
                    B_003D60->blockinfo.nbase = temp_a3 & 1;
                    temp_a1_2 = temp_a3 & 0xFFFF;
                    B_003D60->blockinfo.dc = (temp_a1_2 >> 1) & 1;
                    if (B_006750 == 8) {
                        var_v1 = ((temp_a1_2 >> 8) & 0x1F) * B_006748;
                        var_v0_3 = (temp_a1_2 >> 2) & 0x3F;
                    } else {
                        var_v1 = ((temp_a1_2 >> 7) & 0x3F) * B_006748;
                        var_v0_3 = (temp_a1_2 >> 2) & 0x1F;
                    }
                    B_003D60->basisinfo.offset = var_v0_3 + var_v1;
                    temp_a0_3 = B_003D60;
                    temp_v1_17 = (temp_a0_3->blockinfo.dc + 1) * B_006748;
                    var_t1 += 1;
                    temp_a0_3->basisinfo.scale = ((var_v0 >> 0xF) + &B_005660)->unk_2 + (temp_a3 >> 0xD);
                    B_003D60 = temp_a0_3 + 8;
                    temp_a0_3->basisinfo.lineskip = temp_v1_17;
                } while (var_t1 < (s32) temp_t5);
            }
        }
        arg0->unk_1C = arg0->unk_19;
    }
    arg0->unk_00 += 1;
    arg0->unk_04 += 1;
    arg0->unk_10 += 1;
    arg0->unk_14 += 1;
}
#else
void func_0000061C(struct_009240 *arg0, s32 arg1);
INCLUDE_ASM("asm/functions/hvqm2decSP1", func_0000061C);
#endif

#if 0
void func_000009FC(void) {
    HVQM2Info *temp_v1_13;
    HVQM2Info *temp_v1_18;
    s32 var_s7;
    u8 *temp_fp;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_v1_14;
    u8 *temp_v1_15;
    u8 *temp_v1_16;
    u8 *temp_v1_17;
    u8 temp_a0;
    u8 temp_t0;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v0_8;
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

    B_0066D0.unk_18 = *B_0066D0.unk_08;
    temp_v0 = *B_0066D0.unk_0C;
    B_0066D0.unk_1C = temp_v0;
    B_0066D0.unk_19 = temp_v0;
    B_0066F0.unk_18 = *B_0066F0.unk_08;
    temp_v0_2 = *B_0066F0.unk_0C;
    B_0066F0.unk_1C = temp_v0_2;
    B_0066F0.unk_19 = temp_v0_2;
    B_006690.unk_18.unk_0 = *B_006690.unk_08;
    temp_v0_3 = *B_006690.unk_0C;
    B_006690.unk_1C = temp_v0_3;
    B_006690.unk_19 = temp_v0_3;
    if (B_00671C != 0) {
        B_0066B0.unk_18 = *B_0066B0.unk_08;
        temp_v0_4 = *B_0066B0.unk_0C;
        B_0066B0.unk_1C = temp_v0_4;
        B_0066B0.unk_19 = temp_v0_4;
    }
    var_s7 = B_006738 - 1;
    if (var_s7 > 0) {
        temp_fp = &B_006690.unk_18 - 0x18;
        temp_s2 = &B_0066B0.unk_1A - 0x1A;
        do {
            temp_v0_5 = B_006690.unk_18.unk_0;
            if (temp_v0_5 != 0x80) {
                temp_v1 = B_006690.unk_18.unk_-10;
                B_006690.unk_18.unk_2 = temp_v0_5;
                B_006690.unk_18.unk_-10 = (void *) (temp_v1 + 1);
                temp_v1_2 = B_006690.unk_18.unk_-C;
                B_006690.unk_18.unk_3 = (u8) B_006690.unk_18.unk_1;
                B_006690.unk_18.unk_-C = (void *) (temp_v1_2 + 1);
                B_006690.unk_18.unk_0 = temp_v1->unk_1;
                B_006690.unk_18.unk_1 = (u8) temp_v1_2->unk_1;
                func_0000061C((struct_009240 *) temp_fp, 0);
                temp_v1_3 = B_006690.unk_18.unk_-10;
                B_006690.unk_18.unk_2 = (u8) B_006690.unk_18.unk_0;
                B_006690.unk_18.unk_-10 = (void *) (temp_v1_3 + 1);
                temp_v1_4 = B_006690.unk_18.unk_-C;
                B_006690.unk_18.unk_3 = (u8) B_006690.unk_18.unk_1;
                B_006690.unk_18.unk_-C = (void *) (temp_v1_4 + 1);
                B_006690.unk_18.unk_0 = temp_v1_3->unk_1;
                B_006690.unk_18.unk_1 = (u8) temp_v1_4->unk_1;
                func_0000061C((struct_009240 *) temp_fp, 0);
                if (B_00671C != 0) {
                    temp_v1_5 = B_0066B0.unk_1A.unk_-12;
                    B_0066B0.unk_1A.unk_0 = B_0066B0.unk_1A.unk_-2;
                    B_0066B0.unk_1A.unk_-12 = (void *) (temp_v1_5 + 1);
                    temp_v1_6 = B_0066B0.unk_1A.unk_-E;
                    B_0066B0.unk_1A.unk_1 = (u8) B_0066B0.unk_1A.unk_-1;
                    B_0066B0.unk_1A.unk_-E = (void *) (temp_v1_6 + 1);
                    B_0066B0.unk_1A.unk_-2 = (u8) temp_v1_5->unk_1;
                    B_0066B0.unk_1A.unk_-1 = (u8) temp_v1_6->unk_1;
                    func_0000061C((struct_009240 *) temp_s2, 0);
                    temp_v1_7 = B_0066B0.unk_1A.unk_-12;
                    B_0066B0.unk_1A.unk_0 = B_0066B0.unk_1A.unk_-2;
                    B_0066B0.unk_1A.unk_-12 = (void *) (temp_v1_7 + 1);
                    temp_v1_8 = B_0066B0.unk_1A.unk_-E;
                    B_0066B0.unk_1A.unk_1 = (u8) B_0066B0.unk_1A.unk_-1;
                    B_0066B0.unk_1A.unk_-E = (void *) (temp_v1_8 + 1);
                    B_0066B0.unk_1A.unk_-2 = (u8) temp_v1_7->unk_1;
                    B_0066B0.unk_1A.unk_-1 = (u8) temp_v1_8->unk_1;
                    func_0000061C((struct_009240 *) temp_s2, 0);
                }
                temp_v1_9 = (&B_0066D0.unk_18)[2].unk_-12;
                (&B_0066D0.unk_18)[2] = (&B_0066D0.unk_18)[2].unk_-2;
                (&B_0066D0.unk_18)[2].unk_-12 = (s32) (temp_v1_9 + 1);
                temp_v1_10 = (&B_0066D0.unk_18)[2].unk_-E;
                (&B_0066D0.unk_18)[2].unk_1 = (u8) (&B_0066D0.unk_18)[2].unk_-1;
                (&B_0066D0.unk_18)[2].unk_-E = (s32) (temp_v1_10 + 1);
                (&B_0066D0.unk_18)[2].unk_-2 = (u8) temp_v1_9->unk_1;
                (&B_0066D0.unk_18)[2].unk_-1 = (u8) temp_v1_10->unk_1;
                func_0000061C(&(&B_0066D0.unk_18)[2].unk_-1A, 1);
                temp_v1_11 = (&B_0066F0.unk_18)[2].unk_-12;
                (&B_0066F0.unk_18)[2] = (&B_0066F0.unk_18)[2].unk_-2;
                (&B_0066F0.unk_18)[2].unk_-12 = (s32) (temp_v1_11 + 1);
                temp_v1_12 = (&B_0066F0.unk_18)[2].unk_-E;
                (&B_0066F0.unk_18)[2].unk_1 = (u8) (&B_0066F0.unk_18)[2].unk_-1;
                (&B_0066F0.unk_18)[2].unk_-E = (s32) (temp_v1_12 + 1);
                (&B_0066F0.unk_18)[2].unk_-2 = (u8) temp_v1_11->unk_1;
                (&B_0066F0.unk_18)[2].unk_-1 = (u8) temp_v1_12->unk_1;
                func_0000061C(&(&B_0066F0.unk_18)[2].unk_-1A, 2);
                var_s7 -= 1;
            } else {
                temp_v1_13 = B_003D60;
                B_003D60 = temp_v1_13 + 8;
                temp_v1_13->blockinfo.nbase = 0x80;
                B_006690.unk_18.unk_-10 = (void *) (B_006690.unk_18.unk_-10 + 2);
                B_006690.unk_18.unk_-14 = (s32) (B_006690.unk_18.unk_-14 + 2);
                B_006690.unk_18.unk_-C = (void *) (B_006690.unk_18.unk_-C + 2);
                B_006690.unk_18.unk_-8 = (s32) (B_006690.unk_18.unk_-8 + 2);
                B_006690.unk_18.unk_-4 = (s32) (B_006690.unk_18.unk_-4 + 2);
                B_006690.unk_18.unk_-18 = (s32) (B_006690.unk_18.unk_-18 + 2);
                B_006690.unk_18.unk_0 = *B_006690.unk_08;
                temp_v0_6 = *B_006690.unk_0C;
                B_006690.unk_18.unk_4 = temp_v0_6;
                B_006690.unk_18.unk_1 = temp_v0_6;
                if (B_00671C != 0) {
                    (&B_0066B0.unk_1A)[-0x1A].unk_8 = (s32) ((&B_0066B0.unk_1A)[-0x1A].unk_8 + 2);
                    (&B_0066B0.unk_1A)[-0x1A].unk_4 = (s32) ((&B_0066B0.unk_1A)[-0x1A].unk_4 + 2);
                    (&B_0066B0.unk_1A)[-0x1A].unk_C = (s32) ((&B_0066B0.unk_1A)[-0x1A].unk_C + 2);
                    (&B_0066B0.unk_1A)[-0x1A].unk_10 = (s32) ((&B_0066B0.unk_1A)[-0x1A].unk_10 + 2);
                    (&B_0066B0.unk_1A)[-0x1A].unk_14 = (s32) ((&B_0066B0.unk_1A)[-0x1A].unk_14 + 2);
                    (&B_0066B0.unk_1A)[-0x1A] = (s32) ((&B_0066B0.unk_1A)[-0x1A] + 2);
                    (&B_0066B0.unk_1A)[-0x1A].unk_18 = (u8) *B_0066B0.unk_08;
                    temp_v0_7 = *B_0066B0.unk_0C;
                    (&B_0066B0.unk_1A)[-0x1A].unk_1C = temp_v0_7;
                    (&B_0066B0.unk_1A)[-0x1A].unk_19 = temp_v0_7;
                }
                (&B_0066D0.unk_18)[-0x18].unk_8 = (s32) ((&B_0066D0.unk_18)[-0x18].unk_8 + 1);
                (&B_0066D0.unk_18)[-0x18].unk_4 = (s32) ((&B_0066D0.unk_18)[-0x18].unk_4 + 1);
                (&B_0066D0.unk_18)[-0x18].unk_C = (s32) ((&B_0066D0.unk_18)[-0x18].unk_C + 1);
                (&B_0066D0.unk_18)[-0x18].unk_10 = (s32) ((&B_0066D0.unk_18)[-0x18].unk_10 + 1);
                (&B_0066D0.unk_18)[-0x18].unk_14 = (s32) ((&B_0066D0.unk_18)[-0x18].unk_14 + 1);
                (&B_0066D0.unk_18)[-0x18] = (s32) ((&B_0066D0.unk_18)[-0x18] + 1);
                (&B_0066D0.unk_18)[-0x18].unk_18 = (u8) *B_0066D0.unk_08;
                temp_t0 = *B_0066D0.unk_0C;
                (&B_0066F0.unk_18)[-0x18].unk_8 = (s32) ((&B_0066F0.unk_18)[-0x18].unk_8 + 1);
                (&B_0066F0.unk_18)[-0x18].unk_4 = (s32) ((&B_0066F0.unk_18)[-0x18].unk_4 + 1);
                (&B_0066F0.unk_18)[-0x18].unk_C = (s32) ((&B_0066F0.unk_18)[-0x18].unk_C + 1);
                (&B_0066F0.unk_18)[-0x18].unk_10 = (s32) ((&B_0066F0.unk_18)[-0x18].unk_10 + 1);
                (&B_0066F0.unk_18)[-0x18].unk_14 = (s32) ((&B_0066F0.unk_18)[-0x18].unk_14 + 1);
                (&B_0066F0.unk_18)[-0x18] = (s32) ((&B_0066F0.unk_18)[-0x18] + 1);
                (&B_0066D0.unk_18)[-0x18].unk_1C = temp_t0;
                (&B_0066D0.unk_18)[-0x18].unk_19 = temp_t0;
                (&B_0066F0.unk_18)[-0x18].unk_18 = (u8) *B_0066F0.unk_08;
                temp_v0_8 = *B_0066F0.unk_0C;
                (&B_0066F0.unk_18)[-0x18].unk_1C = temp_v0_8;
                (&B_0066F0.unk_18)[-0x18].unk_19 = temp_v0_8;
                var_s7 -= 1;
            }
        } while (var_s7 > 0);
    }
    temp_a0 = B_006690.unk_18.unk_0;
    temp_s0 = &B_006690.unk_18 - 0x18;
    if ((temp_a0 & 0xFF) != 0x80) {
        temp_v1_14 = B_006690.unk_08;
        B_006690.unk_1A = temp_a0;
        B_006690.unk_08 = temp_v1_14 + 1;
        temp_v1_15 = B_006690.unk_0C;
        B_006690.unk_1B = B_006690.unk_19;
        B_006690.unk_0C = temp_v1_15 + 1;
        B_006690.unk_18.unk_0 = temp_v1_14->unk_1;
        B_006690.unk_19 = temp_v1_15->unk_1;
        func_0000061C((struct_009240 *) temp_s0, 0);
        B_006690.unk_1A = B_006690.unk_18.unk_0;
        B_006690.unk_08 = B_006690.unk_08 + 1;
        B_006690.unk_1B = B_006690.unk_19;
        B_006690.unk_0C = B_006690.unk_0C + 1;
        func_0000061C((struct_009240 *) temp_s0, 0);
        if (B_00671C != 0) {
            temp_v1_16 = B_0066B0.unk_08;
            B_0066B0.unk_1A.unk_0 = B_0066B0.unk_18;
            B_0066B0.unk_08 = temp_v1_16 + 1;
            temp_v1_17 = B_0066B0.unk_0C;
            temp_s1 = &B_0066B0.unk_1A - 0x1A;
            B_0066B0.unk_1B = B_0066B0.unk_19;
            B_0066B0.unk_0C = temp_v1_17 + 1;
            B_0066B0.unk_18 = temp_v1_16->unk_1;
            B_0066B0.unk_19 = temp_v1_17->unk_1;
            func_0000061C((struct_009240 *) temp_s1, 0);
            B_0066B0.unk_1A.unk_0 = B_0066B0.unk_18;
            B_0066B0.unk_08 = B_0066B0.unk_08 + 1;
            B_0066B0.unk_1B = B_0066B0.unk_19;
            B_0066B0.unk_0C = B_0066B0.unk_0C + 1;
            func_0000061C((struct_009240 *) temp_s1, 0);
        }
        B_0066D0.unk_1A = B_0066D0.unk_18;
        B_0066D0.unk_08 = B_0066D0.unk_08 + 1;
        B_0066D0.unk_1B = B_0066D0.unk_19;
        B_0066D0.unk_0C = B_0066D0.unk_0C + 1;
        func_0000061C((struct_009240 *) (&B_0066D0.unk_1A - 0x1A), 1);
        B_0066F0.unk_1A = B_0066F0.unk_18;
        B_0066F0.unk_08 = B_0066F0.unk_08 + 1;
        B_0066F0.unk_1B = B_0066F0.unk_19;
        B_0066F0.unk_0C = B_0066F0.unk_0C + 1;
        func_0000061C((struct_009240 *) (&B_0066F0.unk_1A - 0x1A), 2);
        return;
    }
    temp_v1_18 = B_003D60;
    B_003D60 = temp_v1_18 + 8;
    temp_v1_18->blockinfo.nbase = 0x80;
    B_006690.unk_00 += 2;
    B_006690.unk_04 = B_006690.unk_04 + 2;
    B_006690.unk_08 = B_006690.unk_08 + 2;
    B_006690.unk_0C = B_006690.unk_0C + 2;
    B_006690.unk_10 = B_006690.unk_10 + 2;
    B_006690.unk_14 = B_006690.unk_14 + 2;
    if (B_00671C != 0) {
        B_0066B0.unk_00 += 2;
        B_0066B0.unk_04 = B_0066B0.unk_04 + 2;
        B_0066B0.unk_08 = B_0066B0.unk_08 + 2;
        B_0066B0.unk_0C = B_0066B0.unk_0C + 2;
        B_0066B0.unk_10 = B_0066B0.unk_10 + 2;
        B_0066B0.unk_14 = B_0066B0.unk_14 + 2;
    }
    B_0066D0.unk_00 += 1;
    B_0066D0.unk_04 = B_0066D0.unk_04 + 1;
    B_0066D0.unk_08 = B_0066D0.unk_08 + 1;
    B_0066D0.unk_0C = B_0066D0.unk_0C + 1;
    B_0066D0.unk_10 = B_0066D0.unk_10 + 1;
    B_0066D0.unk_14 = B_0066D0.unk_14 + 1;
    B_0066F0.unk_00 += 1;
    B_0066F0.unk_04 = B_0066F0.unk_04 + 1;
    B_0066F0.unk_08 = B_0066F0.unk_08 + 1;
    B_0066F0.unk_0C = B_0066F0.unk_0C + 1;
    B_0066F0.unk_10 = B_0066F0.unk_10 + 1;
    B_0066F0.unk_14 = B_0066F0.unk_14 + 1;
}
#else
void func_000009FC(void);
INCLUDE_ASM("asm/functions/hvqm2decSP1", func_000009FC);
#endif

void func_0000135C(void) {
    s32 var_s2;

    B_0066D0.unk_00 = B_0066D0.unk_08 = B_00667C;;
    B_0066D0.unk_10 = &B_00667C[B_006738];
    B_0066D0.unk_0C = B_006688;
    B_0066D0.unk_04 = B_006688;
    B_0066D0.unk_14 = &B_006688[B_006738];

    B_0066F0.unk_00 = B_0066F0.unk_08 = B_006680;
    B_0066F0.unk_10 = &B_006680[B_006738];
    B_0066F0.unk_0C = B_00668C;
    B_0066F0.unk_04 = B_00668C;
    B_0066F0.unk_14 = &B_00668C[B_006738];

    B_006690.unk_00 = B_006690.unk_08 = B_006678;
    B_006690.unk_10 = &B_006678[B_00672C];
    B_006690.unk_0C = B_006684;
    B_006690.unk_04 = B_006684;
    B_006690.unk_14 = &B_006684[B_00672C];

    if (B_00671C != 0) {
        B_0066B0.unk_00 = B_006678;
        B_0066B0.unk_08 = B_006690.unk_10;
        B_0066B0.unk_10 = &B_006690.unk_10[B_00672C];
        B_0066B0.unk_04 = B_006684;
        B_0066B0.unk_0C = B_006690.unk_14;
        B_0066B0.unk_14 = &B_006690.unk_14[B_00672C];
    }

    func_000009FC();

    B_0066D0.unk_00 = B_00667C;
    B_0066D0.unk_04 = B_006688;
    B_0066F0.unk_00 = B_006680;
    B_0066F0.unk_04 = B_00668C;

    if (B_00671C != 0) {
        B_006690.unk_08 = &B_006690.unk_08[B_00672C];
        B_006690.unk_0C = &B_006690.unk_0C[B_00672C];
        B_006690.unk_10 = &B_006690.unk_10[B_00672C];
        B_006690.unk_14 = &B_006690.unk_14[B_00672C];

        B_0066B0.unk_00 = &B_0066B0.unk_00[B_00672C];
        B_0066B0.unk_04 = &B_0066B0.unk_04[B_00672C];
        B_0066B0.unk_08 = &B_0066B0.unk_08[B_00672C];
        B_0066B0.unk_0C = &B_0066B0.unk_0C[B_00672C];
        B_0066B0.unk_10 = &B_0066B0.unk_10[B_00672C];
        B_0066B0.unk_14 = &B_0066B0.unk_14[B_00672C];
    } else {
        B_006690.unk_00 = B_006678;
        B_006690.unk_04 = B_006684;
    }

    for (var_s2 = B_00673C - 2; var_s2 > 0; var_s2--) {
        func_000009FC();

        if (B_00671C != 0) {
            B_006690.unk_00 = &B_006690.unk_00[B_00672C];
            B_006690.unk_04 = &B_006690.unk_04[B_00672C];
            B_006690.unk_08 = &B_006690.unk_08[B_00672C];
            B_006690.unk_0C = &B_006690.unk_0C[B_00672C];
            B_006690.unk_10 = &B_006690.unk_10[B_00672C];
            B_006690.unk_14 = &B_006690.unk_14[B_00672C];

            B_0066B0.unk_00 = &B_0066B0.unk_00[B_00672C];
            B_0066B0.unk_04 = &B_0066B0.unk_04[B_00672C];
            B_0066B0.unk_08 = &B_0066B0.unk_08[B_00672C];
            B_0066B0.unk_0C = &B_0066B0.unk_0C[B_00672C];
            B_0066B0.unk_10 = &B_0066B0.unk_10[B_00672C];
            B_0066B0.unk_14 = &B_0066B0.unk_14[B_00672C];
        }
    }

    B_0066D0.unk_10 = B_0066D0.unk_08;
    B_0066D0.unk_14 = B_0066D0.unk_0C;
    B_0066F0.unk_10 = B_0066F0.unk_08;
    B_0066F0.unk_14 = B_0066F0.unk_0C;

    if (B_00671C != 0) {
        B_0066B0.unk_10 = B_0066B0.unk_08;
        B_0066B0.unk_14 = B_0066B0.unk_0C;
    } else {
        B_006690.unk_10 = B_006690.unk_08;
        B_006690.unk_14 = B_006690.unk_0C;
    }

    func_000009FC();
}

#if 0
u32 hvqm2DecodeSP1(void *code, u32 format, u16 *outbuf, u16 *previm, u16 *workbuf, HVQM2Arg *arg, HVQM2Info *infobuf) {
    u8 sp10;
    u8 sp11;
    u8 sp12;
    u16 *sp1C;
    s32 *sp24;
    u8 *sp2C;
    u8 *sp34;
    u8 *sp3C;
    u8 *sp44;
    u8 *sp4C;
    s32 sp54;
    u8 *sp5C;
    u16 *sp64;
    u8 sp6F;
    u8 sp77;                                        /* compiler-managed */
    s32 sp7C;
    s16 var_v0_11;
    s16 var_v0_13;
    s16 var_v0_15;
    s16 var_v0_17;
    s16 var_v0_19;
    s16 var_v0_21;
    s16 var_v0_23;
    s16 var_v0_25;
    s16 var_v0_27;
    s16 var_v0_29;
    s16 var_v0_31;
    s16 var_v0_9;
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
    s32 var_a0;
    s32 var_a0_6;
    s32 var_a1_2;
    s32 var_a2_2;
    s32 var_a3_3;
    s32 var_a3_4;
    s32 var_a3_5;
    s32 var_a3_6;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s3_4;
    s32 var_s6;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_t0_3;
    s32 var_t0_4;
    s32 var_t1;
    s32 var_t2;
    s32 var_t3;
    s32 var_t4;
    s32 var_v0_10;
    s32 var_v0_12;
    s32 var_v0_14;
    s32 var_v0_16;
    s32 var_v0_18;
    s32 var_v0_20;
    s32 var_v0_22;
    s32 var_v0_24;
    s32 var_v0_26;
    s32 var_v0_28;
    s32 var_v0_2;
    s32 var_v0_30;
    s32 var_v0_32;
    s32 var_v0_33;
    s32 var_v0_34;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_8;
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
    u16 *var_a1;
    u16 *var_a1_24;
    u16 *var_a2;
    u16 *var_a2_6;
    u16 *var_a3;
    u16 *var_fp_3;
    u16 *var_t0_5;
    u16 *var_v1;
    u16 *var_v1_12;
    u16 temp_v0;
    u16 temp_v0_55;
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
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_a0_3;
    u32 temp_a0_4;
    u32 temp_a0_6;
    u32 temp_s2_2;
    u32 temp_s2_3;
    u32 temp_s2_4;
    u32 var_v0;
    u32 var_v0_5;
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
    u8 *var_a2_3;
    u8 *var_a2_4;
    u8 *var_a2_5;
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

    var_a2 = outbuf;
    sp1C = previm;
    if (format == 2) {
        var_t0 = B_006728;
        var_a3 = sp1C;
        var_v0 = 0;
        if (var_t0 > 0) {
            do {
                var_a0 = B_006724;
                var_a1 = var_a2;
                var_v1 = var_a3;
                if (var_a0 > 0) {
                    do {
                        temp_v0 = *var_v1;
                        var_v1 += 2;
                        var_a0 -= 1;
                        *var_a1 = temp_v0;
                        var_a1 += 2;
                    } while (var_a0 > 0);
                }
                var_t0 -= 1;
                var_a2 = &var_a2[B_006710];
                var_a3 = &var_a3[B_006710];
            } while (var_t0 > 0);
            return 0U;
        }
        /* Duplicate return node #349. Try simplifying control flow for better match */
        return var_v0;
    }
    B_006678 = (u8 *) workbuf;
    temp_v0_2 = workbuf + B_006734;
    B_006684 = temp_v0_2;
    temp_v0_3 = &temp_v0_2[B_006734];
    B_00667C = temp_v0_3;
    temp_v0_4 = &temp_v0_3[B_006740];
    B_006688 = temp_v0_4;
    temp_v0_5 = &temp_v0_4[B_006740];
    B_006680 = temp_v0_5;
    B_00668C = &temp_v0_5[B_006740];
    temp_v1 = code + code->unk_0;
    if (*temp_v1 != 0) {
        B_003D80.unk_8 = temp_v1 + 4;
        B_003D80.unk_0 = 0;
        if (&B_004640 != NULL) {
            B_006672 = 0x100;
            B_004640.unk_000 = func_00000040(&B_003D80, &B_004640);
        }
    } else {
        B_003D80.unk_8 = NULL;
        B_003D80.unk_0 = 0;
    }
    temp_v1_2 = code + code->unk_4;
    if (*temp_v1_2 != 0) {
        B_004640 = temp_v1_2 + 4;
    } else {
        B_003D8C.unk_8 = NULL;
    }
    B_003D8C.unk_0 = 0;
    temp_v1_3 = code + code->unk_8;
    if (*temp_v1_3 != 0) {
        B_003D98.unk_8 = temp_v1_3 + 4;
        B_003D98.unk_0 = 0;
        if (&B_004E50 != NULL) {
            B_006672 = 0x100;
            B_004E50.unk_000 = func_00000040(&B_003D98, &B_004E50);
        }
    } else {
        B_003D98.unk_8 = NULL;
        B_003D98.unk_0 = 0;
    }
    temp_v1_4 = code + code->unk_C;
    if (*temp_v1_4 != 0) {
        B_004E50 = temp_v1_4 + 4;
    } else {
        B_003DA4.unk_8 = NULL;
    }
    B_003DA4.unk_0 = 0;
    temp_v1_5 = code + code->unk_10;
    if (*temp_v1_5 != 0) {
        B_003DB0->unk_8 = temp_v1_5 + 4;
        B_003DB0->unk_0 = 0;
        if (&B_005660 != NULL) {
            B_006672 = 0x100;
            B_005660.unk_000 = func_00000040(B_003DB0, &B_005660);
        }
    } else {
        B_003DB0->unk_8 = NULL;
        B_003DB0->unk_0 = 0;
    }
    temp_v1_6 = code + code->unk_14;
    if (*temp_v1_6 != 0) {
        B_005660 = temp_v1_6 + 4;
    } else {
        *(B_003DB0 + 0x14) = 0;
    }
    (B_003DB0 + 0xC)->unk_0 = 0;
    temp_v1_7 = code + code->unk_18;
    if (*temp_v1_7 != 0) {
        *(B_003DB0 + 0x14) = temp_v1_7 + 4;
    } else {
        *(B_003DB0 + 0x20) = 0;
    }
    (B_003DB0 + 0x18)->unk_0 = 0;
    temp_v1_8 = code + code->unk_28;
    if (*temp_v1_8 != 0) {
        B_003DD8.unk_8 = temp_v1_8 + 4;
        B_003DD8.unk_0 = 0;
        if (&B_003E30 != NULL) {
            B_006672 = 0x100;
            B_003E30.unk_000 = func_00000040(&B_003DD8, &B_003E30);
        }
    } else {
        B_003DD8.unk_8 = NULL;
        B_003DD8.unk_0 = 0;
    }
    temp_v1_9 = code + code->unk_2C;
    if (*temp_v1_9 != 0) {
        B_003E30 = temp_v1_9 + 4;
    } else {
        B_003DE4.unk_8 = NULL;
    }
    B_003DE4.unk_0 = 0;
    temp_v1_10 = code + code->unk_30;
    if (*temp_v1_10 != 0) {
        B_003DE4.unk_8 = temp_v1_10 + 4;
    } else {
        B_003DF0.unk_8 = NULL;
    }
    B_003DF0.unk_0 = 0;
    var_a1_2 = 0;
    var_a0_2 = &B_003E24;
    var_v1_2 = code;
    do {
        temp_v0_6 = var_v1_2->unk_1C;
        var_v1_2 += 4;
        var_a1_2 += 1;
        *var_a0_2 = code + temp_v0_6 + 4;
        var_a0_2 += 4;
    } while (var_a1_2 < 3);
    B_006744 = arg->t.nest;
    B_003D60 = infobuf;
    arg->t.chroma_step_h = (u8) B_006714;
    arg->t.chroma_step_v = (u8) B_006718;
    arg->t.info = (u64 *) infobuf;
    arg->t.buf = (u64 *) var_a2;
    arg->t.buf_width = (u16) B_006710;
    arg->t.hmcus = (u16) B_006738;
    arg->t.vmcus = (u16) B_00673C;
    arg->t.alpha = B_006751;
    switch (format) {                               /* irregular */
        case 0x0:
            var_a2_2 = 0;
            var_a0_3 = B_003E00;
            sp24 = code + 0x34;
            var_a1_3 = sp24;
            do {
                temp_v1_11 = code + *var_a1_3;
                if (*temp_v1_11 != 0) {
                    var_a0_3->unk_8 = temp_v1_11 + 4;
                } else {
                    var_a0_3->unk_8 = NULL;
                }
                var_a0_3->unk_0 = 0;
                var_a0_3 += 0xC;
                var_a2_2 += 1;
                var_a1_3 += 4;
            } while (var_a2_2 < 3);
            var_t0_2 = B_006734;
            var_a2_3 = B_006678;
            if (var_t0_2 > 0) {
                do {
                    var_a1_4 = B_004640.unk_000;
                    var_v1_3 = var_a1_4;
                    if ((s16) B_004640.unk_000 >= 0x100) {
                        do {
                            if (B_003D80.unk_0 == 0) {
                                temp_v0_7 = B_003D80.unk_8;
                                B_003D80.unk_8 = temp_v0_7 + 4;
                                B_003D80.unk_0 = 0x80000000;
                                B_003D80.unk_4 = *temp_v0_7;
                            }
                            temp_v1_12 = B_003D80.unk_4 & B_003D80.unk_0;
                            B_003D80.unk_0 = (u32) B_003D80.unk_0 >> 1;
                            temp_v0_8 = var_a1_4 << 0x10;
                            if (temp_v1_12 != 0) {
                                var_a1_4 = ((temp_v0_8 >> 0xF) + &B_004640)->unk_402;
                                var_v0_2 = var_a1_4 << 0x10;
                            } else {
                                var_a1_4 = ((temp_v0_8 >> 0xF) + &B_004640)->unk_2;
                                var_v0_2 = var_a1_4 << 0x10;
                            }
                            var_v1_3 = var_a1_4;
                        } while ((var_v0_2 >> 0x10) >= 0x100);
                    }
                    if (var_v1_3 & 0xFF) {
                        *var_a2_3 = (u8) var_v1_3;
                        var_a2_3 += 1;
                        var_t0_2 -= 1;
                    } else {
                        var_a1_5 = B_004E50.unk_000;
                        var_v0_3 = var_a1_5 & 0xFF;
                        if ((s16) B_004E50.unk_000 >= 0x100) {
                            do {
                                if (B_003D98.unk_0 == 0) {
                                    temp_v0_9 = B_003D98.unk_8;
                                    B_003D98.unk_8 = temp_v0_9 + 4;
                                    B_003D98.unk_0 = 0x80000000;
                                    B_003D98.unk_4 = *temp_v0_9;
                                }
                                temp_v1_13 = B_003D98.unk_4 & B_003D98.unk_0;
                                B_003D98.unk_0 = (u32) B_003D98.unk_0 >> 1;
                                temp_v0_10 = var_a1_5 << 0x10;
                                if (temp_v1_13 != 0) {
                                    var_a1_5 = ((temp_v0_10 >> 0xF) + &B_004E50)->unk_402;
                                    var_v0_4 = var_a1_5 << 0x10;
                                } else {
                                    var_a1_5 = ((temp_v0_10 >> 0xF) + &B_004E50)->unk_2;
                                    var_v0_4 = var_a1_5 << 0x10;
                                }
                                var_v0_3 = var_a1_5 & 0xFF;
                            } while ((var_v0_4 >> 0x10) >= 0x100);
                        }
                        var_t0_2 -= var_v0_3 + 1;
                        var_v1_4 = var_v0_3;
                        if (var_v1_4 != -1) {
                            do {
                                *var_a2_3 = 0;
                                var_v1_4 -= 1;
                                var_a2_3 += 1;
                            } while (var_v1_4 != -1);
                        }
                    }
                } while (var_t0_2 > 0);
            }
            var_t0_3 = B_006740;
            var_a2_4 = B_00667C;
            var_a3_2 = B_006680;
            if (var_t0_3 > 0) {
                do {
                    var_a1_6 = B_004640.unk_000;
                    var_v0_5 = var_a1_6 & 0xFF;
                    if ((s16) B_004640.unk_000 >= 0x100) {
                        do {
                            if (B_003D8C.unk_0 == 0) {
                                temp_v0_11 = B_003D8C.unk_8;
                                B_003D8C.unk_8 = temp_v0_11 + 4;
                                B_003D8C.unk_0 = 0x80000000;
                                B_003D8C.unk_4 = *temp_v0_11;
                            }
                            temp_v1_14 = B_003D8C.unk_4 & B_003D8C.unk_0;
                            B_003D8C.unk_0 = (u32) B_003D8C.unk_0 >> 1;
                            temp_v0_12 = var_a1_6 << 0x10;
                            if (temp_v1_14 != 0) {
                                var_a1_6 = ((temp_v0_12 >> 0xF) + &B_004640)->unk_402;
                                var_v0_6 = var_a1_6 << 0x10;
                            } else {
                                var_a1_6 = ((temp_v0_12 >> 0xF) + &B_004640)->unk_2;
                                var_v0_6 = var_a1_6 << 0x10;
                            }
                            var_v0_5 = var_a1_6 & 0xFF;
                        } while ((var_v0_6 >> 0x10) >= 0x100);
                    }
                    if (var_v0_5 == 0) {
                        var_a1_7 = B_004E50.unk_000;
                        var_v0_7 = var_a1_7 & 0xFF;
                        if ((s16) B_004E50.unk_000 >= 0x100) {
                            do {
                                if (B_003DA4.unk_0 == 0) {
                                    temp_v0_13 = B_003DA4.unk_8;
                                    B_003DA4.unk_8 = temp_v0_13 + 4;
                                    B_003DA4.unk_0 = 0x80000000;
                                    B_003DA4.unk_4 = *temp_v0_13;
                                }
                                temp_v1_15 = B_003DA4.unk_4 & B_003DA4.unk_0;
                                B_003DA4.unk_0 = (u32) B_003DA4.unk_0 >> 1;
                                temp_v0_14 = var_a1_7 << 0x10;
                                if (temp_v1_15 != 0) {
                                    var_a1_7 = ((temp_v0_14 >> 0xF) + &B_004E50)->unk_402;
                                    var_v0_8 = var_a1_7 << 0x10;
                                } else {
                                    var_a1_7 = ((temp_v0_14 >> 0xF) + &B_004E50)->unk_2;
                                    var_v0_8 = var_a1_7 << 0x10;
                                }
                                var_v0_7 = var_a1_7 & 0xFF;
                            } while ((var_v0_8 >> 0x10) >= 0x100);
                        }
                        var_t0_3 -= var_v0_7 + 1;
                        var_v1_5 = var_v0_7;
                        if (var_v1_5 != -1) {
                            do {
                                *var_a2_4 = 0;
                                var_a2_4 += 1;
                                *var_a3_2 = 0;
                                var_v1_5 -= 1;
                                var_a3_2 += 1;
                            } while (var_v1_5 != -1);
                        }
                    } else {
                        *var_a2_4 = var_v0_5 & 0xF;
                        var_a2_4 += 1;
                        *var_a3_2 = (u8) (var_v0_5 >> 4);
                        var_a3_2 += 1;
                        var_t0_3 -= 1;
                    }
                } while (var_t0_3 > 0);
            }
            var_s0 = B_006684;
            var_s3 = B_006738;
            sp34 = B_006688;
            sp44 = B_00668C;
            var_fp = 0;
            sp2C = B_006688;
            var_s7 = 0;
            var_s2 = 0;
            sp12 = 0;
            sp11 = 0;
            sp10 = 0;
            var_s1 = var_s0;
            sp3C = B_00668C;
            if (var_s3 > 0) {
                sp4C = &sp10;
                do {
                    if (sp10 == 0) {
                        var_v0_9 = func_000002F8(&B_003DD8);
                        if (var_v0_9 == 0) {
                            var_a1_8 = B_004E50.unk_000;
                            if ((s16) B_004E50.unk_000 >= 0x100) {
                                do {
                                    if (B_003E00->unk_0 == 0) {
                                        temp_v0_15 = B_003E00->unk_8;
                                        B_003E00->unk_8 = temp_v0_15 + 4;
                                        B_003E00->unk_0 = 0x80000000;
                                        B_003E00->unk_4 = *temp_v0_15;
                                    }
                                    temp_v1_16 = B_003E00->unk_4 & B_003E00->unk_0;
                                    B_003E00->unk_0 = (u32) B_003E00->unk_0 >> 1;
                                    temp_v0_16 = var_a1_8 << 0x10;
                                    if (temp_v1_16 != 0) {
                                        var_a1_8 = ((temp_v0_16 >> 0xF) + &B_004E50)->unk_402;
                                        var_v0_10 = var_a1_8 << 0x10;
                                    } else {
                                        var_a1_8 = ((temp_v0_16 >> 0xF) + &B_004E50)->unk_2;
                                        var_v0_10 = var_a1_8 << 0x10;
                                    }
                                } while ((var_v0_10 >> 0x10) >= 0x100);
                            }
                            var_v0_9 = 0;
                            *sp4C = (u8) var_a1_8;
                        }
                    } else {
                        sp10 -= 1;
                        var_v0_9 = 0;
                    }
                    temp_s2 = var_v0_9 + var_s2;
                    *var_s0 = temp_s2;
                    if (sp10 == 0) {
                        var_v0_11 = func_000002F8(&B_003DD8);
                        if (var_v0_11 == 0) {
                            var_a1_9 = B_004E50.unk_000;
                            if ((s16) B_004E50.unk_000 < 0x100) {
                                sp10 = (u8) var_a1_9;
                            } else {
                                do {
                                    if (B_003E00->unk_0 == 0) {
                                        temp_v0_17 = B_003E00->unk_8;
                                        B_003E00->unk_8 = temp_v0_17 + 4;
                                        B_003E00->unk_0 = 0x80000000;
                                        B_003E00->unk_4 = *temp_v0_17;
                                    }
                                    temp_v1_17 = B_003E00->unk_4 & B_003E00->unk_0;
                                    B_003E00->unk_0 = (u32) B_003E00->unk_0 >> 1;
                                    temp_v0_18 = var_a1_9 << 0x10;
                                    if (temp_v1_17 != 0) {
                                        var_a1_9 = ((temp_v0_18 >> 0xF) + &B_004E50)->unk_402;
                                        var_v0_12 = var_a1_9 << 0x10;
                                    } else {
                                        var_a1_9 = ((temp_v0_18 >> 0xF) + &B_004E50)->unk_2;
                                        var_v0_12 = var_a1_9 << 0x10;
                                    }
                                } while ((var_v0_12 >> 0x10) >= 0x100);
                                sp10 = (u8) var_a1_9;
                            }
                            goto block_122;
                        }
                    } else {
                        sp10 -= 1;
block_122:
                        var_v0_11 = 0;
                    }
                    var_s2 = var_v0_11 + temp_s2;
                    var_s0[1] = var_s2;
                    var_s0 = &var_s0[1].unk_1;
                    if (sp11 == 0) {
                        var_v0_13 = func_000002F8(&B_003DE4);
                        if (var_v0_13 == 0) {
                            var_a1_10 = B_004E50.unk_000;
                            if ((s16) B_004E50.unk_000 < 0x100) {
                                sp11 = (u8) var_a1_10;
                            } else {
                                do {
                                    if ((B_003E00 + 0xC)->unk_0 == 0) {
                                        temp_v0_19 = *(B_003E00 + 0x14);
                                        *(B_003E00 + 0x14) = temp_v0_19 + 4;
                                        (B_003E00 + 0xC)->unk_0 = 0x80000000;
                                        *(B_003E00 + 0x10) = *temp_v0_19;
                                    }
                                    temp_a0 = (B_003E00 + 0xC)->unk_0;
                                    (B_003E00 + 0xC)->unk_0 = temp_a0 >> 1;
                                    temp_v0_20 = var_a1_10 << 0x10;
                                    if (*(B_003E00 + 0x10) & temp_a0) {
                                        var_a1_10 = ((temp_v0_20 >> 0xF) + &B_004E50)->unk_402;
                                        var_v0_14 = var_a1_10 << 0x10;
                                    } else {
                                        var_a1_10 = ((temp_v0_20 >> 0xF) + &B_004E50)->unk_2;
                                        var_v0_14 = var_a1_10 << 0x10;
                                    }
                                } while ((var_v0_14 >> 0x10) >= 0x100);
                                sp11 = (u8) var_a1_10;
                            }
                            goto block_136;
                        }
                    } else {
                        sp11 -= 1;
block_136:
                        var_v0_13 = 0;
                    }
                    var_s7 += var_v0_13;
                    *sp34 = var_s7;
                    sp34 += 1;
                    if (sp12 == 0) {
                        var_v0_15 = func_000002F8(&B_003DF0);
                        if (var_v0_15 == 0) {
                            var_a1_11 = B_004E50.unk_000;
                            if ((s16) B_004E50.unk_000 < 0x100) {
                                sp12 = (u8) var_a1_11;
                            } else {
                                do {
                                    if ((B_003E00 + 0x18)->unk_0 == 0) {
                                        temp_v0_21 = *(B_003E00 + 0x20);
                                        *(B_003E00 + 0x20) = temp_v0_21 + 4;
                                        (B_003E00 + 0x18)->unk_0 = 0x80000000;
                                        *(B_003E00 + 0x1C) = *temp_v0_21;
                                    }
                                    temp_a0_2 = (B_003E00 + 0x18)->unk_0;
                                    (B_003E00 + 0x18)->unk_0 = temp_a0_2 >> 1;
                                    temp_v0_22 = var_a1_11 << 0x10;
                                    if (*(B_003E00 + 0x1C) & temp_a0_2) {
                                        var_a1_11 = ((temp_v0_22 >> 0xF) + &B_004E50)->unk_402;
                                        var_v0_16 = var_a1_11 << 0x10;
                                    } else {
                                        var_a1_11 = ((temp_v0_22 >> 0xF) + &B_004E50)->unk_2;
                                        var_v0_16 = var_a1_11 << 0x10;
                                    }
                                } while ((var_v0_16 >> 0x10) >= 0x100);
                                sp12 = (u8) var_a1_11;
                            }
                            goto block_150;
                        }
                    } else {
                        sp12 -= 1;
block_150:
                        var_v0_15 = 0;
                    }
                    var_fp += var_v0_15;
                    var_s3 -= 1;
                    *sp44 = var_fp;
                    sp44 += 1;
                } while (var_s3 > 0);
            }
            if (B_00671C != 0) {
                var_s3_2 = B_006738;
                var_s2_2 = *var_s1;
                if (var_s3_2 > 0) {
                    do {
                        if (sp10 == 0) {
                            var_v0_17 = func_000002F8(&B_003DD8);
                            if (var_v0_17 == 0) {
                                var_a1_12 = B_004E50.unk_000;
                                if ((s16) B_004E50.unk_000 < 0x100) {
                                    sp10 = (u8) var_a1_12;
                                } else {
                                    do {
                                        if (B_003E00->unk_0 == 0) {
                                            temp_v0_23 = B_003E00->unk_8;
                                            B_003E00->unk_8 = temp_v0_23 + 4;
                                            B_003E00->unk_0 = 0x80000000;
                                            B_003E00->unk_4 = *temp_v0_23;
                                        }
                                        temp_v1_18 = B_003E00->unk_4 & B_003E00->unk_0;
                                        B_003E00->unk_0 = (u32) B_003E00->unk_0 >> 1;
                                        temp_v0_24 = var_a1_12 << 0x10;
                                        if (temp_v1_18 != 0) {
                                            var_a1_12 = ((temp_v0_24 >> 0xF) + &B_004E50)->unk_402;
                                            var_v0_18 = var_a1_12 << 0x10;
                                        } else {
                                            var_a1_12 = ((temp_v0_24 >> 0xF) + &B_004E50)->unk_2;
                                            var_v0_18 = var_a1_12 << 0x10;
                                        }
                                    } while ((var_v0_18 >> 0x10) >= 0x100);
                                    sp10 = (u8) var_a1_12;
                                }
                                goto block_168;
                            }
                        } else {
                            sp10 -= 1;
block_168:
                            var_v0_17 = 0;
                        }
                        temp_v0_25 = var_v0_17 + var_s2_2;
                        *var_s0 = temp_v0_25;
                        temp_s2_2 = (u32) (var_s1[1] + (temp_v0_25 & 0xFF)) >> 1;
                        if (sp10 == 0) {
                            var_v0_19 = func_000002F8(&B_003DD8);
                            if (var_v0_19 == 0) {
                                var_a1_13 = B_004E50.unk_000;
                                if ((s16) B_004E50.unk_000 < 0x100) {
                                    sp10 = (u8) var_a1_13;
                                } else {
                                    do {
                                        if (B_003E00->unk_0 == 0) {
                                            temp_v0_26 = B_003E00->unk_8;
                                            B_003E00->unk_8 = temp_v0_26 + 4;
                                            B_003E00->unk_0 = 0x80000000;
                                            B_003E00->unk_4 = *temp_v0_26;
                                        }
                                        temp_v1_19 = B_003E00->unk_4 & B_003E00->unk_0;
                                        B_003E00->unk_0 = (u32) B_003E00->unk_0 >> 1;
                                        temp_v0_27 = var_a1_13 << 0x10;
                                        if (temp_v1_19 != 0) {
                                            var_a1_13 = ((temp_v0_27 >> 0xF) + &B_004E50)->unk_402;
                                            var_v0_20 = var_a1_13 << 0x10;
                                        } else {
                                            var_a1_13 = ((temp_v0_27 >> 0xF) + &B_004E50)->unk_2;
                                            var_v0_20 = var_a1_13 << 0x10;
                                        }
                                    } while ((var_v0_20 >> 0x10) >= 0x100);
                                    sp10 = (u8) var_a1_13;
                                }
                                goto block_182;
                            }
                        } else {
                            sp10 -= 1;
block_182:
                            var_v0_19 = 0;
                        }
                        var_s1 = &var_s1[1].unk_1;
                        temp_v0_28 = var_v0_19 + temp_s2_2;
                        var_s0[1] = temp_v0_28;
                        var_s0 = &var_s0[1].unk_1;
                        var_s3_2 -= 1;
                        var_s2_2 = (u8) ((u32) (*var_s1 + (temp_v0_28 & 0xFF)) >> 1);
                    } while (var_s3_2 > 0);
                }
            }
            sp54 = B_00673C;
            if (B_00673C >= 2) {
                do {
                    var_s7_2 = *sp2C;
                    var_s3_3 = B_006738;
                    var_s2_3 = *var_s1;
                    var_fp_2 = *sp3C;
                    if (var_s3_3 > 0) {
                        sp5C = &sp10;
                        do {
                            if (sp10 == 0) {
                                var_v0_21 = func_000002F8(&B_003DD8);
                                if (var_v0_21 == 0) {
                                    var_a1_14 = B_004E50.unk_000;
                                    if ((s16) B_004E50.unk_000 >= 0x100) {
                                        do {
                                            if (B_003E00->unk_0 == 0) {
                                                temp_v0_29 = B_003E00->unk_8;
                                                B_003E00->unk_8 = temp_v0_29 + 4;
                                                B_003E00->unk_0 = 0x80000000;
                                                B_003E00->unk_4 = *temp_v0_29;
                                            }
                                            temp_v1_20 = B_003E00->unk_4 & B_003E00->unk_0;
                                            B_003E00->unk_0 = (u32) B_003E00->unk_0 >> 1;
                                            temp_v0_30 = var_a1_14 << 0x10;
                                            if (temp_v1_20 != 0) {
                                                var_a1_14 = ((temp_v0_30 >> 0xF) + &B_004E50)->unk_402;
                                                var_v0_22 = var_a1_14 << 0x10;
                                            } else {
                                                var_a1_14 = ((temp_v0_30 >> 0xF) + &B_004E50)->unk_2;
                                                var_v0_22 = var_a1_14 << 0x10;
                                            }
                                        } while ((var_v0_22 >> 0x10) >= 0x100);
                                    }
                                    var_v0_21 = 0;
                                    *sp5C = (u8) var_a1_14;
                                }
                            } else {
                                sp10 -= 1;
                                var_v0_21 = 0;
                            }
                            temp_v0_31 = var_v0_21 + var_s2_3;
                            *var_s0 = temp_v0_31;
                            temp_s2_3 = (u32) (var_s1[1] + (temp_v0_31 & 0xFF)) >> 1;
                            if (sp10 == 0) {
                                var_v0_23 = func_000002F8(&B_003DD8);
                                if (var_v0_23 == 0) {
                                    var_a1_15 = B_004E50.unk_000;
                                    if ((s16) B_004E50.unk_000 < 0x100) {
                                        sp10 = (u8) var_a1_15;
                                    } else {
                                        do {
                                            if (B_003E00->unk_0 == 0) {
                                                temp_v0_32 = B_003E00->unk_8;
                                                B_003E00->unk_8 = temp_v0_32 + 4;
                                                B_003E00->unk_0 = 0x80000000;
                                                B_003E00->unk_4 = *temp_v0_32;
                                            }
                                            temp_v1_21 = B_003E00->unk_4 & B_003E00->unk_0;
                                            B_003E00->unk_0 = (u32) B_003E00->unk_0 >> 1;
                                            temp_v0_33 = var_a1_15 << 0x10;
                                            if (temp_v1_21 != 0) {
                                                var_a1_15 = ((temp_v0_33 >> 0xF) + &B_004E50)->unk_402;
                                                var_v0_24 = var_a1_15 << 0x10;
                                            } else {
                                                var_a1_15 = ((temp_v0_33 >> 0xF) + &B_004E50)->unk_2;
                                                var_v0_24 = var_a1_15 << 0x10;
                                            }
                                        } while ((var_v0_24 >> 0x10) >= 0x100);
                                        sp10 = (u8) var_a1_15;
                                    }
                                    goto block_212;
                                }
                            } else {
                                sp10 -= 1;
block_212:
                                var_v0_23 = 0;
                            }
                            var_s1 = &var_s1[1].unk_1;
                            temp_v0_34 = var_v0_23 + temp_s2_3;
                            var_s0[1] = temp_v0_34;
                            var_s0 = &var_s0[1].unk_1;
                            var_s2_3 = (u8) ((u32) (*var_s1 + (temp_v0_34 & 0xFF)) >> 1);
                            if (sp11 == 0) {
                                var_v0_25 = func_000002F8(&B_003DE4);
                                if (var_v0_25 == 0) {
                                    var_a1_16 = B_004E50.unk_000;
                                    if ((s16) B_004E50.unk_000 < 0x100) {
                                        sp11 = (u8) var_a1_16;
                                    } else {
                                        do {
                                            if ((B_003E00 + 0xC)->unk_0 == 0) {
                                                temp_v0_35 = *(B_003E00 + 0x14);
                                                *(B_003E00 + 0x14) = temp_v0_35 + 4;
                                                (B_003E00 + 0xC)->unk_0 = 0x80000000;
                                                *(B_003E00 + 0x10) = *temp_v0_35;
                                            }
                                            temp_a0_3 = (B_003E00 + 0xC)->unk_0;
                                            (B_003E00 + 0xC)->unk_0 = temp_a0_3 >> 1;
                                            temp_v0_36 = var_a1_16 << 0x10;
                                            if (*(B_003E00 + 0x10) & temp_a0_3) {
                                                var_a1_16 = ((temp_v0_36 >> 0xF) + &B_004E50)->unk_402;
                                                var_v0_26 = var_a1_16 << 0x10;
                                            } else {
                                                var_a1_16 = ((temp_v0_36 >> 0xF) + &B_004E50)->unk_2;
                                                var_v0_26 = var_a1_16 << 0x10;
                                            }
                                        } while ((var_v0_26 >> 0x10) >= 0x100);
                                        sp11 = (u8) var_a1_16;
                                    }
                                    goto block_226;
                                }
                            } else {
                                sp11 -= 1;
block_226:
                                var_v0_25 = 0;
                            }
                            sp2C += 1;
                            temp_v0_37 = var_v0_25 + var_s7_2;
                            *sp34 = temp_v0_37;
                            var_s7_2 = (u8) ((u32) (sp2C[1] + (temp_v0_37 & 0xFF)) >> 1);
                            sp34 += 1;
                            if (sp12 == 0) {
                                var_v0_27 = func_000002F8(&B_003DF0);
                                if (var_v0_27 == 0) {
                                    var_a1_17 = B_004E50.unk_000;
                                    if ((s16) B_004E50.unk_000 < 0x100) {
                                        sp12 = (u8) var_a1_17;
                                    } else {
                                        do {
                                            if ((B_003E00 + 0x18)->unk_0 == 0) {
                                                temp_v0_38 = *(B_003E00 + 0x20);
                                                *(B_003E00 + 0x20) = temp_v0_38 + 4;
                                                (B_003E00 + 0x18)->unk_0 = 0x80000000;
                                                *(B_003E00 + 0x1C) = *temp_v0_38;
                                            }
                                            temp_a0_4 = (B_003E00 + 0x18)->unk_0;
                                            (B_003E00 + 0x18)->unk_0 = temp_a0_4 >> 1;
                                            temp_v0_39 = var_a1_17 << 0x10;
                                            if (*(B_003E00 + 0x1C) & temp_a0_4) {
                                                var_a1_17 = ((temp_v0_39 >> 0xF) + &B_004E50)->unk_402;
                                                var_v0_28 = var_a1_17 << 0x10;
                                            } else {
                                                var_a1_17 = ((temp_v0_39 >> 0xF) + &B_004E50)->unk_2;
                                                var_v0_28 = var_a1_17 << 0x10;
                                            }
                                        } while ((var_v0_28 >> 0x10) >= 0x100);
                                        sp12 = (u8) var_a1_17;
                                    }
                                    goto block_240;
                                }
                            } else {
                                sp12 -= 1;
block_240:
                                var_v0_27 = 0;
                            }
                            sp3C += 1;
                            temp_v0_40 = var_v0_27 + var_fp_2;
                            var_s3_3 -= 1;
                            *sp44 = temp_v0_40;
                            var_fp_2 = (u8) ((u32) (sp3C[1] + (temp_v0_40 & 0xFF)) >> 1);
                            sp44 += 1;
                        } while (var_s3_3 > 0);
                    }
                    if (B_00671C != 0) {
                        var_s3_4 = B_006738;
                        var_s2_4 = *var_s1;
                        if (var_s3_4 > 0) {
                            do {
                                if (sp10 == 0) {
                                    var_v0_29 = func_000002F8(&B_003DD8);
                                    if (var_v0_29 == 0) {
                                        var_a1_18 = B_004E50.unk_000;
                                        if ((s16) B_004E50.unk_000 < 0x100) {
                                            sp10 = (u8) var_a1_18;
                                        } else {
                                            do {
                                                if (B_003E00->unk_0 == 0) {
                                                    temp_v0_41 = B_003E00->unk_8;
                                                    B_003E00->unk_8 = temp_v0_41 + 4;
                                                    B_003E00->unk_0 = 0x80000000;
                                                    B_003E00->unk_4 = *temp_v0_41;
                                                }
                                                temp_v1_22 = B_003E00->unk_4 & B_003E00->unk_0;
                                                B_003E00->unk_0 = (u32) B_003E00->unk_0 >> 1;
                                                temp_v0_42 = var_a1_18 << 0x10;
                                                if (temp_v1_22 != 0) {
                                                    var_a1_18 = ((temp_v0_42 >> 0xF) + &B_004E50)->unk_402;
                                                    var_v0_30 = var_a1_18 << 0x10;
                                                } else {
                                                    var_a1_18 = ((temp_v0_42 >> 0xF) + &B_004E50)->unk_2;
                                                    var_v0_30 = var_a1_18 << 0x10;
                                                }
                                            } while ((var_v0_30 >> 0x10) >= 0x100);
                                            sp10 = (u8) var_a1_18;
                                        }
                                        goto block_258;
                                    }
                                } else {
                                    sp10 -= 1;
block_258:
                                    var_v0_29 = 0;
                                }
                                temp_v0_43 = var_v0_29 + var_s2_4;
                                *var_s0 = temp_v0_43;
                                temp_s2_4 = (u32) (var_s1[1] + (temp_v0_43 & 0xFF)) >> 1;
                                if (sp10 == 0) {
                                    var_v0_31 = func_000002F8(&B_003DD8);
                                    if (var_v0_31 == 0) {
                                        var_a1_19 = B_004E50.unk_000;
                                        if ((s16) B_004E50.unk_000 < 0x100) {
                                            sp10 = (u8) var_a1_19;
                                        } else {
                                            do {
                                                if (B_003E00->unk_0 == 0) {
                                                    temp_v0_44 = B_003E00->unk_8;
                                                    B_003E00->unk_8 = temp_v0_44 + 4;
                                                    B_003E00->unk_0 = 0x80000000;
                                                    B_003E00->unk_4 = *temp_v0_44;
                                                }
                                                temp_v1_23 = B_003E00->unk_4 & B_003E00->unk_0;
                                                B_003E00->unk_0 = (u32) B_003E00->unk_0 >> 1;
                                                temp_v0_45 = var_a1_19 << 0x10;
                                                if (temp_v1_23 != 0) {
                                                    var_a1_19 = ((temp_v0_45 >> 0xF) + &B_004E50)->unk_402;
                                                    var_v0_32 = var_a1_19 << 0x10;
                                                } else {
                                                    var_a1_19 = ((temp_v0_45 >> 0xF) + &B_004E50)->unk_2;
                                                    var_v0_32 = var_a1_19 << 0x10;
                                                }
                                            } while ((var_v0_32 >> 0x10) >= 0x100);
                                            sp10 = (u8) var_a1_19;
                                        }
                                        goto block_272;
                                    }
                                } else {
                                    sp10 -= 1;
block_272:
                                    var_v0_31 = 0;
                                }
                                var_s1 = &var_s1[1].unk_1;
                                temp_v0_46 = var_v0_31 + temp_s2_4;
                                var_s0[1] = temp_v0_46;
                                var_s0 = &var_s0[1].unk_1;
                                var_s3_4 -= 1;
                                var_s2_4 = (u8) ((u32) (*var_s1 + (temp_v0_46 & 0xFF)) >> 1);
                            } while (var_s3_4 > 0);
                        }
                    }
                    temp_t6 = sp54 - 1;
                    sp54 = temp_t6;
                } while (temp_t6 >= 2);
            }
            var_a2_5 = B_006744;
            var_a0_4 = &B_006684[sp24->unk_C + (sp24->unk_E * B_00672C)];
            var_t0_4 = B_00672C;
            if (B_00672C < B_006748) {
                var_t2 = B_006748 - var_t0_4;
                if (var_t0_4 < var_t2) {
                    var_t2 = var_t0_4;
                }
                var_t3 = B_006748 - (var_t0_4 + var_t2);
            } else {
                var_t0_4 = B_006748;
                var_t2 = 0;
                var_t3 = 0;
            }
            var_v1_6 = B_006730;
            var_t1 = B_00674C - var_v1_6;
            if (var_v1_6 < B_00674C) {
                if (var_v1_6 < var_t1) {
                    var_t1 = var_v1_6;
                }
                var_t4 = B_00674C - (var_v1_6 + var_t1);
            } else {
                var_v1_6 = B_00674C;
                var_t1 = 0;
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
                            *var_a2_5 = temp_v0_47;
                            var_a2_5 += 1;
                        } while (var_v1_7 > 0);
                    }
                    var_v1_8 = var_t2;
                    if (var_v1_8 > 0) {
                        do {
                            var_a1_20 -= 1;
                            var_v1_8 -= 1;
                            *var_a2_5 = *var_a1_20;
                            var_a2_5 += 1;
                        } while (var_v1_8 > 0);
                    }
                    var_v1_9 = var_t3;
                    if (var_v1_9 > 0) {
                        do {
                            *var_a2_5 = 0;
                            var_v1_9 -= 1;
                            var_a2_5 += 1;
                        } while (var_v1_9 > 0);
                    }
                    var_a3_3 -= 1;
                    var_a0_4 = &var_a0_4[B_00672C];
                } while (var_a3_3 > 0);
            }
            var_a3_4 = var_t1;
            var_a1_21 = var_a2_5 - B_006748;
            if (var_a3_4 > 0) {
                do {
                    var_v1_10 = B_006748;
                    var_a0_5 = var_a1_21;
                    if (var_v1_10 > 0) {
                        do {
                            temp_v0_48 = *var_a0_5;
                            var_a0_5 += 1;
                            var_v1_10 -= 1;
                            *var_a2_5 = temp_v0_48;
                            var_a2_5 += 1;
                        } while (var_v1_10 > 0);
                    }
                    var_a3_4 -= 1;
                    var_a1_21 -= B_006748;
                } while (var_a3_4 > 0);
            }
            var_a3_5 = var_t4;
            if (var_a3_5 > 0) {
loop_298:
                var_v1_11 = B_006748;
                if (var_v1_11 > 0) {
                    do {
                        *var_a2_5 = 0;
                        var_v1_11 -= 1;
                        var_a2_5 += 1;
                    } while (var_v1_11 > 0);
                }
                var_a3_5 -= 1;
                if (var_a3_5 > 0) {
                    goto loop_298;
                }
            }
block_348:
            func_0000135C();
            var_v0 = 1;
            return var_v0;
        case 0x1:
            temp_v1_24 = code + code->unk_34;
            if (*temp_v1_24 != 0) {
                B_003D70.unk_8 = temp_v1_24 + 4;
                B_003D70.unk_0 = 0;
                if (&B_005E70 != NULL) {
                    B_006672 = 0x100;
                    B_005E70.unk_000 = func_00000040(&B_003D70, &B_005E70);
                }
            } else {
                B_003D70.unk_8 = NULL;
                B_003D70.unk_0 = 0;
            }
            temp_a0_5 = code + (code + 0x34)->unk_4;
            if (*temp_a0_5 != 0) {
                B_005E70 = temp_a0_5 + 4;
            } else {
                B_003D64.unk_8 = NULL;
            }
            B_003D64.unk_0 = 0;
            var_s3_5 = 0;
            sp64 = var_a2;
            var_s4 = 0;
            sp6F = 0;
            sp77 = 0;
            sp10 = 0;
            sp11 = 0;
            B_006690.unk_08 = B_006678;
            B_006690.unk_0C = B_006684;
            B_006690.unk_10 = &B_006678[B_00672C];
            B_006690.unk_14 = &B_006684[B_00672C];
            B_0066D0.unk_08 = B_00667C;
            B_0066D0.unk_0C = B_006688;
            B_0066F0.unk_08 = B_006680;
            B_0066F0.unk_0C = B_00668C;
            var_s5 = 0;
            if (B_00671C == 0) {
                B_0066D0.unk_10 = &B_00667C[B_006738];
                B_0066D0.unk_14 = &B_006688[B_006738];
                B_0066F0.unk_10 = &B_006680[B_006738];
                B_0066F0.unk_14 = &B_00668C[B_006738];
            }
            sp7C = 0;
            if (B_006728 > 0) {
                do {
                    var_fp_3 = sp64;
                    var_s6 = 0;
                    if (B_006724 > 0) {
                        do {
                            if (B_003D64.unk_0 == 0) {
                                temp_v0_49 = B_003D64.unk_8;
                                B_003D64.unk_8 = temp_v0_49 + 4;
                                B_003D64.unk_0 = 0x80000000;
                                B_003D64.unk_4 = *temp_v0_49;
                            }
                            temp_a0_6 = (u32) B_003D64.unk_0 >> 1;
                            B_003D64.unk_0 = temp_a0_6;
                            if (!(B_003D64.unk_4 & B_003D64.unk_0)) {
                                var_a1_22 = B_005E70.unk_000;
                                if ((s16) B_005E70.unk_000 >= 0x100) {
                                    do {
                                        if (B_003D70.unk_0 == 0) {
                                            temp_v0_50 = B_003D70.unk_8;
                                            B_003D70.unk_8 = temp_v0_50 + 4;
                                            B_003D70.unk_0 = 0x80000000;
                                            B_003D70.unk_4 = *temp_v0_50;
                                        }
                                        temp_v1_25 = B_003D70.unk_4 & B_003D70.unk_0;
                                        B_003D70.unk_0 = (u32) B_003D70.unk_0 >> 1;
                                        temp_v0_51 = var_a1_22 << 0x10;
                                        if (temp_v1_25 != 0) {
                                            var_a1_22 = ((temp_v0_51 >> 0xF) + &B_005E70)->unk_402;
                                            var_v0_33 = var_a1_22 << 0x10;
                                        } else {
                                            var_a1_22 = ((temp_v0_51 >> 0xF) + &B_005E70)->unk_2;
                                            var_v0_33 = var_a1_22 << 0x10;
                                        }
                                    } while ((var_v0_33 >> 0x10) >= 0x100);
                                }
                                var_a1_23 = B_005E70.unk_000;
                                sp6F += var_a1_22 & 0xFF;
                                if ((s16) B_005E70.unk_000 >= 0x100) {
                                    do {
                                        if (B_003D70.unk_0 == 0) {
                                            temp_v0_52 = B_003D70.unk_8;
                                            B_003D70.unk_8 = temp_v0_52 + 4;
                                            B_003D70.unk_0 = 0x80000000;
                                            B_003D70.unk_4 = *temp_v0_52;
                                        }
                                        temp_v1_26 = B_003D70.unk_4 & B_003D70.unk_0;
                                        B_003D70.unk_0 = (u32) B_003D70.unk_0 >> 1;
                                        temp_v0_53 = var_a1_23 << 0x10;
                                        if (temp_v1_26 != 0) {
                                            var_a1_23 = ((temp_v0_53 >> 0xF) + &B_005E70)->unk_402;
                                            var_v0_34 = var_a1_23 << 0x10;
                                        } else {
                                            var_a1_23 = ((temp_v0_53 >> 0xF) + &B_005E70)->unk_2;
                                            var_v0_34 = var_a1_23 << 0x10;
                                        }
                                    } while ((var_v0_34 >> 0x10) >= 0x100);
                                }
                                temp_v0_54 = sp77 + (var_a1_23 & 0xFF);
                                var_t0_5 = var_fp_3;
                                var_a3_6 = 8;
                                sp77 = temp_v0_54;
                                var_v1_12 = &(&sp1C[var_s6 + (s8) sp6F])[(sp7C + temp_v0_54) * B_006710];
                                do {
                                    var_a2_6 = var_t0_5;
                                    var_a1_24 = var_v1_12;
                                    var_a0_6 = 8;
loop_333:
                                    temp_v0_55 = *var_a1_24;
                                    var_a1_24 += 2;
                                    var_a0_6 -= 1;
                                    *var_a2_6 = temp_v0_55;
                                    var_a2_6 += 2;
                                    if (var_a0_6 != 0) {
                                        goto loop_333;
                                    }
                                    var_a3_6 -= 1;
                                    var_t0_5 = &var_t0_5[B_006710];
                                    var_v1_12 = &var_v1_12[B_006710];
                                } while (var_a3_6 != 0);
                                temp_v1_27 = B_006690.unk_08;
                                B_006690.unk_08 = temp_v1_27 + 1;
                                *temp_v1_27 = 0x80;
                                temp_v1_28 = B_006690.unk_08;
                                B_006690.unk_08 = temp_v1_28 + 1;
                                *temp_v1_28 = 0x80;
                                temp_v1_29 = B_006690.unk_10;
                                B_006690.unk_0C = B_006690.unk_0C + 2;
                                B_006690.unk_10 = temp_v1_29 + 1;
                                *temp_v1_29 = 0x80;
                                temp_v1_30 = B_006690.unk_10;
                                B_006690.unk_10 = temp_v1_30 + 1;
                                *temp_v1_30 = 0x80;
                                temp_v1_31 = B_0066D0.unk_08;
                                B_006690.unk_14 = B_006690.unk_14 + 2;
                                B_0066D0.unk_08 = temp_v1_31 + 1;
                                *temp_v1_31 = 0x80;
                                temp_v1_32 = B_0066F0.unk_08;
                                B_0066D0.unk_0C = B_0066D0.unk_0C + 1;
                                B_0066F0.unk_08 = temp_v1_32 + 1;
                                *temp_v1_32 = 0x80;
                                B_0066F0.unk_0C = B_0066F0.unk_0C + 1;
                                if (B_00671C == 0) {
                                    temp_v1_33 = B_0066D0.unk_10;
                                    B_0066D0.unk_10 = temp_v1_33 + 1;
                                    *temp_v1_33 = 0x80;
                                    temp_v1_34 = B_0066F0.unk_10;
                                    B_0066D0.unk_14 = B_0066D0.unk_14 + 1;
                                    B_0066F0.unk_10 = temp_v1_34 + 1;
                                    *temp_v1_34 = 0x80;
                                    B_0066F0.unk_14 = B_0066F0.unk_14 + 1;
                                }
                            } else {
                                if (temp_a0_6 == 0) {
                                    temp_v0_56 = B_003D64.unk_8;
                                    B_003D64.unk_8 = temp_v0_56 + 4;
                                    B_003D64.unk_0 = 0x80000000;
                                    B_003D64.unk_4 = *temp_v0_56;
                                }
                                B_003D64.unk_0 = (u32) B_003D64.unk_0 >> 1;
                                if (!(B_003D64.unk_4 & B_003D64.unk_0)) {
                                    temp_v0_57 = func_000004A8(&sp10, &B_003D80, &B_003D98);
                                    temp_a1 = B_006690.unk_08;
                                    B_006690.unk_08 = temp_a1 + 1;
                                    *temp_a1 = (u8) temp_v0_57;
                                    temp_a3 = B_006690.unk_0C;
                                    temp_s0 = var_s3_5 + func_000002F8(&B_003DD8);
                                    B_006690.unk_0C = temp_a3 + 1;
                                    *temp_a3 = temp_s0;
                                    temp_v0_58 = func_000004A8(&sp10, &B_003D80, &B_003D98);
                                    temp_a1_2 = B_006690.unk_08;
                                    B_006690.unk_08 = temp_a1_2 + 1;
                                    *temp_a1_2 = (u8) temp_v0_58;
                                    temp_a3_2 = B_006690.unk_0C;
                                    temp_s0_2 = temp_s0 + func_000002F8(&B_003DD8);
                                    B_006690.unk_0C = temp_a3_2 + 1;
                                    *temp_a3_2 = temp_s0_2;
                                    temp_v0_59 = func_000004A8(&sp10, &B_003D80, &B_003D98);
                                    temp_a1_3 = B_006690.unk_10;
                                    B_006690.unk_10 = temp_a1_3 + 1;
                                    *temp_a1_3 = (u8) temp_v0_59;
                                    temp_a3_3 = B_006690.unk_14;
                                    temp_s0_3 = temp_s0_2 + func_000002F8(&B_003DD8);
                                    B_006690.unk_14 = temp_a3_3 + 1;
                                    *temp_a3_3 = temp_s0_3;
                                    temp_v0_60 = func_000004A8(&sp10, &B_003D80, &B_003D98);
                                    temp_a1_4 = B_006690.unk_10;
                                    B_006690.unk_10 = temp_a1_4 + 1;
                                    *temp_a1_4 = (u8) temp_v0_60;
                                    temp_s0_4 = temp_s0_3 + func_000002F8(&B_003DD8);
                                    var_s3_5 = temp_s0_4;
                                    temp_v1_35 = B_006690.unk_14;
                                    B_006690.unk_14 = temp_v1_35 + 1;
                                    *temp_v1_35 = temp_s0_4;
                                    temp_v1_36 = B_0066D0.unk_08;
                                    temp_s0_5 = func_000004A8(&sp11, &B_003D8C, &B_003DA4);
                                    B_0066D0.unk_08 = temp_v1_36 + 1;
                                    *temp_v1_36 = temp_s0_5 & 0xF;
                                    temp_a0_7 = B_0066D0.unk_0C;
                                    temp_s2_5 = var_s4 + func_000002F8(&B_003DE4);
                                    B_0066D0.unk_0C = temp_a0_7 + 1;
                                    *temp_a0_7 = temp_s2_5;
                                    temp_v1_37 = B_0066F0.unk_08;
                                    B_0066F0.unk_08 = temp_v1_37 + 1;
                                    *temp_v1_37 = (u8) ((u32) (temp_s0_5 & 0xFF) >> 4);
                                    temp_a0_8 = B_0066F0.unk_0C;
                                    temp_s1 = var_s5 + func_000002F8(&B_003DF0);
                                    B_0066F0.unk_0C = temp_a0_8 + 1;
                                    *temp_a0_8 = temp_s1;
                                    var_s4 = temp_s2_5;
                                    var_s5 = temp_s1;
                                    if (B_00671C == 0) {
                                        temp_v1_38 = B_0066D0.unk_10;
                                        temp_s0_6 = func_000004A8(&sp11, &B_003D8C, &B_003DA4);
                                        B_0066D0.unk_10 = temp_v1_38 + 1;
                                        *temp_v1_38 = temp_s0_6 & 0xF;
                                        temp_a0_9 = B_0066D0.unk_14;
                                        temp_v0_61 = temp_s2_5 + func_000002F8(&B_003DE4);
                                        B_0066D0.unk_14 = temp_a0_9 + 1;
                                        *temp_a0_9 = temp_v0_61;
                                        temp_v1_39 = B_0066F0.unk_10;
                                        var_s4 = temp_v0_61;
                                        B_0066F0.unk_10 = temp_v1_39 + 1;
                                        *temp_v1_39 = (u8) ((u32) (temp_s0_6 & 0xFF) >> 4);
                                        temp_a0_10 = B_0066F0.unk_14;
                                        temp_v0_62 = temp_s1 + func_000002F8(&B_003DF0);
                                        var_s5 = temp_v0_62;
                                        B_0066F0.unk_14 = temp_a0_10 + 1;
                                        *temp_a0_10 = temp_v0_62;
                                    }
                                } else {
                                    var_s3_5 += func_000002F8(&B_003DD8);
                                    var_s4 += func_000002F8(&B_003DE4);
                                    temp_v0_63 = func_000002F8(&B_003DF0);
                                    temp_a0_11 = B_006690.unk_08;
                                    B_006690.unk_08 = temp_a0_11 + 1;
                                    *temp_a0_11 = 0;
                                    temp_a0_12 = B_006690.unk_0C;
                                    B_006690.unk_0C = temp_a0_12 + 1;
                                    *temp_a0_12 = var_s3_5;
                                    temp_a0_13 = B_006690.unk_08;
                                    B_006690.unk_08 = temp_a0_13 + 1;
                                    *temp_a0_13 = 0;
                                    temp_a0_14 = B_006690.unk_0C;
                                    B_006690.unk_0C = temp_a0_14 + 1;
                                    *temp_a0_14 = var_s3_5;
                                    temp_a0_15 = B_006690.unk_10;
                                    B_006690.unk_10 = temp_a0_15 + 1;
                                    *temp_a0_15 = 0;
                                    temp_a0_16 = B_006690.unk_14;
                                    B_006690.unk_14 = temp_a0_16 + 1;
                                    *temp_a0_16 = var_s3_5;
                                    temp_a0_17 = B_006690.unk_10;
                                    B_006690.unk_10 = temp_a0_17 + 1;
                                    *temp_a0_17 = 0;
                                    temp_a0_18 = B_006690.unk_14;
                                    B_006690.unk_14 = temp_a0_18 + 1;
                                    *temp_a0_18 = var_s3_5;
                                    temp_a0_19 = B_0066D0.unk_08;
                                    B_0066D0.unk_08 = temp_a0_19 + 1;
                                    *temp_a0_19 = 0;
                                    temp_a0_20 = B_0066D0.unk_0C;
                                    B_0066D0.unk_0C = temp_a0_20 + 1;
                                    *temp_a0_20 = var_s4;
                                    temp_a0_21 = B_0066F0.unk_08;
                                    B_0066F0.unk_08 = temp_a0_21 + 1;
                                    *temp_a0_21 = 0;
                                    temp_v1_40 = B_0066F0.unk_0C;
                                    var_s5 += temp_v0_63;
                                    B_0066F0.unk_0C = temp_v1_40 + 1;
                                    *temp_v1_40 = var_s5;
                                    if (B_00671C == 0) {
                                        temp_v1_41 = B_0066D0.unk_10;
                                        B_0066D0.unk_10 = temp_v1_41 + 1;
                                        *temp_v1_41 = 0;
                                        temp_v1_42 = B_0066D0.unk_14;
                                        B_0066D0.unk_14 = temp_v1_42 + 1;
                                        *temp_v1_42 = var_s4;
                                        temp_v1_43 = B_0066F0.unk_10;
                                        B_0066F0.unk_10 = temp_v1_43 + 1;
                                        *temp_v1_43 = 0;
                                        temp_v1_44 = B_0066F0.unk_14;
                                        B_0066F0.unk_14 = temp_v1_44 + 1;
                                        *temp_v1_44 = var_s5;
                                    }
                                }
                            }
                            var_s6 += 8;
                            var_fp_3 += 0x10;
                        } while (var_s6 < B_006724);
                    }
                    B_006690.unk_08 = &B_006690.unk_08[B_00672C];
                    B_006690.unk_0C = &B_006690.unk_0C[B_00672C];
                    B_006690.unk_10 = &B_006690.unk_10[B_00672C];
                    B_006690.unk_14 = &B_006690.unk_14[B_00672C];
                    if (B_00671C == 0) {
                        B_0066D0.unk_08 = &B_0066D0.unk_08[B_006738];
                        B_0066D0.unk_0C = &B_0066D0.unk_0C[B_006738];
                        B_0066F0.unk_08 = &B_0066F0.unk_08[B_006738];
                        B_0066F0.unk_0C = &B_0066F0.unk_0C[B_006738];
                        B_0066D0.unk_10 = &B_0066D0.unk_10[B_006738];
                        B_0066D0.unk_14 = &B_0066D0.unk_14[B_006738];
                        B_0066F0.unk_10 = &B_0066F0.unk_10[B_006738];
                        B_0066F0.unk_14 = &B_0066F0.unk_14[B_006738];
                    }
                    temp_t6_2 = sp7C + 8;
                    sp7C = temp_t6_2;
                    sp64 = &sp64[B_006720];
                } while (temp_t6_2 < B_006728);
            }
            goto block_348;
        default:
            return 1U;
    }
}
#else
INCLUDE_ASM("asm/functions/hvqm2decSP1", hvqm2DecodeSP1);
#endif

u32 hvqm2SetupSP1(HVQM2Header *header, u32 outbufWidth) {
    s32 i;
    s8 var_a2_2;
    u16 *var_a0;
    u16 *var_a1;
    s32 temp_t0_2;

    B_006710 = outbufWidth;
    B_006724 = header->width;
    B_006728 = header->height;

    if (outbufWidth == 0) {
        B_006710 = B_006724;
    }

    B_006714 = header->h_sampling_rate;
    B_006718 = header->v_sampling_rate;

    B_00671C = header->v_sampling_rate == 2;

    B_00672C = B_006724 >> 2;
    B_006730 = B_006728 >> 2;

    B_006738 = B_006724 >> 3;


    B_006734 = B_00672C * B_006730;

    B_00673C = B_006728 >> (B_00671C ? 3 : 2);

    B_006720 = B_006710 * 8;
    B_006740 = B_006738 * B_00673C;

    B_006750 = header->y_shiftnum;
    B_006750 = header->y_shiftnum;
    if (B_006750 == 8) {
        B_006748 = 0x46;
        B_00674C = 0x26;
    } else {
        B_006748 = 0x26;
        B_00674C = 0x46;
    }

    i = 0;
    var_a2_2 = 0;

    var_a1 = B_003E30.unk_002;
    var_a0 = B_005660.unk_002;

    temp_t0_2 = header->video_quantize_shift;
    B_006674 = 0x0000007F << temp_t0_2;
    B_006676 = 0xFFFFFF80 << temp_t0_2;

    while (i < 0x100) {
        *var_a0 = var_a2_2 << 3;
        *var_a1 = var_a2_2 << temp_t0_2;
        var_a1 += 1;
        var_a0 += 1;
        var_a2_2 += 1;
        i += 1;
    }

    return header->total_frames;
}

void hvqm2InitSP1(u8 alpha) {
    B_006751 = alpha;
}
