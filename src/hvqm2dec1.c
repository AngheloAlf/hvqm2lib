#include "hvqm/hvqm2dec.h"
#include "hvqm/HVQM2File.h"
#include "hvqm/HVQmd.h"
#include "include_asm.h"
#include "custom_macros.h"

#define UNK_SIZE 1

typedef void* UNK_PTR;


#define B_009AC0_LEN 0x300


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
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ u8 *unk_0C;
    /* 0x10 */ u8 *unk_10;
    /* 0x14 */ u8 *unk_14;
    /* 0x18 */ u8 unk_18;
    /* 0x18 */ u8 unk_19;
    /* 0x18 */ u8 unk_1A;
    /* 0x18 */ u8 unk_1B;
    /* 0x1C */ u8 unk_1C;
} struct_009240; // size = 0x1D

// TODO: same struct as struct_009240?
typedef struct struct_009260 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
} struct_009260; // size >= 0x18


// extern u8 B_005EB0[];
// STATIC u8 B_005EB0[];
/* .space 0xA64 */

// extern u8 B_006914[];
// STATIC u8 B_006914[];
/* .space 0x04 */

// extern u8 B_006918[];
// STATIC u8 B_006918[];
/* .space 0x04 */

// extern u8 B_00691C[];
// STATIC u8 B_00691C[];
/* .space 0x04 */

// extern u8 B_006920[];
// STATIC u8 B_006920[];
/* .space 0x04 */

// extern u8 B_006924[];
// STATIC u8 B_006924[];
/* .space 0x04 */

// extern u8 B_006928[];
// STATIC u8 B_006928[];
/* .space 0x08 */

extern struct_00000040_arg0 B_006930;
// STATIC struct_00000040_arg0 B_006930;
/* .space 0x0C */

extern struct_00000040_arg0 B_00693C;
// STATIC struct_00000040_arg0 B_00693C;
/* .space 0x0C */

extern struct_00000040_arg0 B_006948;
// STATIC struct_00000040_arg0 B_006948;
/* .space 0x0C */

extern struct_00000040_arg0 B_006954;
// STATIC struct_00000040_arg0 B_006954;
/* .space 0x0C */

extern struct_00000040_arg0 B_006960[3];
// STATIC struct_00000040_arg0 B_006960[3];
/* .space 0x24 */

// extern u8 B_006988[];
// STATIC u8 B_006988[];
/* .space 0x08 */

// extern u8 B_006990[];
// STATIC u8 B_006990[];
/* .space 0x04 */

// extern u8 B_006994[];
// STATIC u8 B_006994[];
/* .space 0x08 */

// extern u8 B_00699C[];
// STATIC u8 B_00699C[];
/* .space 0x04 */

// extern u8 B_0069A0[];
// STATIC u8 B_0069A0[];
/* .space 0x08 */

// extern u8 B_0069A8[];
// STATIC u8 B_0069A8[];
/* .space 0x08 */

extern struct_00000040_arg0 B_0069B0[3];
// STATIC struct_00000040_arg0 B_0069B0[3];
/* .space 0x24 */

extern UNK_PTR B_0069D4[3];
// STATIC UNK_PTR B_0069D4[3];
/* .space 0x0C */

extern struct_00000040_arg1 B_0069E0;
// STATIC struct_00000040_arg1 B_0069E0;
/* .space 0x802 */

/* Automatically generated pad */
// extern u8 B_0071E2[];
// STATIC u8 B_0071E2[];
/* .space 0x0E */

extern struct_00000040_arg1 B_0071F0;
// STATIC struct_00000040_arg1 B_0071F0;
/* .space 0x802 */

/* Automatically generated pad */
// extern u8 B_0079F2[];
// STATIC u8 B_0079F2[];
/* .space 0x0E */

extern struct_00000040_arg1 B_007A00;
// STATIC struct_00000040_arg1 B_007A00;
/* .space 0x802 */

/* Automatically generated pad */
// extern u8 B_008202[];
// STATIC u8 B_008202[];
/* .space 0x0E */

extern struct_00000040_arg1 B_008210;
// STATIC struct_00000040_arg1 B_008210;
/* .space 0x802 */

/* Automatically generated pad */
// extern u8 B_008A12[];
// STATIC u8 B_008A12[];
/* .space 0x0E */

extern struct_00000040_arg1 B_008A20;
// STATIC struct_00000040_arg1 B_008A20;
/* .space 0x802 */

extern u16 B_009222;
// STATIC u16 B_009222;
/* .space 0x02 */

extern s16 B_009224;
// STATIC s16 B_009224;
/* .space 0x02 */

extern s16 B_009226;
// STATIC s16 B_009226;
/* .space 0x02 */

// extern u8 B_009228[];
// STATIC u8 B_009228[];
/* .space 0x04 */

// extern u8 B_00922C[];
// STATIC u8 B_00922C[];
/* .space 0x04 */

// extern u8 B_009230[];
// STATIC u8 B_009230[];
/* .space 0x04 */

// extern u8 B_009234[];
// STATIC u8 B_009234[];
/* .space 0x04 */

// extern u8 B_009238[];
// STATIC u8 B_009238[];
/* .space 0x04 */

// extern u8 B_00923C[];
// STATIC u8 B_00923C[];
/* .space 0x04 */

extern struct_009240 B_009240;
// STATIC struct_009240 B_009240;
/* .space 0x1D */

extern struct_009260 B_009260;
// STATIC struct_009260 B_009260;
/* .space 0x18 */

// extern u8 B_009278[];
// STATIC u8 B_009278[];
/* .space 0x01 */

// extern u8 B_009279[];
// STATIC u8 B_009279[];
/* .space 0x01 */

// extern u8 B_00927A[];
// STATIC u8 B_00927A[];
/* .space 0x01 */

// extern u8 B_00927B[];
// STATIC u8 B_00927B[];
/* .space 0x01 */

// extern u8 B_00927C[];
// STATIC u8 B_00927C[];
/* .space 0x04 */

// extern u8 B_009280[];
// STATIC u8 B_009280[];
/* .space 0x04 */

// extern u8 B_009284[];
// STATIC u8 B_009284[];
/* .space 0x04 */

// extern u8 B_009288[];
// STATIC u8 B_009288[];
/* .space 0x04 */

// extern u8 B_00928C[];
// STATIC u8 B_00928C[];
/* .space 0x04 */

// extern u8 B_009290[];
// STATIC u8 B_009290[];
/* .space 0x04 */

// extern u8 B_009294[];
// STATIC u8 B_009294[];
/* .space 0x04 */

// extern u8 B_009298[];
// STATIC u8 B_009298[];
/* .space 0x01 */

// extern u8 B_009299[];
// STATIC u8 B_009299[];
/* .space 0x01 */

// extern u8 B_00929A[];
// STATIC u8 B_00929A[];
/* .space 0x01 */

// extern u8 B_00929B[];
// STATIC u8 B_00929B[];
/* .space 0x01 */

// extern u8 B_00929C[];
// STATIC u8 B_00929C[];
/* .space 0x04 */

// extern u8 B_0092A0[];
// STATIC u8 B_0092A0[];
/* .space 0x04 */

// extern u8 B_0092A4[];
// STATIC u8 B_0092A4[];
/* .space 0x04 */

// extern u8 B_0092A8[];
// STATIC u8 B_0092A8[];
/* .space 0x04 */

// extern u8 B_0092AC[];
// STATIC u8 B_0092AC[];
/* .space 0x04 */

// extern u8 B_0092B0[];
// STATIC u8 B_0092B0[];
/* .space 0x04 */

// extern u8 B_0092B4[];
// STATIC u8 B_0092B4[];
/* .space 0x04 */

// extern u8 B_0092B8[];
// STATIC u8 B_0092B8[];
/* .space 0x01 */

// extern u8 B_0092B9[];
// STATIC u8 B_0092B9[];
/* .space 0x01 */

// extern u8 B_0092BA[];
// STATIC u8 B_0092BA[];
/* .space 0x01 */

// extern u8 B_0092BB[];
// STATIC u8 B_0092BB[];
/* .space 0x01 */

// extern u8 B_0092BC[];
// STATIC u8 B_0092BC[];
/* .space 0x04 */

extern s32 B_0092C0[0x200];
// STATIC s32 B_0092C0[0x200];
/* .space 0x800 */

extern u8 B_009AC0[B_009AC0_LEN];
// STATIC u8 B_009AC0[];
/* .space 0x300 */

extern u8 B_009DC0[B_009AC0_LEN];
// STATIC u8 B_009DC0[];
/* .space 0x300 */

// extern u8 B_00A0C0[];
// STATIC u8 B_00A0C0[];
/* .space 0x04 */

// extern u8 B_00A0C4[];
// STATIC u8 B_00A0C4[];
/* .space 0x04 */

// extern u8 B_00A0C8[];
// STATIC u8 B_00A0C8[];
/* .space 0x04 */

// extern u8 B_00A0CC[];
// STATIC u8 B_00A0CC[];
/* .space 0x04 */

// extern u8 B_00A0D0[];
// STATIC u8 B_00A0D0[];
/* .space 0x04 */

// extern u8 B_00A0D4[];
// STATIC u8 B_00A0D4[];
/* .space 0x04 */

// extern u8 B_00A0D8[];
// STATIC u8 B_00A0D8[];
/* .space 0x04 */

// extern u8 B_00A0DC[];
// STATIC u8 B_00A0DC[];
/* .space 0x04 */

// extern u8 B_00A0E0[];
// STATIC u8 B_00A0E0[];
/* .space 0x04 */

// extern u8 B_00A0E4[];
// STATIC u8 B_00A0E4[];
/* .space 0x04 */

// extern u8 B_00A0E8[];
// STATIC u8 B_00A0E8[];
/* .space 0x04 */

// extern u8 B_00A0EC[];
// STATIC u8 B_00A0EC[];
/* .space 0x04 */

// extern u8 B_00A0F0[];
// STATIC u8 B_00A0F0[];
/* .space 0x04 */

// extern u8 B_00A0F4[];
// STATIC u8 B_00A0F4[];
/* .space 0x04 */

// extern u8 B_00A0F8[];
// STATIC u8 B_00A0F8[];
/* .space 0x04 */

// extern u8 B_00A0FC[];
// STATIC u8 B_00A0FC[];
/* .space 0x04 */

extern u8 *B_00A100;
// STATIC u8 *B_00A100;
/* .space 0x04 */

extern s32 B_00A104;
// STATIC s32 B_00A104;
/* .space 0x04 */

// extern u8 B_00A108[];
// STATIC u8 B_00A108[];
/* .space 0x04 */

extern u8 B_00A10C;
// STATIC u8 B_00A10C;
/* .space 0x04 */

// extern u8 B_00A110[];
// STATIC u8 B_00A110[];
/* .space 0x80 */

// extern u8 B_00A190[];
// STATIC u8 B_00A190[];
/* .space 0x20 */

// extern u8 B_00A1B0[];
// STATIC u8 B_00A1B0[];
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
    return B_009222++;
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
    s16 temp_v1 = inlined_func_03(arg0, &B_0069E0);
    s16 var_t0 = temp_v1;

    if ((temp_v1 == B_009226) || (temp_v1 == B_009224)) {
        do {
            temp_v1 = inlined_func_03(arg0, &B_0069E0);
            var_t0 += temp_v1;
        } while ((B_009226 >= temp_v1) || (temp_v1 >= B_009224));
    }

    return var_t0;
}

s32 func_000004A8(u8 *arg0, struct_00000040_arg0 *arg1, struct_00000040_arg0 *arg2) {
    u8 var_v0;

    if (*arg0 == 0) {
        var_v0 = inlined_func_02(arg1, &B_0071F0);

        if (var_v0 != 0) {
            return var_v0;
        }
        *arg0 = inlined_func_02(arg2, &B_007A00);
    } else {
        *arg0 -= 1;
    }
    return 0;
}

#if 0
STATIC_INLINE void inlined_func_04(u16 *arg0, u8 temp_t9, u8 var_t2, u8 var_t7, u8 var_a1, u8 temp_a3) {
    u32 temp_t5;
    u32 temp_v1_3;

    u32 temp_s2;
    u32 temp_t3;
    u32 temp_t1;
    u32 temp_v0_3;

    u32 temp_a0;
    u32 temp_v0_2;
    u32 temp_s3;
    u32 temp_t4;
    u32 temp_a0_2;
    u32 temp_a1_2;
    u32 temp_a3_2;
    u32 temp_t2;

    temp_t5 = temp_t9 * 2;

    temp_v1_3 = (temp_t9 * 8) + 4;

    temp_s2 = (var_t2 + var_t7) - temp_t5;
    temp_t3 = (var_a1 + var_t7) - temp_t5;
    temp_t1 = (var_a1 + temp_a3) - temp_t5;
    temp_v0_3 = (temp_a3 + var_t2) - temp_t5;

    temp_a0 = var_a1 - var_t2;
    temp_v0_2 = temp_a3 - var_t7;
    temp_s3 = temp_a0 + temp_v0_2;
    temp_t4 = var_a1 - temp_a3;
    temp_a0_2 = temp_a0 - temp_v0_2;
    temp_a1_2 = var_a1 - var_t7;
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
}
#endif

#ifdef NON_EQUIVALENT
STATIC_INLINE s16 inlined_func_05(s16 *sp0, s32 temp, s16 var_a1_2) {
    s16 var_v1_2;

    *sp0 -= temp;
    var_v1_2 = sp0[12];
    if (var_v1_2 < 0) {
        var_v1_2 = -var_v1_2;
    }
    if (var_a1_2 < var_v1_2) {
        var_a1_2 = var_v1_2;
    }

    return var_a1_2;
}

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
    s32 temp_lo_2;
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
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u16 *temp_a1_10;
    u16 *temp_a1_11;
    u16 *temp_a1_12;
    u16 *temp_a1_13;
    u16 *temp_a1_14;
    u16 *temp_a1_15;
    u16 *temp_a1_16;
    u16 *temp_a1_22;
    u16 *temp_a1_23;
    u16 *temp_a1_24;
    u16 *temp_a1_25;
    u16 *temp_a1_26;
    u16 *temp_a1_27;
    u16 *temp_a1_28;
    u16 *temp_a1_29;
    u16 *temp_a1_30;
    u16 *temp_a1_31;
    u16 *temp_a1_32;
    u16 *temp_a1_33;
    u16 *temp_a1_34;
    u16 *temp_a1_35;
    u16 *temp_a1_36;
    u16 *temp_a1_3;
    u16 *temp_a1_4;
    u16 *temp_a1_5;
    u16 *temp_a1_6;
    u16 *temp_a1_7;
    u16 *temp_a1_8;
    u16 *temp_a1_9;
    u16 *temp_t1_10;
    u16 *temp_t1_11;
    u16 *temp_t1_12;
    u16 *temp_t1_13;
    u16 *temp_t1_14;
    u16 *temp_t1_15;
    u16 *temp_t1_16;
    u16 *temp_t1_2;
    u16 *temp_t1_3;
    u16 *temp_t1_4;
    u16 *temp_t1_5;
    u16 *temp_t1_6;
    u16 *temp_t1_7;
    u16 *temp_t1_8;
    u16 *temp_t1_9;
    u16 *temp_t5_10;
    u16 *temp_t5_11;
    u16 *temp_t5_12;
    u16 *temp_t5_13;
    u16 *temp_t5_14;
    u16 *temp_t5_15;
    u16 *temp_t5_2;
    u16 *temp_t5_3;
    u16 *temp_t5_4;
    u16 *temp_t5_5;
    u16 *temp_t5_6;
    u16 *temp_t5_7;
    u16 *temp_t5_8;
    u16 *temp_t5_9;
    u16 *temp_v0_21;
    u16 temp_t6;
    s16 var_a2;
    u32 temp_a0_4;
    u32 temp_a0_5;
    u8 **temp_v1_5;
    u8 *temp_t0_2;
    u8 *temp_t2_2;
    u8 *temp_v0_4;
    u8 temp_a1_18;
    u8 temp_a3;
    u8 temp_t9;
    u8 temp_v0;
    u8 temp_v1_7;
    u8 var_a1;
    u8 var_t7;

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

        temp_a3 = arg1->unk_1C;

        temp_t5 = temp_t9 * 2;

        temp_v1_3 = (temp_t9 * 8) + 4;

        temp_s2 = (var_t2 + var_t7) - temp_t5;
        temp_t3 = (var_a1 + var_t7) - temp_t5;
        temp_t1 = (var_a1 + temp_a3) - temp_t5;
        temp_v0_3 = (temp_a3 + var_t2) - temp_t5;

        temp_a0 = var_a1 - var_t2;
        temp_v0_2 = temp_a3 - var_t7;
        temp_s3 = temp_a0 + temp_v0_2;
        temp_t4 = var_a1 - temp_a3;
        temp_a0_2 = temp_a0 - temp_v0_2;
        temp_a1_2 = var_a1 - var_t7;
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
            temp_v0_4 = B_0069D4[arg2];
            B_0069D4[arg2] += 0x10;

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
                s32 i;
                s32 j;

                sp20 = inlined_func_03(&B_006960[arg2], &B_008210);

                temp_v0_21 = B_0069D4[arg2];
                temp_t6 = *temp_v0_21;
                B_0069D4[arg2] = temp_v0_21 + 2;
                temp_t4_2 = (temp_t6 & 1) + 1;
                temp_a0_5 = temp_t6 & 0xFFFF;

                if (B_00A10C == 8) {
                    var_v1 = (temp_a0_5 >> 8) & 0x1F;
                    var_v0_2 = (temp_a0_5 >> 2) & 0x3F;
                } else {
                    var_v1 = (temp_a0_5 >> 7) & 0x3F;
                    var_v0_2 = (temp_a0_5 >> 2) & 0x1F;
                }

                temp_t2_2 = &B_00A100[var_v0_2 + var_v1 * B_00A104];
                temp_lo = (((temp_a0_5 >> 1) & 1) + 1) * B_00A104;

                #if 1
                sp0[0] = temp_t2_2[0];
                sp0[1] = temp_t2_2[temp_t4_2];
                sp0[2] = temp_t2_2[temp_t4_2 + temp_t4_2];
                sp0[3] = temp_t2_2[temp_t4_2 + temp_t4_2 + temp_t4_2];
                sp0[4] = temp_t2_2[temp_lo];
                sp0[5] = temp_t2_2[temp_lo + temp_t4_2];
                sp0[6] = temp_t2_2[temp_lo + temp_t4_2 + temp_t4_2];
                sp0[7] = temp_t2_2[temp_lo + temp_t4_2 + temp_t4_2 + temp_t4_2];
                sp0[8] = temp_t2_2[temp_lo + temp_lo];
                sp0[9] = temp_t2_2[temp_lo + temp_lo + temp_t4_2];
                sp0[10] = temp_t2_2[temp_lo + temp_lo + temp_t4_2 + temp_t4_2];
                sp0[11] = temp_t2_2[temp_lo + temp_lo + temp_t4_2 + temp_t4_2 + temp_t4_2];
                sp0[12] = temp_t2_2[temp_lo + temp_lo + temp_lo];
                sp0[13] = temp_t2_2[temp_lo + temp_lo + temp_lo + temp_t4_2];
                sp0[14] = temp_t2_2[temp_lo + temp_lo + temp_lo + temp_t4_2 + temp_t4_2];
                sp0[15] = temp_t2_2[temp_lo + temp_lo + temp_lo + temp_t4_2 + temp_t4_2 + temp_t4_2];
                temp_t3_2 = temp_t2_2[temp_lo + temp_lo + temp_lo + temp_t4_2 + temp_t4_2 + temp_t4_2] + (temp_t2_2[temp_lo + temp_lo + temp_lo + temp_t4_2 + temp_t4_2] + (temp_t2_2[temp_lo + temp_lo + temp_lo + temp_t4_2] + (temp_t2_2[temp_lo + temp_lo + temp_lo] + (temp_t2_2[temp_lo + temp_lo + temp_t4_2 + temp_t4_2 + temp_t4_2] + (temp_t2_2[temp_lo + temp_lo + temp_t4_2 + temp_t4_2] + (temp_t2_2[temp_lo + temp_lo + temp_t4_2] + (temp_t2_2[temp_lo + temp_lo] + (temp_t2_2[temp_lo + temp_t4_2 + temp_t4_2 + temp_t4_2] + (temp_t2_2[temp_lo + temp_t4_2 + temp_t4_2] + (temp_t2_2[temp_lo + temp_t4_2] + (temp_t2_2[temp_lo] + (temp_t2_2[temp_t4_2 + temp_t4_2 + temp_t4_2] + (temp_v1_7 + (temp_t2_2[temp_t4_2] + temp_a1_18))))))))))))));
                #else
                for (i = 0; i < 4; i++) {
                    for (j = 0; j < 4; j++) {
                        s32 temp = temp_t2_2[i * temp_lo + j * temp_t4_2];
                        sp0[i*4 + j] = temp;
                        temp_t3_2 += temp;
                    }
                }
                #endif

                temp = (temp_t3_2 + 8) / 16;

                sp0[0] = sp0[0] - temp;
                var_v1_2 = sp0[0];
                if (var_v1_2 < 0) {
                    var_v1_2 = -var_v1_2;
                }
                var_a1_2 = var_v1_2;

                #if 1
                sp0[1] = sp0[1] - temp;
                var_v1_2 = sp0[1];
                if (var_v1_2 < 0) {
                    var_v1_2 = -var_v1_2;
                }
                if (var_a1_2 < var_v1_2) {
                    var_a1_2 = var_v1_2;
                }

                sp0[2] = sp0[2] - temp;
                var_v1_2 = (s16) sp0[2];
                if (var_v1_2 < 0) {
                    var_v1_2 = -var_v1_2;
                }
                if (var_a1_2 < var_v1_2) {
                    var_a1_2 = var_v1_2;
                }

                sp0[3] = sp0[3] - temp;
                var_v1_2 = (s16) sp0[3];
                if (var_v1_2 < 0) {
                    var_v1_2 = -var_v1_2;
                }
                if (var_a1_2 < var_v1_2) {
                    var_a1_2 = var_v1_2;
                }

                sp0[4] = sp0[4] - temp;
                var_v1_2 = (s16) sp0[4];
                if (var_v1_2 < 0) {
                    var_v1_2 = -var_v1_2;
                }
                if (var_a1_2 < var_v1_2) {
                    var_a1_2 = var_v1_2;
                }

                sp0[5] = sp0[5] - temp;
                var_v1_2 = (s16) sp0[5];
                if (var_v1_2 < 0) {
                    var_v1_2 = -var_v1_2;
                }
                if (var_a1_2 < var_v1_2) {
                    var_a1_2 = var_v1_2;
                }

                sp0[6] = sp0[6] - temp;
                var_v1_2 = (s16) sp0[6];
                if (var_v1_2 < 0) {
                    var_v1_2 = -var_v1_2;
                }
                if (var_a1_2 < var_v1_2) {
                    var_a1_2 = var_v1_2;
                }

                sp0[7] = sp0[7] - temp;
                var_v1_2 = (s16) sp0[7];
                if (var_v1_2 < 0) {
                    var_v1_2 = -var_v1_2;
                }
                if (var_a1_2 < var_v1_2) {
                    var_a1_2 = var_v1_2;
                }

                sp0[8] = sp0[8] - temp;
                var_v1_2 = (s16) sp0[8];
                if (var_v1_2 < 0) {
                    var_v1_2 = -var_v1_2;
                }
                if (var_a1_2 < var_v1_2) {
                    var_a1_2 = var_v1_2;
                }

                sp0[9] = sp0[9] - temp;
                var_v1_2 = sp0[9];
                if (var_v1_2 < 0) {
                    var_v1_2 = -var_v1_2;
                }
                if (var_a1_2 < var_v1_2) {
                    var_a1_2 = var_v1_2;
                }

                sp0[10] = sp0[10] - temp;
                var_v1_2 = sp0[10];
                if (var_v1_2 < 0) {
                    var_v1_2 = -var_v1_2;
                }
                if (var_a1_2 < var_v1_2) {
                    var_a1_2 = var_v1_2;
                }

                sp0[11] = sp0[11] - temp;
                var_v1_2 = (s16) sp0[11];
                if (var_v1_2 < 0) {
                    var_v1_2 = -var_v1_2;
                }
                if (var_a1_2 < var_v1_2) {
                    var_a1_2 = var_v1_2;
                }

                sp0[12] = sp0[12] - temp;
                var_v1_2 = (s16) sp0[12];
                if (var_v1_2 < 0) {
                    var_v1_2 = -var_v1_2;
                }
                if (var_a1_2 < var_v1_2) {
                    var_a1_2 = var_v1_2;
                }

                sp0[13] = sp0[13] - temp;
                var_v1_2 = (s16) sp0[13];
                if (var_v1_2 < 0) {
                    var_v1_2 = -var_v1_2;
                }
                if (var_a1_2 < var_v1_2) {
                    var_a1_2 = var_v1_2;
                }

                sp0[14] = sp0[14] - temp;
                var_v1_2 = sp0[14];
                if (var_v1_2 < 0) {
                    var_v1_2 = -var_v1_2;
                }
                if (var_a1_2 < var_v1_2) {
                    var_a1_2 = var_v1_2;
                }

                sp0[15] = sp0[15] - temp;
                var_v1_2 = sp0[15];
                if (var_v1_2 < 0) {
                    var_v1_2 = -var_v1_2;
                }
                if (var_a1_2 < var_v1_2) {
                    var_a1_2 = var_v1_2;
                }
                #else
                var_a1_2 = inlined_func_05(&sp0[1], temp, var_a1_2);
                var_a1_2 = inlined_func_05(&sp0[2], temp, var_a1_2);
                var_a1_2 = inlined_func_05(&sp0[3], temp, var_a1_2);
                var_a1_2 = inlined_func_05(&sp0[4], temp, var_a1_2);
                var_a1_2 = inlined_func_05(&sp0[5], temp, var_a1_2);
                var_a1_2 = inlined_func_05(&sp0[6], temp, var_a1_2);
                var_a1_2 = inlined_func_05(&sp0[7], temp, var_a1_2);
                var_a1_2 = inlined_func_05(&sp0[8], temp, var_a1_2);
                var_a1_2 = inlined_func_05(&sp0[9], temp, var_a1_2);
                var_a1_2 = inlined_func_05(&sp0[10], temp, var_a1_2);
                var_a1_2 = inlined_func_05(&sp0[11], temp, var_a1_2);
                var_a1_2 = inlined_func_05(&sp0[12], temp, var_a1_2);
                var_a1_2 = inlined_func_05(&sp0[13], temp, var_a1_2);
                var_a1_2 = inlined_func_05(&sp0[14], temp, var_a1_2);
                var_a1_2 = inlined_func_05(&sp0[15], temp, var_a1_2);
                #endif

                sp20 = B_0092C0[var_a1_2] * (sp20 + (temp_t6 >> 0xD));
                arg0[0] += ((sp20 * sp0[0]) + 0x200) >> 0xA;
                arg0[1] += ((sp20 * sp0[1]) + 0x200) >> 0xA;
                arg0[2] += ((sp20 * sp0[2]) + 0x200) >> 0xA;
                arg0[3] += ((sp20 * sp0[3]) + 0x200) >> 0xA;
                arg0[4] += ((sp20 * sp0[4]) + 0x200) >> 0xA;
                arg0[5] += ((sp20 * sp0[5]) + 0x200) >> 0xA;
                arg0[6] += ((sp20 * sp0[6]) + 0x200) >> 0xA;
                arg0[7] += ((sp20 * sp0[7]) + 0x200) >> 0xA;
                arg0[8] += ((sp20 * sp0[8]) + 0x200) >> 0xA;
                arg0[9] += ((sp20 * sp0[9]) + 0x200) >> 0xA;
                arg0[10] += ((sp20 * sp0[10]) + 0x200) >> 0xA;
                arg0[11] += ((sp20 * sp0[11]) + 0x200) >> 0xA;
                arg0[12] += ((sp20 * sp0[12]) + 0x200) >> 0xA;
                arg0[13] += ((sp20 * sp0[13]) + 0x200) >> 0xA;
                arg0[14] += ((sp20 * sp0[14]) + 0x200) >> 0xA;
                arg0[15] += ((sp20 * sp0[15]) + 0x200) >> 0xA;
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
INCLUDE_ASM("asm/functions/hvqm2dec1", func_0000061C);
#endif

// void func_000012E4(u16 *arg0, u16 *arg1, u16 *arg2, u16 *arg3);
INCLUDE_ASM("asm/functions/hvqm2dec1", func_000012E4);

// void func_0000187C(u16 *arg0, u16 *arg1, u16 *arg2, u16 *arg3) ;
INCLUDE_ASM("asm/functions/hvqm2dec1", func_0000187C);

#if 0
extern u8 B_009278;
extern u8 B_009279;
extern ? B_00927A;
extern u8 B_00927B;
extern u8 B_00927C;
extern s32 B_009280;
extern s32 B_009284;
extern u8 *B_009288;
extern u8 *B_00928C;
extern s32 B_009290;
extern s32 B_009294;
extern u8 B_009298;
extern u8 B_009299;
extern u8 B_00929A;
extern u8 B_00929B;
extern u8 B_00929C;
extern s32 B_0092A0;
extern s32 B_0092A4;
extern u8 *B_0092A8;
extern u8 *B_0092AC;
extern s32 B_0092B0;
extern s32 B_0092B4;
extern u8 B_0092B8;
extern u8 B_0092B9;
extern u8 B_0092BA;
extern u8 B_0092BB;
extern u8 B_0092BC;
extern ? (*B_00A0C0)(u16 *, ? *, ? *, ? *);
extern s32 B_00A0D0;
extern s32 B_00A0D8;
extern s32 B_00A0F4;
extern ? B_00A110;
extern ? B_00A190;
extern ? B_00A1B0;

void func_000029F8(u16 *arg0) {
    u16 *sp14;
    s32 temp_v1_13;
    s32 temp_v1_14;
    s32 temp_v1_15;
    s32 temp_v1_16;
    s32 var_s7;
    struct_009240 *temp_s0;
    struct_009240 *temp_s1;
    struct_009240 *temp_s2;
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

    sp14 = arg0;
    B_009298 = *B_009288;
    temp_v0 = *B_00928C;
    B_00929C = temp_v0;
    B_009299 = temp_v0;
    B_0092B8 = *B_0092A8;
    temp_v0_2 = *B_0092AC;
    B_0092BC = temp_v0_2;
    B_0092B9 = temp_v0_2;
    B_009240.unk_18 = (u8) *B_009240.unk_08;
    temp_v0_3 = *B_009240.unk_0C;
    B_009240.unk_1C = temp_v0_3;
    B_009240.unk_19 = temp_v0_3;
    if (B_00A0D8 != 0) {
        B_009278 = *B_009260.unk_08;
        temp_v0_4 = *B_009260.unk_0C;
        B_00927C = temp_v0_4;
        B_009279 = temp_v0_4;
    }
    var_s7 = B_00A0F4 - 1;
    if (var_s7 > 0) {
        temp_s2 = &B_00927A - 0x1A;
        do {
            if ((B_009240.unk_18.unk_0 & 0xFF) != 0x80) {
                temp_v1 = B_009240.unk_18.unk_-10;
                B_009240.unk_18.unk_2 = (u8) B_009240.unk_18.unk_0;
                B_009240.unk_18.unk_-10 = (void *) (temp_v1 + 1);
                temp_v1_2 = B_009240.unk_18.unk_-C;
                B_009240.unk_18.unk_3 = (u8) B_009240.unk_18.unk_1;
                B_009240.unk_18.unk_-C = (void *) (temp_v1_2 + 1);
                B_009240.unk_18.unk_0 = (u8) temp_v1->unk_1;
                B_009240.unk_18.unk_1 = (u8) temp_v1_2->unk_1;
                func_0000061C(&B_00A110, &B_009240, 0);
                temp_v1_3 = B_009240.unk_18.unk_-10;
                B_009240.unk_18.unk_2 = (u8) B_009240.unk_18.unk_0;
                B_009240.unk_18.unk_-10 = (void *) (temp_v1_3 + 1);
                temp_v1_4 = B_009240.unk_18.unk_-C;
                B_009240.unk_18.unk_3 = (u8) B_009240.unk_18.unk_1;
                B_009240.unk_18.unk_-C = (void *) (temp_v1_4 + 1);
                B_009240.unk_18.unk_0 = (u8) temp_v1_3->unk_1;
                B_009240.unk_18.unk_1 = (u8) temp_v1_4->unk_1;
                func_0000061C(&B_00A110 + 0x20, &B_009240, 0);
                if (B_00A0D8 != 0) {
                    temp_v1_5 = B_00927A.unk_-12;
                    B_00927A.unk_0 = (u8) B_00927A.unk_-2;
                    B_00927A.unk_-12 = (void *) (temp_v1_5 + 1);
                    temp_v1_6 = B_00927A.unk_-E;
                    B_00927A.unk_1 = (u8) B_00927A.unk_-1;
                    B_00927A.unk_-E = (void *) (temp_v1_6 + 1);
                    B_00927A.unk_-2 = (u8) temp_v1_5->unk_1;
                    B_00927A.unk_-1 = (u8) temp_v1_6->unk_1;
                    func_0000061C(&B_00A110 + 0x40, temp_s2, 0);
                    temp_v1_7 = B_00927A.unk_-12;
                    B_00927A.unk_0 = (u8) B_00927A.unk_-2;
                    B_00927A.unk_-12 = (void *) (temp_v1_7 + 1);
                    temp_v1_8 = B_00927A.unk_-E;
                    B_00927A.unk_1 = (u8) B_00927A.unk_-1;
                    B_00927A.unk_-E = (void *) (temp_v1_8 + 1);
                    B_00927A.unk_-2 = (u8) temp_v1_7->unk_1;
                    B_00927A.unk_-1 = (u8) temp_v1_8->unk_1;
                    func_0000061C(&B_00A110 + 0x60, temp_s2, 0);
                }
                temp_v1_9 = (&B_009298)[2].unk_-12;
                (&B_009298)[2] = (&B_009298)[2].unk_-2;
                (&B_009298)[2].unk_-12 = (s32) (temp_v1_9 + 1);
                temp_v1_10 = (&B_009298)[2].unk_-E;
                (&B_009298)[2].unk_1 = (u8) (&B_009298)[2].unk_-1;
                (&B_009298)[2].unk_-E = (s32) (temp_v1_10 + 1);
                (&B_009298)[2].unk_-2 = (u8) temp_v1_9->unk_1;
                (&B_009298)[2].unk_-1 = (u8) temp_v1_10->unk_1;
                func_0000061C(&B_00A190, &(&B_009298)[2].unk_-1A, 1);
                temp_v1_11 = (&B_0092B8)[2].unk_-12;
                (&B_0092B8)[2] = (&B_0092B8)[2].unk_-2;
                (&B_0092B8)[2].unk_-12 = (s32) (temp_v1_11 + 1);
                temp_v1_12 = (&B_0092B8)[2].unk_-E;
                (&B_0092B8)[2].unk_1 = (u8) (&B_0092B8)[2].unk_-1;
                (&B_0092B8)[2].unk_-E = (s32) (temp_v1_12 + 1);
                (&B_0092B8)[2].unk_-2 = (u8) temp_v1_11->unk_1;
                (&B_0092B8)[2].unk_-1 = (u8) temp_v1_12->unk_1;
                func_0000061C(&B_00A1B0, &(&B_0092B8)[2].unk_-1A, 2);
                B_00A0C0(sp14, &B_00A110, &B_00A190, &B_00A1B0);
            } else {
                B_009240.unk_18.unk_-10 = (void *) (B_009240.unk_18.unk_-10 + 2);
                B_009240.unk_18.unk_-14 = (s32) (B_009240.unk_18.unk_-14 + 2);
                B_009240.unk_18.unk_-C = (void *) (B_009240.unk_18.unk_-C + 2);
                B_009240.unk_18.unk_-8 = (s32) (B_009240.unk_18.unk_-8 + 2);
                B_009240.unk_18.unk_-4 = (s32) (B_009240.unk_18.unk_-4 + 2);
                B_009240.unk_18.unk_-18 = (s32) (B_009240.unk_18.unk_-18 + 2);
                B_009240.unk_18.unk_0 = (u8) *B_009240.unk_08;
                temp_v0_5 = *B_009240.unk_0C;
                B_009240.unk_18.unk_4 = temp_v0_5;
                B_009240.unk_18.unk_1 = temp_v0_5;
                if (B_00A0D8 != 0) {
                    temp_s2->unk_08 += 2;
                    temp_s2->unk_04 += 2;
                    temp_s2->unk_0C += 2;
                    temp_s2->unk_10 += 2;
                    temp_s2->unk_14 += 2;
                    temp_s2->unk_00 += 2;
                    temp_s2->unk_18 = (u8) *B_009260.unk_08;
                    temp_v0_6 = *B_009260.unk_0C;
                    temp_s2->unk_1C = temp_v0_6;
                    temp_s2->unk_19 = temp_v0_6;
                }
                (&B_009298)[-0x18].unk_8 = (s32) ((&B_009298)[-0x18].unk_8 + 1);
                (&B_009298)[-0x18].unk_4 = (s32) ((&B_009298)[-0x18].unk_4 + 1);
                (&B_009298)[-0x18].unk_C = (s32) ((&B_009298)[-0x18].unk_C + 1);
                (&B_009298)[-0x18].unk_10 = (s32) ((&B_009298)[-0x18].unk_10 + 1);
                (&B_009298)[-0x18].unk_14 = (s32) ((&B_009298)[-0x18].unk_14 + 1);
                (&B_009298)[-0x18] = (s32) ((&B_009298)[-0x18] + 1);
                (&B_009298)[-0x18].unk_18 = (u8) *B_009288;
                temp_t0 = *B_00928C;
                (&B_0092B8)[-0x18].unk_8 = (s32) ((&B_0092B8)[-0x18].unk_8 + 1);
                (&B_0092B8)[-0x18].unk_4 = (s32) ((&B_0092B8)[-0x18].unk_4 + 1);
                (&B_0092B8)[-0x18].unk_C = (s32) ((&B_0092B8)[-0x18].unk_C + 1);
                (&B_0092B8)[-0x18].unk_10 = (s32) ((&B_0092B8)[-0x18].unk_10 + 1);
                (&B_0092B8)[-0x18].unk_14 = (s32) ((&B_0092B8)[-0x18].unk_14 + 1);
                (&B_0092B8)[-0x18] = (s32) ((&B_0092B8)[-0x18] + 1);
                (&B_009298)[-0x18].unk_1C = temp_t0;
                (&B_009298)[-0x18].unk_19 = temp_t0;
                (&B_0092B8)[-0x18].unk_18 = (u8) *B_0092A8;
                temp_v0_7 = *B_0092AC;
                (&B_0092B8)[-0x18].unk_1C = temp_v0_7;
                (&B_0092B8)[-0x18].unk_19 = temp_v0_7;
            }
            var_s7 -= 1;
            sp14 = &sp14[B_00A0D0];
        } while (var_s7 > 0);
    }
    temp_s0 = &B_009240.unk_18 - 0x18;
    if ((B_009240.unk_18.unk_0 & 0xFF) != 0x80) {
        temp_v1_13 = B_009240.unk_08;
        B_009240.unk_1A = B_009240.unk_18.unk_0;
        B_009240.unk_08 = temp_v1_13 + 1;
        temp_v1_14 = B_009240.unk_0C;
        B_009240.unk_1B = B_009240.unk_19;
        B_009240.unk_0C = temp_v1_14 + 1;
        B_009240.unk_18.unk_0 = (u8) temp_v1_13->unk_1;
        B_009240.unk_19 = temp_v1_14->unk_1;
        func_0000061C(&B_00A110, temp_s0, 0);
        B_009240.unk_1A = B_009240.unk_18.unk_0;
        B_009240.unk_08 = B_009240.unk_08 + 1;
        B_009240.unk_1B = B_009240.unk_19;
        B_009240.unk_0C = B_009240.unk_0C + 1;
        func_0000061C(&B_00A110 + 0x20, temp_s0, 0, B_009240.unk_18.unk_0);
        if (B_00A0D8 != 0) {
            temp_v1_15 = B_009260.unk_08;
            B_00927A.unk_0 = (u8) B_009278;
            B_009260.unk_08 = temp_v1_15 + 1;
            temp_v1_16 = B_009260.unk_0C;
            temp_s1 = &B_00927A - 0x1A;
            B_00927B = B_009279;
            B_009260.unk_0C = temp_v1_16 + 1;
            B_009278 = temp_v1_15->unk_1;
            B_009279 = temp_v1_16->unk_1;
            func_0000061C(&B_00A110 + 0x40, temp_s1, 0);
            B_00927A.unk_0 = (u8) B_009278;
            B_009260.unk_08 = B_009260.unk_08 + 1;
            B_00927B = B_009279;
            B_009260.unk_0C = B_009260.unk_0C + 1;
            func_0000061C(&B_00A110 + 0x60, temp_s1, 0, B_009278);
        }
        B_00929A = B_009298;
        B_009288 += 1;
        B_00929B = B_009299;
        B_00928C += 1;
        func_0000061C(&B_00A190, (struct_009240 *) (&B_00929A - 0x1A), 1, (u8) &B_00929A);
        B_0092BA = B_0092B8;
        B_0092A8 += 1;
        B_0092BB = B_0092B9;
        B_0092AC += 1;
        func_0000061C(&B_00A1B0, (struct_009240 *) (&B_0092BA - 0x1A), 2, (u8) &B_0092BA);
        B_00A0C0(sp14, &B_00A110, &B_00A190, &B_00A1B0);
        return;
    }
    B_009240.unk_00 += 2;
    B_009240.unk_04 = B_009240.unk_04 + 2;
    B_009240.unk_08 = B_009240.unk_08 + 2;
    B_009240.unk_0C = B_009240.unk_0C + 2;
    B_009240.unk_10 = B_009240.unk_10 + 2;
    B_009240.unk_14 = B_009240.unk_14 + 2;
    if (B_00A0D8 != 0) {
        B_009260.unk_00 += 2;
        B_009260.unk_04 = B_009260.unk_04 + 2;
        B_009260.unk_08 = B_009260.unk_08 + 2;
        B_009260.unk_0C = B_009260.unk_0C + 2;
        B_009260.unk_10 = B_009260.unk_10 + 2;
        B_009260.unk_14 = B_009260.unk_14 + 2;
    }
    B_009280 += 1;
    B_009284 += 1;
    B_009288 += 1;
    B_00928C += 1;
    B_009290 += 1;
    B_009294 += 1;
    B_0092A0 += 1;
    B_0092A4 += 1;
    B_0092A8 += 1;
    B_0092AC += 1;
    B_0092B0 += 1;
    B_0092B4 += 1;
}
#else
void func_000029F8(u16 *arg0);
INCLUDE_ASM("asm/functions/hvqm2dec1", func_000029F8);
#endif

#if 0
extern s32 B_009228;
extern s32 B_00922C;
extern s32 B_009230;
extern s32 B_009234;
extern s32 B_009238;
extern s32 B_00923C;
extern s32 B_009280[]; // TODO: probably struct
extern s32 B_009288;
extern s32 B_00928C;
extern s32 B_009290;
extern s32 B_009294;
extern s32 B_0092A0[]; // TODO: probably struct
extern s32 B_0092A8;
extern s32 B_0092AC;
extern s32 B_0092B0;
extern s32 B_0092B4;
extern s32 B_00A0D4;
extern s32 B_00A0D8;
extern s32 B_00A0E8;
extern s32 B_00A0F4;
extern s32 B_00A0F8;

void func_000033D8(u16 *arg0) {
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s2;

    B_009288 = B_00922C;
    B_009280[0] = (s32) B_00922C;
    B_009290 = B_00922C + B_00A0F4;
    B_00928C = B_009238;
    B_009280[1] = (s32) B_009238;
    B_009294 = B_009238 + B_00A0F4;
    B_0092A8 = B_009230;
    B_0092A0[0] = (s32) B_009230;
    B_0092B0 = B_009230 + B_00A0F4;
    B_0092AC = B_00923C;
    B_0092A0[1] = (s32) B_00923C;
    temp_a1 = B_00923C + B_00A0F4;
    temp_v0 = B_009228 + B_00A0E8;
    temp_v1 = B_009234 + B_00A0E8;
    B_0092B4 = temp_a1;
    B_009240.unk_08 = B_009228;
    B_009240.unk_00 = (s32) B_009228;
    B_009240.unk_10 = temp_v0;
    B_009240.unk_0C = B_009234;
    B_009240.unk_04 = (s32) B_009234;
    B_009240.unk_14 = temp_v1;
    if (B_00A0D8 != 0) {
        B_009260.unk_08 = temp_v0;
        B_009260.unk_10 = temp_v0 + B_00A0E8;
        B_009260.unk_00 = (s32) B_009228;
        B_009260.unk_04 = B_009234;
        B_009260.unk_0C = temp_v1;
        B_009260.unk_14 = temp_v1 + B_00A0E8;
    }
    func_000029F8(arg0);
    arg0 = &arg0[B_00A0D4];
    B_009280[0] = (s32) B_00922C;
    B_009280[1] = (s32) B_009238;
    B_0092A0[0] = (s32) B_009230;
    B_0092A0[1] = (s32) B_00923C;
    if (B_00A0D8 != 0) {
        B_009240.unk_08 += B_00A0E8;
        B_009240.unk_0C += B_00A0E8;
        B_009240.unk_10 += B_00A0E8;
        B_009240.unk_14 += B_00A0E8;
        B_009260.unk_00 = (s32) (B_009260.unk_00 + B_00A0E8);
        B_009260.unk_04 += B_00A0E8;
        B_009260.unk_08 += B_00A0E8;
        B_009260.unk_0C += B_00A0E8;
        B_009260.unk_10 += B_00A0E8;
        B_009260.unk_04 = B_009260.unk_04 + B_00A0E8;
    } else {
        B_009240.unk_00 = (s32) B_009228;
        B_009240.unk_04 = (s32) B_009234;
    }
    var_s2 = B_00A0F8 - 2;
    while (var_s2 > 0) {
        func_000029F8(arg0);
        arg0 = &arg0[B_00A0D4];
        if (B_00A0D8 != 0) {
            B_009240.unk_00 += B_00A0E8;
            B_009240.unk_04 += B_00A0E8;
            B_009240.unk_08 += B_00A0E8;
            B_009240.unk_0C += B_00A0E8;
            B_009240.unk_10 += B_00A0E8;
            B_009240.unk_14 += B_00A0E8;
            B_009260.unk_00 += B_00A0E8;
            B_009260.unk_04 += B_00A0E8;
            B_009260.unk_08 += B_00A0E8;
            B_009260.unk_0C += B_00A0E8;
            B_009260.unk_10 += B_00A0E8;
            B_009260.unk_14 += B_00A0E8;
        }
        var_s2 -= 1;
    }
    B_009290 = B_009288;
    B_009294 = B_00928C;
    B_0092B0 = B_0092A8;
    B_0092B4 = B_0092AC;
    if (B_00A0D8 != 0) {
        B_009260.unk_10 = B_009260.unk_08;
        B_009260.unk_14 = B_009260.unk_0C;
    } else {
        B_009240.unk_10 = B_009240.unk_08;
        B_009240.unk_14 = B_009240.unk_0C;
    }
    func_000029F8(arg0);
}
#else
void func_000033D8(u16 *arg0);
INCLUDE_ASM("asm/functions/hvqm2dec1", func_000033D8);
#endif

#if 0

STATIC_INLINE void inlined_func_06(struct_00000040_arg0 *arg0, u32 *temp_v1_11) {
    if (*temp_v1_11 != 0) {
        arg0->unk_8 = (void *) (temp_v1_11 + 4);
    } else {
        arg0->unk_8 = NULL;
    }
    arg0->unk_0 = 0;
}

extern u8 B_005EB0[];
extern u32 B_006914;
extern s32 B_006918;
extern s32 *B_00691C;
extern struct_00000040_arg0 B_006920;
extern struct_00000040_arg0 B_006988;
extern void *B_006990;
extern struct_00000040_arg0 B_006994;
extern void *B_00699C;
extern struct_00000040_arg0 B_0069A0;
extern s32 B_0069A8;
extern u16 *B_009228;
extern u8 *B_00922C;
extern u8 *B_009230;
extern u8 *B_009234;
extern u8 *B_009238;
extern u8 *B_00923C;
extern u8 *B_009288;
extern u8 *B_00928C;
extern u8 *B_009290;
extern u8 *B_009294;
extern u8 *B_0092A8;
extern u8 *B_0092AC;
extern u8 *B_0092B0;
extern u8 *B_0092B4;
extern s32 B_00A0C4;
extern u8 *B_00A0D8;
extern s32 B_00A0DC;
extern s32 B_00A0E0;
extern s32 B_00A0E4;
extern s32 B_00A0E8;
extern s32 B_00A0EC;
extern s32 B_00A0F0;
extern s32 B_00A0F4;
extern s32 B_00A0F8;
extern s32 B_00A0FC;
extern u8 *B_00A100;
extern s32 B_00A104;
extern s32 B_00A108;

void hvqm2Decode1(void *code, u32 format, u16 *outbuf, u16 *previm, u16 *workbuf) {
    u8 sp10;
    u8 sp11;
    u8 sp12;
    u16 *sp1C;
    u16 *sp24;
    HVQM2KeyFrame *sp2C;
    u8 *sp34;
    u8 *sp3C;
    u8 *sp44;
    u8 *sp4C;
    u8 *sp54;
    s32 sp5C;
    u8 *sp64;
    u16 *sp6C;
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
    s32 *temp_a0;
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
    s32 *temp_v1_28;
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
    s32 temp_v1_24;
    s32 temp_v1_25;
    s32 temp_v1_26;
    s32 temp_v1_27;
    s32 temp_v1_29;
    s32 temp_v1_30;
    s32 var_a0_6;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_a3_3;
    s32 var_a3_4;
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
    s32 var_v0;
    s32 var_v0_11;
    s32 var_v0_13;
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
    u16 *temp_a0_7;
    u16 *temp_a0_9;
    u16 *temp_a1;
    u16 *temp_a1_2;
    u16 *temp_v1_31;
    u16 *temp_v1_32;
    u16 *var_a0;
    u16 *var_a1_24;
    u16 *var_a2_2;
    u16 *var_a2_5;
    u16 *var_a3;
    u16 *var_fp_3;
    u16 *var_t0;
    u16 *var_t0_5;
    u16 *var_v1;
    u16 *var_v1_12;
    u16 temp_v0;
    u16 temp_v0_55;
    s16 var_a1_10;
    s16 var_a1_11;
    s16 var_a1_12;
    u16 var_a1_13;
    u16 var_a1_14;
    u16 var_a1_15;
    u16 var_a1_16;
    u16 var_a1_17;
    u16 var_a1_18;
    u16 var_a1_19;
    u16 var_a1_22;
    u16 var_a1_23;
    s16 var_a1_4;
    s16 var_a1_5;
    s16 var_a1_6;
    s16 var_a1_7;
    s16 var_a1_8;
    s16 var_a1_9;
    u8 var_v1_3;
    u32 *var_a0_3;
    u32 temp_a0_2;
    u32 temp_s2_2;
    u32 temp_s2_3;
    u32 temp_s2_4;
    u32 var_v0_4;
    u8 *temp_a0_10;
    u8 *temp_a0_11;
    u8 *temp_a0_12;
    u8 *temp_a0_13;
    u8 *temp_a0_14;
    u8 *temp_a0_15;
    u8 *temp_a0_16;
    u8 *temp_a0_17;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *temp_a0_8;
    u8 *temp_a1_3;
    u8 *temp_a1_4;
    u8 *temp_a3;
    u8 *temp_a3_2;
    u8 *temp_a3_3;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    u8 *temp_v0_5;
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
    u8 *temp_v1_45;
    u8 *temp_v1_46;
    u8 *temp_v1_47;
    u8 *temp_v1_48;
    u8 *var_a0_4;
    u8 *var_a0_5;
    u8 *var_a1_20;
    u8 *var_a1_21;
    u8 *var_a2_3;
    u8 *var_a2_4;
    u8 *var_a3_2;
    u8 *var_a3_5;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_t4;
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
        var_t1 = B_00A0E4;
        var_a0 = sp1C;
        var_a3 = sp24;
        while (var_t1 > 0) {
            var_a1 = B_00A0E0;
            var_t0 = var_a0;
            var_v1 = var_a3;
            while (var_a1 > 0) {
                *var_t0++ = *var_v1++;
                var_a1 -= 1;
            }
            var_a0 = &var_a0[B_00A0C4];
            var_a3 = &var_a3[B_00A0C4];
            var_t1 -= 1;
        }
    } else {
        B_009228 = workbuf;
        B_009234 = workbuf + B_00A0F0;
        B_00922C = &B_009234[B_00A0F0];
        B_009238 = &B_00922C[B_00A0FC];
        B_009230 = &B_009238[B_00A0FC];
        B_00923C = &B_009230[B_00A0FC];

        temp_v1 = code + ((HVQM2Frame*)code)->basisnum_offset[0];
        if (*temp_v1 != 0) {
            B_006930.unk_8 = temp_v1 + 4;
            B_006930.unk_0 = 0;
            if (&B_0071F0 != NULL) {
                B_009222 = 0x100;
                B_0071F0.unk_000 = func_00000040(&B_006930, &B_0071F0);
            }
        } else {
            B_006930.unk_8 = NULL;
            B_006930.unk_0 = 0;
        }
        temp_v1_2 = code + ((HVQM2Frame*)code)->basisnum_offset[1];
        if (*temp_v1_2 != 0) {
            B_0071F0.unk_000 = temp_v1_2 + 4;
        } else {
            B_00693C.unk_8 = NULL;
        }

        B_00693C.unk_0 = 0;
        temp_v1_3 = code + ((HVQM2Frame*)code)->basnumrn_offset[0];
        if (*temp_v1_3 != 0) {
            B_006948.unk_8 = temp_v1_3 + 4;
            B_006948.unk_0 = 0;
            if (&B_007A00 != NULL) {
                B_009222 = 0x100;
                B_007A00.unk_000 = func_00000040(&B_006948, &B_007A00);
            }
        } else {
            B_006948.unk_8 = NULL;
            B_006948.unk_0 = 0;
        }
        temp_v1_4 = code + ((HVQM2Frame*)code)->basnumrn_offset[1];
        if (*temp_v1_4 != 0) {
            B_007A00.unk_000 = temp_v1_4 + 4;
        } else {
            B_006954.unk_8 = NULL;
        }
        B_006954.unk_0 = 0;
        temp_v1_5 = code + ((HVQM2Frame*)code)->scale_offset[0];
        if (*temp_v1_5 != 0) {
            B_006960[0].unk_8 = temp_v1_5 + 4;
            B_006960[0].unk_0 = 0;
            if (&B_008210 != NULL) {
                B_009222 = 0x100;
                B_008210.unk_000 = func_00000040(&B_006960[0], &B_008210);
            }
        } else {
            B_006960[0].unk_8 = NULL;
            B_006960[0].unk_0 = 0;
        }
        temp_v1_6 = code + ((HVQM2Frame*)code)->scale_offset[1];
        if (*temp_v1_6 != 0) {
            B_008210.unk_000 = temp_v1_6 + 4;
        } else {
            B_006960[1].unk_8 = NULL;
        }
        B_006960[1].unk_0 = 0;
        temp_v1_7 = code + ((HVQM2Frame*)code)->scale_offset[2];
        if (*temp_v1_7 != 0) {
            B_006960[1].unk_8 = temp_v1_7 + 4;
        } else {
            B_006960[2].unk_8 = 0;
        }
        B_006960[2].unk_0 = 0;
        temp_v1_8 = code + ((HVQM2Frame*)code)->dcval_offset[0];
        if (*temp_v1_8 != 0) {
            B_006990 = temp_v1_8 + 4;
            B_006988.unk_0 = 0;
            if (&B_0069E0 != NULL) {
                B_009222 = 0x100;
                B_0069E0.unk_000 = func_00000040(&B_006988, &B_0069E0);
            }
        } else {
            B_006990 = NULL;
            B_006988.unk_0 = 0;
        }
        temp_v1_9 = code + ((HVQM2Frame*)code)->dcval_offset[1];
        if (*temp_v1_9 != 0) {
            B_0069E0.unk_000 = temp_v1_9 + 4;
        } else {
            B_00699C = NULL;
        }
        B_006994.unk_0 = 0;
        temp_v1_10 = code + ((HVQM2Frame*)code)->dcval_offset[2];
        if (*temp_v1_10 != 0) {
            B_00699C = temp_v1_10 + 4;
        } else {
            B_0069A8 = 0;
        }
        B_0069A0.unk_0 = 0;

        for (var_a1_2 = 0; var_a1_2 < 3; var_a1_2++) {
            B_0069D4[var_a1_2] = code + ((HVQM2Frame*)code)->fixvl_offset[var_a1_2] + 4;
        }

        B_00A100 = B_005EB0;

        switch (format) {
            case 0x0:
                sp2C = (u8*)code + sizeof(HVQM2Frame);

                for (var_a2 = 0; var_a2 < 3; var_a2++) {
                    temp_v1_11 = code + sp2C->dcrun_offset[var_a2];
                    #if 0
                    if (*temp_v1_11 != 0) {
                        B_0069B0[var_a2].unk_8 = (void *) (temp_v1_11 + 4);
                    } else {
                        B_0069B0[var_a2].unk_8 = NULL;
                    }
                    B_0069B0[var_a2].unk_0 = 0;
                    #endif
                    inlined_func_06(&B_0069B0[var_a2], temp_v1_11);
                }

                var_t0_2 = B_00A0F0;
                var_a2_2 = B_009228;
                while (var_t0_2 > 0) {
                    var_v1_3 = inlined_func_02(&B_006930, &B_0071F0);

                    if (var_v1_3) {
                        *var_a2_2 = (s8) var_v1_3;
                        var_a2_2 += 1;
                        var_t0_2 -= 1;
                    } else {
                        var_v0_2 = inlined_func_02(&B_006948, &B_007A00) & 0xFF;
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
                }
                var_t0_3 = B_00A0FC;
                var_a2_3 = B_00922C;
                var_a3_2 = B_009230;
                if (var_t0_3 > 0) {
                    do {
                        var_v0_4 = inlined_func_02(&B_00693C, &B_0071F0) & 0xFF;
                        if (var_v0_4 == 0) {
                            var_v0_6 = inlined_func_02(&B_006954, &B_007A00) & 0xFF;
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
                var_s0 = B_009234;
                var_s3 = B_00A0F4;
                sp3C = B_009238;
                sp4C = B_00923C;
                var_fp = 0;
                sp34 = B_009238;
                var_s7 = 0;
                var_s2 = 0;
                sp12 = 0;
                sp11 = 0;
                sp10 = 0;
                var_s1 = var_s0;
                sp44 = B_00923C;
                if (var_s3 > 0) {
                    sp54 = &sp10;
                    do {
                        if (sp10 == 0) {
                            var_v0_8 = func_000002F8(&B_006988);
                            if (var_v0_8 == 0) {
                                *sp54 = inlined_func_02(&B_0069B0, &B_007A00);
                                var_v0_8 = 0;
                            }
                        } else {
                            sp10 -= 1;
                            var_v0_8 = 0;
                        }
                        temp_s2 = var_v0_8 + var_s2;
                        *var_s0 = temp_s2;
                        if (sp10 == 0) {
                            var_v0_10 = func_000002F8(&B_006988);
                            if (var_v0_10 == 0) {
                                sp10 = inlined_func_02(&B_0069B0, &B_007A00);
                                var_v0_10 = 0;
                            }
                        } else {
                            sp10 -= 1;
                            var_v0_10 = 0;
                        }

                        var_s2 = var_v0_10 + temp_s2;
                        var_s0[1] = var_s2;
                        #if 1
                        var_s0 = &var_s0[1+1];
                        #endif
                        if (sp11 == 0) {
                            var_v0_12 = func_000002F8(&B_006994);
                            if (var_v0_12 == 0) {
                                sp11 = inlined_func_02(&B_0069B0[1], &B_007A00);
                                var_v0_12 = 0;
                            }
                        } else {
                            sp11 -= 1;
                            var_v0_12 = 0;
                        }
                        var_s7 += var_v0_12;
                        *sp3C = var_s7;
                        sp3C += 1;
                        if (sp12 == 0) {
                            var_v0_14 = func_000002F8(&B_0069A0);
                            if (var_v0_14 == 0) {
                                sp12 = inlined_func_02(&B_0069B0[2], &B_007A00);
                                var_v0_14 = 0;
                            }
                        } else {
                            sp12 -= 1;
                            var_v0_14 = 0;
                        }
                        var_fp += var_v0_14;
                        var_s3 -= 1;
                        *sp4C = var_fp;
                        sp4C += 1;
                    } while (var_s3 > 0);
                }
                if (B_00A0D8 != NULL) {
                    var_s3_2 = B_00A0F4;
                    var_s2_2 = *var_s1;
                    if (var_s3_2 > 0) {
                        do {
                            if (sp10 == 0) {
                                var_v0_16 = func_000002F8(&B_006988);
                                if (var_v0_16 == 0) {
                                    sp10 = inlined_func_02(&B_0069B0[0], &B_007A00);
                                    var_v0_16 = 0;
                                }
                            } else {
                                sp10 -= 1;
                                var_v0_16 = 0;
                            }
                            temp_v0_25 = var_v0_16 + var_s2_2;
                            *var_s0 = temp_v0_25;
                            temp_s2_2 = (u32) (var_s1[1] + (temp_v0_25 & 0xFF)) >> 1;
                            if (sp10 == 0) {
                                var_v0_18 = func_000002F8(&B_006988);
                                if (var_v0_18 == 0) {
                                    sp10 = inlined_func_02(&B_0069B0[0], &B_007A00);
                                    var_v0_18 = 0;
                                }
                            } else {
                                sp10 -= 1;
                                var_v0_18 = 0;
                            }
                            #if 0
                            var_s1 = &var_s1[1].unk_1;
                            #endif
                            temp_v0_28 = var_v0_18 + temp_s2_2;
                            var_s0[1] = temp_v0_28;
                            #if 0
                            var_s0 = &var_s0[1].unk_1;
                            #endif
                            var_s3_2 -= 1;
                            var_s2_2 = (u8) ((u32) (*var_s1 + (temp_v0_28 & 0xFF)) >> 1);
                        } while (var_s3_2 > 0);
                    }
                }
                sp5C = B_00A0F8;
                if (B_00A0F8 >= 2) {
                    do {
                        var_s7_2 = *sp34;
                        var_s3_3 = B_00A0F4;
                        var_s2_3 = *var_s1;
                        var_fp_2 = *sp44;
                        if (var_s3_3 > 0) {
                            sp64 = &sp10;
                            do {
                                if (sp10 == 0) {
                                    var_v0_20 = func_000002F8(&B_006988);
                                    if (var_v0_20 == 0) {
                                        *sp64 = inlined_func_02(&B_0069B0[0], &B_007A00);
                                        var_v0_20 = 0;
                                    }
                                } else {
                                    sp10 -= 1;
                                    var_v0_20 = 0;
                                }
                                temp_v0_31 = var_v0_20 + var_s2_3;
                                *var_s0 = temp_v0_31;
                                temp_s2_3 = (u32) (var_s1[1] + (temp_v0_31 & 0xFF)) >> 1;
                                if (sp10 == 0) {
                                    var_v0_22 = func_000002F8(&B_006988);
                                    if (var_v0_22 == 0) {
                                        sp10 = inlined_func_02(&B_0069B0[0], &B_007A00);
                                        var_v0_22 = 0;
                                    }
                                } else {
                                    sp10 -= 1;
                                    var_v0_22 = 0;
                                }
                                #if 0
                                var_s1 = &var_s1[1].unk_1;
                                #endif
                                temp_v0_34 = var_v0_22 + temp_s2_3;
                                var_s0[1] = temp_v0_34;
                                #if 0
                                var_s0 = &var_s0[1].unk_1;
                                #endif
                                var_s2_3 = (u8) ((u32) (*var_s1 + (temp_v0_34 & 0xFF)) >> 1);
                                if (sp11 == 0) {
                                    var_v0_24 = func_000002F8(&B_006994);
                                    if (var_v0_24 == 0) {
                                        sp11 = inlined_func_02(&B_0069B0[1], &B_007A00);
                                        var_v0_24 = 0;
                                    }
                                } else {
                                    sp11 -= 1;
                                    var_v0_24 = 0;
                                }
                                sp34 += 1;
                                temp_v0_37 = var_v0_24 + var_s7_2;
                                *sp3C = temp_v0_37;
                                var_s7_2 = (u8) ((u32) (sp34[1] + (temp_v0_37 & 0xFF)) >> 1);
                                sp3C += 1;
                                if (sp12 == 0) {
                                    var_v0_26 = func_000002F8(&B_0069A0);
                                    if (var_v0_26 == 0) {
                                        sp12 = inlined_func_02(&B_0069B0[2], &B_007A00);
                                        var_v0_26 = 0;
                                    }
                                } else {
                                    sp12 -= 1;
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
                        if (B_00A0D8 != NULL) {
                            var_s3_4 = B_00A0F4;
                            var_s2_4 = *var_s1;
                            if (var_s3_4 > 0) {
                                do {
                                    if (sp10 == 0) {
                                        var_v0_28 = func_000002F8(&B_006988);
                                        if (var_v0_28 == 0) {
                                            sp10 = inlined_func_02(&B_0069B0, &B_007A00);
                                            var_v0_28 = 0;
                                        }
                                    } else {
                                        sp10 -= 1;
                                        var_v0_28 = 0;
                                    }
                                    temp_v0_43 = var_v0_28 + var_s2_4;
                                    *var_s0 = temp_v0_43;
                                    temp_s2_4 = (u32) (var_s1[1] + (temp_v0_43 & 0xFF)) >> 1;
                                    if (sp10 == 0) {
                                        var_v0_30 = func_000002F8(&B_006988);
                                        if (var_v0_30 == 0) {
                                            sp10 = inlined_func_02(&B_0069B0[0], &B_007A00);
                                            var_v0_30 = 0;
                                        }
                                    } else {
                                        sp10 -= 1;
                                        var_v0_30 = 0;
                                    }
                                    #if 0
                                    var_s1 = &var_s1[1].unk_1;
                                    #endif
                                    temp_v0_46 = var_v0_30 + temp_s2_4;
                                    var_s0[1] = temp_v0_46;
                                    #if 0
                                    var_s0 = &var_s0[1].unk_1;
                                    #endif
                                    var_s3_4 -= 1;
                                    var_s2_4 = (u8) ((u32) (*var_s1 + (temp_v0_46 & 0xFF)) >> 1);
                                } while (var_s3_4 > 0);
                            }
                        }
                        temp_t6 = sp5C - 1;
                        sp5C = temp_t6;
                    } while (temp_t6 >= 2);
                }
                var_a2_4 = B_00A100;
                var_a0_4 = &B_009234[sp2C->nest_start_x + (sp2C->nest_start_y * B_00A0E8)];
                var_t0_4 = B_00A0E8;
                if (B_00A0E8 < B_00A104) {
                    var_t2 = B_00A104 - var_t0_4;
                    if (var_t0_4 < var_t2) {
                        var_t2 = var_t0_4;
                    }
                    var_t3 = B_00A104 - (var_t0_4 + var_t2);
                } else {
                    var_t0_4 = B_00A104;
                    var_t2 = 0;
                    var_t3 = 0;
                }
                var_v1_6 = B_00A0EC;
                var_t1_2 = B_00A108 - var_v1_6;
                if (var_v1_6 < B_00A108) {
                    if (var_v1_6 < var_t1_2) {
                        var_t1_2 = var_v1_6;
                    }
                    var_t4 = B_00A108 - (var_v1_6 + var_t1_2);
                } else {
                    var_v1_6 = B_00A108;
                    var_t1_2 = 0;
                    var_t4 = NULL;
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
                        var_a0_4 = &var_a0_4[B_00A0E8];
                    } while (var_a3_3 > 0);
                }
                var_a3_4 = var_t1_2;
                var_a1_21 = var_a2_4 - B_00A104;
                if (var_a3_4 > 0) {
                    do {
                        var_v1_10 = B_00A104;
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
                        var_a1_21 -= B_00A104;
                    } while (var_a3_4 > 0);
                }
                var_a3_5 = var_t4;
                if ((s32) var_a3_5 > 0) {
loop_298:
                    var_v1_11 = B_00A104;
                    if (var_v1_11 > 0) {
                        do {
                            *var_a2_4 = 0;
                            var_v1_11 -= 1;
                            var_a2_4 += 1;
                        } while (var_v1_11 > 0);
                    }
                    var_a3_5 -= 1;
                    if ((s32) var_a3_5 > 0) {
                        goto loop_298;
                    }
                }
                func_000033D8(sp1C);
                return;
            case 0x1:
                temp_v1_28 = code + ((HVQM2PredictFrame*)((u8*)code + sizeof(HVQM2Frame)))->movevector_offset;
                if (*temp_v1_28 != 0) {
                    B_006920.unk_8 = temp_v1_28 + 4;
                    B_006920.unk_0 = 0;
                    if (&B_008A20 != NULL) {
                        B_009222 = 0x100;
                        B_008A20.unk_000 = func_00000040(&B_006920, &B_008A20);
                    }
                } else {
                    B_006920.unk_8 = NULL;
                    B_006920.unk_0 = 0;
                }
                temp_a0 = code + ((HVQM2PredictFrame*)((u8*)code + sizeof(HVQM2Frame)))->macroblock_offset;
                if (*temp_a0 != 0) {
                    B_008A20.unk_000 = temp_a0 + 4;
                } else {
                    B_00691C = NULL;
                }
                B_006914 = 0;
                var_s3_5 = 0;
                var_a2_4 = B_00922C;
                var_a3_5 = B_009238;
                var_a1_21 = B_00A0D8;
                var_s4 = 0;
                sp77 = 0;
                sp7F = 0;
                sp10 = 0;
                sp11 = 0;
                B_009240.unk_08 = B_009228;
                B_009240.unk_0C = B_009234;
                sp6C = sp1C;
                B_009240.unk_10 = B_009228 + B_00A0E8;
                B_009240.unk_14 = &B_009234[B_00A0E8];
                B_009288 = var_a2_4;
                B_00928C = var_a3_5;
                B_0092A8 = B_009230;
                B_0092AC = B_00923C;
                var_s5 = 0;
                if (var_a1_21 == NULL) {
                    B_009290 = &var_a2_4[B_00A0F4];
                    B_009294 = &var_a3_5[B_00A0F4];
                    B_0092B0 = &B_009230[B_00A0F4];
                    B_0092B4 = &B_00923C[B_00A0F4];
                }
                sp84 = 0;
                if (B_00A0E4 > 0) {
                    do {
                        var_fp_3 = sp6C;
                        var_s6 = 0;
                        if (B_00A0E0 > 0) {
                            do {
                                if (B_006914 == 0) {
                                    temp_v0_49 = B_00691C;
                                    B_00691C = temp_v0_49 + 4;
                                    B_006914 = 0x80000000;
                                    B_006918 = *temp_v0_49;
                                }
                                temp_a0_2 = (u32) B_006914 >> 1;
                                B_006914 = temp_a0_2;
                                if (!(B_006918 & B_006914)) {
                                    sp77 += inlined_func_02(&B_006920, &B_008A20) & 0xFF;

                                    temp_v0_54 = sp7F + (inlined_func_02(&B_006920, &B_008A20) & 0xFF);
                                    var_t0_5 = var_fp_3;
                                    var_a3_6 = 8;
                                    sp7F = temp_v0_54;
                                    var_v1_12 = &(&sp24[var_s6 + (s8) sp77])[(sp84 + temp_v0_54) * B_00A0C4];
                                    do {
                                        var_a2_5 = var_t0_5;
                                        var_a1_24 = var_v1_12;
                                        var_a0_6 = 8;
                                        while (var_a0_6 != 0) {
                                            *var_a2_5++ = *var_a1_24++;
                                            var_a0_6 -= 1;
                                        }
                                        var_t0_5 = &var_t0_5[B_00A0C4];
                                        var_v1_12 = &var_v1_12[B_00A0C4];
                                        var_a3_6 -= 1;
                                    } while (var_a3_6 != 0);
                                    temp_v1_31 = B_009240.unk_08;
                                    B_009240.unk_08 = temp_v1_31 + 1;
                                    *temp_v1_31 = 0x80U;
                                    temp_v1_32 = B_009240.unk_08;
                                    B_009240.unk_08 = temp_v1_32 + 1;
                                    *temp_v1_32 = 0x80U;
                                    temp_v1_33 = B_009240.unk_10;
                                    B_009240.unk_0C += 2;
                                    B_009240.unk_10 = temp_v1_33 + 1;
                                    *temp_v1_33 = 0x80;
                                    temp_v1_34 = B_009240.unk_10;
                                    B_009240.unk_10 = temp_v1_34 + 1;
                                    *temp_v1_34 = 0x80;
                                    temp_v1_35 = B_009288;
                                    B_009240.unk_14 += 2;
                                    B_009288 = temp_v1_35 + 1;
                                    *temp_v1_35 = 0x80;
                                    temp_v1_36 = B_0092A8;
                                    B_00928C += 1;
                                    B_0092A8 = temp_v1_36 + 1;
                                    *temp_v1_36 = 0x80;
                                    B_0092AC += 1;
                                    if (B_00A0D8 == NULL) {
                                        temp_v1_37 = B_009290;
                                        B_009290 = temp_v1_37 + 1;
                                        *temp_v1_37 = 0x80;
                                        temp_v1_38 = B_0092B0;
                                        B_009294 += 1;
                                        B_0092B0 = temp_v1_38 + 1;
                                        *temp_v1_38 = 0x80;
                                        B_0092B4 += 1;
                                    }
                                } else {
                                    if (temp_a0_2 == 0) {
                                        temp_v0_56 = B_00691C;
                                        B_00691C = temp_v0_56 + 4;
                                        B_006914 = 0x80000000;
                                        B_006918 = *temp_v0_56;
                                    }
                                    B_006914 = (u32) B_006914 >> 1;
                                    if (!(B_006918 & B_006914)) {
                                        temp_v0_57 = func_000004A8(&sp10, &B_006930, &B_006948);
                                        temp_a1 = B_009240.unk_08;
                                        B_009240.unk_08 = temp_a1 + 1;
                                        *temp_a1 = (s8) temp_v0_57;
                                        temp_a3 = B_009240.unk_0C;
                                        temp_s0 = var_s3_5 + func_000002F8(&B_006988);
                                        B_009240.unk_0C = temp_a3 + 1;
                                        *temp_a3 = temp_s0;
                                        temp_v0_58 = func_000004A8(&sp10, &B_006930, &B_006948);
                                        temp_a1_2 = B_009240.unk_08;
                                        B_009240.unk_08 = temp_a1_2 + 1;
                                        *temp_a1_2 = (s8) temp_v0_58;
                                        temp_a3_2 = B_009240.unk_0C;
                                        temp_s0_2 = temp_s0 + func_000002F8(&B_006988);
                                        B_009240.unk_0C = temp_a3_2 + 1;
                                        *temp_a3_2 = temp_s0_2;
                                        temp_v0_59 = func_000004A8(&sp10, &B_006930, &B_006948);
                                        temp_a1_3 = B_009240.unk_10;
                                        B_009240.unk_10 = temp_a1_3 + 1;
                                        *temp_a1_3 = (u8) temp_v0_59;
                                        temp_a3_3 = B_009240.unk_14;
                                        temp_s0_3 = temp_s0_2 + func_000002F8(&B_006988);
                                        B_009240.unk_14 = temp_a3_3 + 1;
                                        *temp_a3_3 = temp_s0_3;
                                        temp_v0_60 = func_000004A8(&sp10, &B_006930, &B_006948);
                                        temp_a1_4 = B_009240.unk_10;
                                        B_009240.unk_10 = temp_a1_4 + 1;
                                        *temp_a1_4 = (u8) temp_v0_60;
                                        temp_s0_4 = temp_s0_3 + func_000002F8(&B_006988);
                                        var_s3_5 = temp_s0_4;
                                        temp_v1_39 = B_009240.unk_14;
                                        B_009240.unk_14 = temp_v1_39 + 1;
                                        *temp_v1_39 = temp_s0_4;
                                        temp_v1_40 = B_009288;
                                        temp_s0_5 = func_000004A8(&sp11, &B_00693C, &B_006954);
                                        B_009288 = temp_v1_40 + 1;
                                        *temp_v1_40 = temp_s0_5 & 0xF;
                                        temp_a0_3 = B_00928C;
                                        temp_s2_5 = var_s4 + func_000002F8(&B_006994);
                                        B_00928C = temp_a0_3 + 1;
                                        *temp_a0_3 = temp_s2_5;
                                        temp_v1_41 = B_0092A8;
                                        B_0092A8 = temp_v1_41 + 1;
                                        *temp_v1_41 = (u8) ((u32) (temp_s0_5 & 0xFF) >> 4);
                                        temp_a0_4 = B_0092AC;
                                        temp_s1 = var_s5 + func_000002F8(&B_0069A0);
                                        B_0092AC = temp_a0_4 + 1;
                                        *temp_a0_4 = temp_s1;
                                        var_s4 = temp_s2_5;
                                        var_s5 = temp_s1;
                                        if (B_00A0D8 == NULL) {
                                            temp_v1_42 = B_009290;
                                            temp_s0_6 = func_000004A8(&sp11, &B_00693C, &B_006954);
                                            B_009290 = temp_v1_42 + 1;
                                            *temp_v1_42 = temp_s0_6 & 0xF;
                                            temp_a0_5 = B_009294;
                                            temp_v0_61 = temp_s2_5 + func_000002F8(&B_006994);
                                            B_009294 = temp_a0_5 + 1;
                                            *temp_a0_5 = temp_v0_61;
                                            temp_v1_43 = B_0092B0;
                                            var_s4 = temp_v0_61;
                                            B_0092B0 = temp_v1_43 + 1;
                                            *temp_v1_43 = (u8) ((u32) (temp_s0_6 & 0xFF) >> 4);
                                            temp_a0_6 = B_0092B4;
                                            temp_v0_62 = temp_s1 + func_000002F8(&B_0069A0);
                                            var_s5 = temp_v0_62;
                                            B_0092B4 = temp_a0_6 + 1;
                                            *temp_a0_6 = temp_v0_62;
                                        }
                                    } else {
                                        var_s3_5 += func_000002F8(&B_006988);
                                        var_s4 += func_000002F8(&B_006994);
                                        temp_v0_63 = func_000002F8(&B_0069A0);
                                        temp_a0_7 = B_009240.unk_08;
                                        B_009240.unk_08 = temp_a0_7 + 1;
                                        *temp_a0_7 = 0;
                                        temp_a0_8 = B_009240.unk_0C;
                                        B_009240.unk_0C = temp_a0_8 + 1;
                                        *temp_a0_8 = var_s3_5;
                                        temp_a0_9 = B_009240.unk_08;
                                        B_009240.unk_08 = temp_a0_9 + 1;
                                        *temp_a0_9 = 0;
                                        temp_a0_10 = B_009240.unk_0C;
                                        B_009240.unk_0C = temp_a0_10 + 1;
                                        *temp_a0_10 = var_s3_5;
                                        temp_a0_11 = B_009240.unk_10;
                                        B_009240.unk_10 = temp_a0_11 + 1;
                                        *temp_a0_11 = 0;
                                        temp_a0_12 = B_009240.unk_14;
                                        B_009240.unk_14 = temp_a0_12 + 1;
                                        *temp_a0_12 = var_s3_5;
                                        temp_a0_13 = B_009240.unk_10;
                                        B_009240.unk_10 = temp_a0_13 + 1;
                                        *temp_a0_13 = 0;
                                        temp_a0_14 = B_009240.unk_14;
                                        B_009240.unk_14 = temp_a0_14 + 1;
                                        *temp_a0_14 = var_s3_5;
                                        temp_a0_15 = B_009288;
                                        B_009288 = temp_a0_15 + 1;
                                        *temp_a0_15 = 0;
                                        temp_a0_16 = B_00928C;
                                        B_00928C = temp_a0_16 + 1;
                                        *temp_a0_16 = var_s4;
                                        temp_a0_17 = B_0092A8;
                                        B_0092A8 = temp_a0_17 + 1;
                                        *temp_a0_17 = 0;
                                        temp_v1_44 = B_0092AC;
                                        var_s5 += temp_v0_63;
                                        B_0092AC = temp_v1_44 + 1;
                                        *temp_v1_44 = var_s5;
                                        if (B_00A0D8 == NULL) {
                                            temp_v1_45 = B_009290;
                                            B_009290 = temp_v1_45 + 1;
                                            *temp_v1_45 = 0;
                                            temp_v1_46 = B_009294;
                                            B_009294 = temp_v1_46 + 1;
                                            *temp_v1_46 = var_s4;
                                            temp_v1_47 = B_0092B0;
                                            B_0092B0 = temp_v1_47 + 1;
                                            *temp_v1_47 = 0;
                                            temp_v1_48 = B_0092B4;
                                            B_0092B4 = temp_v1_48 + 1;
                                            *temp_v1_48 = var_s5;
                                        }
                                    }
                                }
                                var_s6 += 8;
                                var_fp_3 += 0x10;
                            } while (var_s6 < B_00A0E0);
                        }
                        var_a1_21 = (u8 *) B_00A0E8;
                        var_a3_5 = B_00A0D8;
                        var_a2_4 = &B_009240.unk_14[(s32)var_a1_21];
                        B_009240.unk_08 += (s32)var_a1_21;
                        B_009240.unk_0C = &B_009240.unk_0C[(s32)var_a1_21];
                        B_009240.unk_10 = &B_009240.unk_10[(s32)var_a1_21];
                        B_009240.unk_14 = var_a2_4;
                        if (var_a3_5 == NULL) {
                            var_a1_21 = &B_0092A8[B_00A0F4];
                            var_a2_4 = &B_0092AC[B_00A0F4];
                            var_a3_5 = &B_009290[B_00A0F4];
                            B_009288 = &B_009288[B_00A0F4];
                            B_00928C = &B_00928C[B_00A0F4];
                            B_0092A8 = var_a1_21;
                            B_0092AC = var_a2_4;
                            B_009290 = var_a3_5;
                            B_009294 = &B_009294[B_00A0F4];
                            B_0092B0 = &B_0092B0[B_00A0F4];
                            B_0092B4 = &B_0092B4[B_00A0F4];
                        }
                        temp_t6_2 = sp84 + 8;
                        sp84 = temp_t6_2;
                        sp6C = &sp6C[B_00A0DC];
                    } while (temp_t6_2 < B_00A0E4);
                }
                func_000033D8(sp1C);
                return;
        }
    }
}
#else
INCLUDE_ASM("asm/functions/hvqm2dec1", hvqm2Decode1);
#endif

#if 0
extern s16 B_0069E2[];
extern s16 B_008212[];
extern s16 B_009224;
extern s16 B_009226;
extern void (*B_00A0C0)(u16 *, u16 *, u16 *, u16 *);
extern u32 B_00A0C4;
extern s32 B_00A0C8;
extern s32 B_00A0CC;
extern s32 B_00A0D0;
extern s32 B_00A0D4;
extern s32 B_00A0D8;
extern s32 B_00A0DC;
extern s32 B_00A0E0;
extern s32 B_00A0E4;
extern s32 B_00A0E8;
extern s32 B_00A0EC;
extern s32 B_00A0F0;
extern s32 B_00A0F4;
extern s32 B_00A0F8;
extern s32 B_00A0FC;
extern s32 B_00A104;
extern s32 B_00A108;
extern u8 B_00A10C;

// Should be equivalent
u32 hvqm2Setup1(HVQM2Header *header, u32 outbufWidth) {
    s32 var_a0;
    s32 var_a3;
    s8 var_a2;
    s32 temp_t0_2;
    void (*var_a1)(u16 *, u16 *, u16 *, u16 *);

    B_00A0C4 = outbufWidth;
    B_00A0E0 = (s32) header->width;
    B_00A0E4 = (s32) header->height;
    if (outbufWidth == 0) {
        B_00A0C4 = (u32) B_00A0E0;
    }
    B_00A0C8 = (s32) header->h_sampling_rate;
    B_00A0CC = (s32) header->v_sampling_rate;
    B_00A0D0 = header->h_sampling_rate * 4;
    var_a0 = B_00A0E4 >> 2;
    B_00A0D4 = header->v_sampling_rate * (B_00A0C4 * 4);
    B_00A0E8 = B_00A0E0 >> 2;
    B_00A0EC = var_a0;
    B_00A0F0 = B_00A0E8 * B_00A0EC;
    B_00A0F4 =  B_00A0E0 >> 3;
    B_00A0D8 = header->v_sampling_rate == 2;

    if (B_00A0D8 != 0) {
        var_a0 = (s32) B_00A0E4 >> 3;
    }
    B_00A0F8 = var_a0;

    B_00A0DC = B_00A0C4 * 8;
    B_00A0FC = B_00A0F4 * B_00A0F8;

    var_a1 = func_000012E4;
    if (B_00A0D8 != 0) {
        var_a1 = func_0000187C;
    }
    B_00A0C0 = var_a1;

    B_00A10C = header->y_shiftnum;
    B_00A10C = header->y_shiftnum;
    if (B_00A10C == 8) {
        B_00A10C = 0x46;
        B_00A108 = 0x26;
    } else {
        B_00A104 = 0x26;
        B_00A108 = 0x46;
    }

    temp_t0_2 = header->video_quantize_shift;
    B_009224 = 0x7F << temp_t0_2;
    B_009226 = -0x80 << temp_t0_2;

    for (var_a3 = 0, var_a2 = 0; var_a3 < 0x100; var_a3++, var_a2++) {
        B_008212[var_a3] = ((s32)(var_a2 << 24) >> 21);
        B_0069E2[var_a3] = var_a2 << temp_t0_2;
    }

    return header->total_frames;
}
#else
INCLUDE_ASM("asm/functions/hvqm2dec1", hvqm2Setup1);
#endif

void hvqm2Init1(u8 alpha) {
    s32 i;
    s32 var_a2;

    alpha >>= 7;

    for (i = 0, var_a2 = -0x100; i < B_009AC0_LEN; i++, var_a2++) {
        if (var_a2 >= 0) {
            if (var_a2 < 0x100) {
                B_009AC0[i] = (var_a2 >> 2) & 0x3E;
            } else {
                B_009AC0[i] = 0x3E;
            }
        } else {
            B_009AC0[i] = 0;
        }

        B_009AC0[i] = B_009AC0[i];
        B_009DC0[i] = B_009AC0[i] | alpha;
    }

    B_0092C0[0] = 0;
    for (i = 1; i < ARRAY_COUNT(B_0092C0); i++) {
        B_0092C0[i] = 0x1000 / i;
    }
}
