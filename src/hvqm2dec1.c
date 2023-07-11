#include "hvqm/hvqm2dec.h"
#include "hvqm/HVQM2File.h"
#include "hvqm/HVQmd.h"
#include "include_asm.h"
#include "custom_macros.h"

#define UNK_SIZE 1


// extern u8 B_005EB0[];
// static u8 B_005EB0[];
/* .space 0xA64 */

// extern u8 B_006914[];
// static u8 B_006914[];
/* .space 0x04 */

// extern u8 B_006918[];
// static u8 B_006918[];
/* .space 0x04 */

// extern u8 B_00691C[];
// static u8 B_00691C[];
/* .space 0x04 */

// extern u8 B_006920[];
// static u8 B_006920[];
/* .space 0x04 */

// extern u8 B_006924[];
// static u8 B_006924[];
/* .space 0x04 */

// extern u8 B_006928[];
// static u8 B_006928[];
/* .space 0x08 */

// extern u8 B_006930[];
// static u8 B_006930[];
/* .space 0x04 */

// extern u8 B_006934[];
// static u8 B_006934[];
/* .space 0x04 */

// extern u8 B_006938[];
// static u8 B_006938[];
/* .space 0x04 */

// extern u8 B_00693C[];
// static u8 B_00693C[];
/* .space 0x04 */

// extern u8 B_006940[];
// static u8 B_006940[];
/* .space 0x04 */

// extern u8 B_006944[];
// static u8 B_006944[];
/* .space 0x04 */

// extern u8 B_006948[];
// static u8 B_006948[];
/* .space 0x04 */

// extern u8 B_00694C[];
// static u8 B_00694C[];
/* .space 0x04 */

// extern u8 B_006950[];
// static u8 B_006950[];
/* .space 0x04 */

// extern u8 B_006954[];
// static u8 B_006954[];
/* .space 0x04 */

// extern u8 B_006958[];
// static u8 B_006958[];
/* .space 0x04 */

// extern u8 B_00695C[];
// static u8 B_00695C[];
/* .space 0x04 */

// extern u8 B_006960[];
// static u8 B_006960[];
/* .space 0x08 */

// extern u8 B_006968[];
// static u8 B_006968[];
/* .space 0x04 */

// extern u8 B_00696C[];
// static u8 B_00696C[];
/* .space 0x08 */

// extern u8 B_006974[];
// static u8 B_006974[];
/* .space 0x04 */

// extern u8 B_006978[];
// static u8 B_006978[];
/* .space 0x08 */

// extern u8 B_006980[];
// static u8 B_006980[];
/* .space 0x08 */

// extern u8 B_006988[];
// static u8 B_006988[];
/* .space 0x08 */

// extern u8 B_006990[];
// static u8 B_006990[];
/* .space 0x04 */

// extern u8 B_006994[];
// static u8 B_006994[];
/* .space 0x08 */

// extern u8 B_00699C[];
// static u8 B_00699C[];
/* .space 0x04 */

// extern u8 B_0069A0[];
// static u8 B_0069A0[];
/* .space 0x08 */

// extern u8 B_0069A8[];
// static u8 B_0069A8[];
/* .space 0x08 */

// extern u8 B_0069B0[];
// static u8 B_0069B0[];
/* .space 0x04 */

// extern u8 B_0069B4[];
// static u8 B_0069B4[];
/* .space 0x04 */

// extern u8 B_0069B8[];
// static u8 B_0069B8[];
/* .space 0x04 */

// extern u8 B_0069BC[];
// static u8 B_0069BC[];
/* .space 0x04 */

// extern u8 B_0069C0[];
// static u8 B_0069C0[];
/* .space 0x04 */

// extern u8 B_0069C4[];
// static u8 B_0069C4[];
/* .space 0x04 */

// extern u8 B_0069C8[];
// static u8 B_0069C8[];
/* .space 0x04 */

// extern u8 B_0069CC[];
// static u8 B_0069CC[];
/* .space 0x04 */

// extern u8 B_0069D0[];
// static u8 B_0069D0[];
/* .space 0x04 */

// extern u8 B_0069D4[];
// static u8 B_0069D4[];
/* .space 0x0C */

// extern u8 B_0069E0[];
// static u8 B_0069E0[];
/* .space 0x02 */

// extern u8 B_0069E2[];
// static u8 B_0069E2[];
/* .space 0x80E */

// extern u8 B_0071F0[];
// static u8 B_0071F0[];
/* .space 0x810 */

// extern u8 B_007A00[];
// static u8 B_007A00[];
/* .space 0x810 */

// extern u8 B_008210[];
// static u8 B_008210[];
/* .space 0x02 */

// extern u8 B_008212[];
// static u8 B_008212[];
/* .space 0x80E */

// extern u8 B_008A20[];
// static u8 B_008A20[];
/* .space 0x802 */

extern u16 B_009222;
// static u16 B_009222;
/* .space 0x02 */

// extern u8 B_009224[];
// static u8 B_009224[];
/* .space 0x02 */

// extern u8 B_009226[];
// static u8 B_009226[];
/* .space 0x02 */

// extern u8 B_009228[];
// static u8 B_009228[];
/* .space 0x04 */

// extern u8 B_00922C[];
// static u8 B_00922C[];
/* .space 0x04 */

// extern u8 B_009230[];
// static u8 B_009230[];
/* .space 0x04 */

// extern u8 B_009234[];
// static u8 B_009234[];
/* .space 0x04 */

// extern u8 B_009238[];
// static u8 B_009238[];
/* .space 0x04 */

// extern u8 B_00923C[];
// static u8 B_00923C[];
/* .space 0x04 */

// extern u8 B_009240[];
// static u8 B_009240[];
/* .space 0x04 */

// extern u8 B_009244[];
// static u8 B_009244[];
/* .space 0x04 */

// extern u8 B_009248[];
// static u8 B_009248[];
/* .space 0x04 */

// extern u8 B_00924C[];
// static u8 B_00924C[];
/* .space 0x04 */

// extern u8 B_009250[];
// static u8 B_009250[];
/* .space 0x04 */

// extern u8 B_009254[];
// static u8 B_009254[];
/* .space 0x04 */

// extern u8 B_009258[];
// static u8 B_009258[];
/* .space 0x01 */

// extern u8 B_009259[];
// static u8 B_009259[];
/* .space 0x01 */

// extern u8 B_00925A[];
// static u8 B_00925A[];
/* .space 0x01 */

// extern u8 B_00925B[];
// static u8 B_00925B[];
/* .space 0x01 */

// extern u8 B_00925C[];
// static u8 B_00925C[];
/* .space 0x04 */

// extern u8 B_009260[];
// static u8 B_009260[];
/* .space 0x04 */

// extern u8 B_009264[];
// static u8 B_009264[];
/* .space 0x04 */

// extern u8 B_009268[];
// static u8 B_009268[];
/* .space 0x04 */

// extern u8 B_00926C[];
// static u8 B_00926C[];
/* .space 0x04 */

// extern u8 B_009270[];
// static u8 B_009270[];
/* .space 0x04 */

// extern u8 B_009274[];
// static u8 B_009274[];
/* .space 0x04 */

// extern u8 B_009278[];
// static u8 B_009278[];
/* .space 0x01 */

// extern u8 B_009279[];
// static u8 B_009279[];
/* .space 0x01 */

// extern u8 B_00927A[];
// static u8 B_00927A[];
/* .space 0x01 */

// extern u8 B_00927B[];
// static u8 B_00927B[];
/* .space 0x01 */

// extern u8 B_00927C[];
// static u8 B_00927C[];
/* .space 0x04 */

// extern u8 B_009280[];
// static u8 B_009280[];
/* .space 0x04 */

// extern u8 B_009284[];
// static u8 B_009284[];
/* .space 0x04 */

// extern u8 B_009288[];
// static u8 B_009288[];
/* .space 0x04 */

// extern u8 B_00928C[];
// static u8 B_00928C[];
/* .space 0x04 */

// extern u8 B_009290[];
// static u8 B_009290[];
/* .space 0x04 */

// extern u8 B_009294[];
// static u8 B_009294[];
/* .space 0x04 */

// extern u8 B_009298[];
// static u8 B_009298[];
/* .space 0x01 */

// extern u8 B_009299[];
// static u8 B_009299[];
/* .space 0x01 */

// extern u8 B_00929A[];
// static u8 B_00929A[];
/* .space 0x01 */

// extern u8 B_00929B[];
// static u8 B_00929B[];
/* .space 0x01 */

// extern u8 B_00929C[];
// static u8 B_00929C[];
/* .space 0x04 */

// extern u8 B_0092A0[];
// static u8 B_0092A0[];
/* .space 0x04 */

// extern u8 B_0092A4[];
// static u8 B_0092A4[];
/* .space 0x04 */

// extern u8 B_0092A8[];
// static u8 B_0092A8[];
/* .space 0x04 */

// extern u8 B_0092AC[];
// static u8 B_0092AC[];
/* .space 0x04 */

// extern u8 B_0092B0[];
// static u8 B_0092B0[];
/* .space 0x04 */

// extern u8 B_0092B4[];
// static u8 B_0092B4[];
/* .space 0x04 */

// extern u8 B_0092B8[];
// static u8 B_0092B8[];
/* .space 0x01 */

// extern u8 B_0092B9[];
// static u8 B_0092B9[];
/* .space 0x01 */

// extern u8 B_0092BA[];
// static u8 B_0092BA[];
/* .space 0x01 */

// extern u8 B_0092BB[];
// static u8 B_0092BB[];
/* .space 0x01 */

// extern u8 B_0092BC[];
// static u8 B_0092BC[];
/* .space 0x04 */

// extern u8 B_0092C0[];
// static u8 B_0092C0[];
/* .space 0x800 */

// extern u8 B_009AC0[];
// static u8 B_009AC0[];
/* .space 0x300 */

// extern u8 B_009DC0[];
// static u8 B_009DC0[];
/* .space 0x300 */

// extern u8 B_00A0C0[];
// static u8 B_00A0C0[];
/* .space 0x04 */

// extern u8 B_00A0C4[];
// static u8 B_00A0C4[];
/* .space 0x04 */

// extern u8 B_00A0C8[];
// static u8 B_00A0C8[];
/* .space 0x04 */

// extern u8 B_00A0CC[];
// static u8 B_00A0CC[];
/* .space 0x04 */

// extern u8 B_00A0D0[];
// static u8 B_00A0D0[];
/* .space 0x04 */

// extern u8 B_00A0D4[];
// static u8 B_00A0D4[];
/* .space 0x04 */

// extern u8 B_00A0D8[];
// static u8 B_00A0D8[];
/* .space 0x04 */

// extern u8 B_00A0DC[];
// static u8 B_00A0DC[];
/* .space 0x04 */

// extern u8 B_00A0E0[];
// static u8 B_00A0E0[];
/* .space 0x04 */

// extern u8 B_00A0E4[];
// static u8 B_00A0E4[];
/* .space 0x04 */

// extern u8 B_00A0E8[];
// static u8 B_00A0E8[];
/* .space 0x04 */

// extern u8 B_00A0EC[];
// static u8 B_00A0EC[];
/* .space 0x04 */

// extern u8 B_00A0F0[];
// static u8 B_00A0F0[];
/* .space 0x04 */

// extern u8 B_00A0F4[];
// static u8 B_00A0F4[];
/* .space 0x04 */

// extern u8 B_00A0F8[];
// static u8 B_00A0F8[];
/* .space 0x04 */

// extern u8 B_00A0FC[];
// static u8 B_00A0FC[];
/* .space 0x04 */

// extern u8 B_00A100[];
// static u8 B_00A100[];
/* .space 0x04 */

// extern u8 B_00A104[];
// static u8 B_00A104[];
/* .space 0x04 */

// extern u8 B_00A108[];
// static u8 B_00A108[];
/* .space 0x04 */

// extern u8 B_00A10C[];
// static u8 B_00A10C[];
/* .space 0x04 */

// extern u8 B_00A110[];
// static u8 B_00A110[];
/* .space 0x80 */

// extern u8 B_00A190[];
// static u8 B_00A190[];
/* .space 0x20 */

// extern u8 B_00A1B0[];
// static u8 B_00A1B0[];
/* .space 0x20 */


typedef struct struct_00000040_arg0 {
    /* 0x0 */ u32 unk_0;
    /* 0x4 */ s32 unk_4;
    /* 0x8 */ s32 *unk_8;
} struct_00000040_arg0; // size >= 0xC

typedef struct struct_00000040_arg1 {
    /* 0x000 */ char unk_000[2];
    /* 0x002 */ u16 unk_002[UNK_SIZE];
    /* 0x000 */ char unk_004[0x3FE];
    /* 0x402 */ u16 unk_402[UNK_SIZE];
} struct_00000040_arg1; // size >= 0x204

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

INCLUDE_ASM("asm/functions/hvqm2dec1", func_000002F8);

INCLUDE_ASM("asm/functions/hvqm2dec1", func_000004A8);

INCLUDE_ASM("asm/functions/hvqm2dec1", func_0000061C);

void func_000012E4(u16 *arg0, u16 *arg1, u16 *arg2, u16 *arg3);
INCLUDE_ASM("asm/functions/hvqm2dec1", func_000012E4);

void func_0000187C(u16 *arg0, u16 *arg1, u16 *arg2, u16 *arg3) ;
INCLUDE_ASM("asm/functions/hvqm2dec1", func_0000187C);

INCLUDE_ASM("asm/functions/hvqm2dec1", func_000029F8);

INCLUDE_ASM("asm/functions/hvqm2dec1", func_000033D8);

// not even attempted
#if 0
s16 func_000002F8(struct_00000040_arg0 *, u16 *);   /* extern */
s8 func_000004A8(u8 *, struct_00000040_arg0 *, struct_00000040_arg0 *, u8 *); /* extern */
? func_000033D8(u16 *, u8 *, u8 *, u8 *);           /* extern */
extern u8 B_005EB0;
extern u32 B_006914;
extern s32 B_006918;
extern s32 *B_00691C;
extern struct_00000040_arg0 B_006920;
extern s32 B_006924;
extern s32 *B_006928;
extern struct_00000040_arg0 B_006930;
extern s32 B_006934;
extern s32 *B_006938;
extern struct_00000040_arg0 B_00693C;
extern s32 B_006940;
extern s32 *B_006944;
extern struct_00000040_arg0 B_006948;
extern s32 B_00694C;
extern s32 *B_006950;
extern struct_00000040_arg0 B_006954;
extern s32 B_006958;
extern s32 *B_00695C;
extern struct_00000040_arg0 B_006960;
extern void *B_006968;
extern s32 B_00696C;
extern void *B_006974;
extern s32 B_006978;
extern s32 B_006980;
extern struct_00000040_arg0 B_006988;
extern void *B_006990;
extern struct_00000040_arg0 B_006994;
extern void *B_00699C;
extern struct_00000040_arg0 B_0069A0;
extern s32 B_0069A8;
extern u32 B_0069B0;
extern s32 B_0069B4;
extern s32 *B_0069B8;
extern u32 B_0069BC;
extern s32 B_0069C0;
extern s32 *B_0069C4;
extern u32 B_0069C8;
extern s32 B_0069CC;
extern s32 *B_0069D0;
extern void *B_0069D4;
extern struct_00000040_arg1 B_0069E0;
extern struct_00000040_arg1 B_0071F0;
extern struct_00000040_arg1 B_007A00;
extern struct_00000040_arg1 B_008210;
extern struct_00000040_arg1 B_008A20;
extern u16 *B_009228;
extern u8 *B_00922C;
extern u8 *B_009230;
extern u8 *B_009234;
extern u8 *B_009238;
extern u8 *B_00923C;
extern u16 *B_009248;
extern u8 *B_00924C;
extern u16 *B_009250;
extern u8 *B_009254;
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
    s16 temp_v0_63;
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
    s8 temp_s0_5;
    s8 temp_s0_6;
    s8 temp_v0_54;
    s8 temp_v0_57;
    s8 temp_v0_58;
    s8 temp_v0_59;
    s8 temp_v0_60;
    u16 *temp_a0_11;
    u16 *temp_a0_13;
    u16 *temp_a0_7;
    u16 *temp_a0_9;
    u16 *temp_a1;
    u16 *temp_a1_2;
    u16 *temp_a1_3;
    u16 *temp_a1_4;
    u16 *temp_v1_31;
    u16 *temp_v1_32;
    u16 *temp_v1_33;
    u16 *temp_v1_34;
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
    u32 *var_a0_3;
    u32 temp_a0_2;
    u32 temp_s2_2;
    u32 temp_s2_3;
    u32 temp_s2_4;
    u32 var_v0_4;
    u8 *temp_a0_10;
    u8 *temp_a0_12;
    u8 *temp_a0_14;
    u8 *temp_a0_15;
    u8 *temp_a0_16;
    u8 *temp_a0_17;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *temp_a0_8;
    u8 *temp_a3;
    u8 *temp_a3_2;
    u8 *temp_a3_3;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    u8 *temp_v0_5;
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
        if (var_t1 > 0) {
            do {
                var_a1 = B_00A0E0;
                var_t0 = var_a0;
                var_v1 = var_a3;
                if (var_a1 > 0) {
                    do {
                        temp_v0 = *var_v1;
                        var_v1 += 2;
                        var_a1 -= 1;
                        *var_t0 = temp_v0;
                        var_t0 += 2;
                    } while (var_a1 > 0);
                }
                var_t1 -= 1;
                var_a0 = &var_a0[B_00A0C4];
                var_a3 = &var_a3[B_00A0C4];
            } while (var_t1 > 0);
        }
    } else {
        B_009228 = workbuf;
        temp_v0_2 = workbuf + B_00A0F0;
        B_009234 = temp_v0_2;
        temp_v0_3 = &temp_v0_2[B_00A0F0];
        B_00922C = temp_v0_3;
        temp_v0_4 = &temp_v0_3[B_00A0FC];
        B_009238 = temp_v0_4;
        temp_v0_5 = &temp_v0_4[B_00A0FC];
        B_009230 = temp_v0_5;
        B_00923C = &temp_v0_5[B_00A0FC];

        temp_v1 = code + ((HVQM2Frame*)code)->basisnum_offset[0];
        if (*temp_v1 != 0) {
            B_006938 = temp_v1 + 4;
            B_006930.unk_0 = 0;
            if (&B_0071F0 != NULL) {
                B_009222 = 0x100;
                B_0071F0.unk_0 = func_00000040(&B_006930, &B_0071F0);
            }
        } else {
            B_006938 = NULL;
            B_006930.unk_0 = 0;
        }
        temp_v1_2 = code + ((HVQM2Frame*)code)->basisnum_offset[1];
        if (*temp_v1_2 != 0) {
            B_0071F0 = (void *) (temp_v1_2 + 4);
        } else {
            B_006944 = NULL;
        }
        B_00693C.unk_0 = 0;
        temp_v1_3 = code + ((HVQM2Frame*)code)->basnumrn_offset[0];
        if (*temp_v1_3 != 0) {
            B_006950 = temp_v1_3 + 4;
            B_006948.unk_0 = 0;
            if (&B_007A00 != NULL) {
                B_009222 = 0x100;
                B_007A00.unk_0 = func_00000040(&B_006948, &B_007A00);
            }
        } else {
            B_006950 = NULL;
            B_006948.unk_0 = 0;
        }
        temp_v1_4 = code + ((HVQM2Frame*)code)->basnumrn_offset[1];
        if (*temp_v1_4 != 0) {
            B_007A00 = (void *) (temp_v1_4 + 4);
        } else {
            B_00695C = NULL;
        }
        B_006954.unk_0 = 0;
        temp_v1_5 = code + ((HVQM2Frame*)code)->scale_offset[0];
        if (*temp_v1_5 != 0) {
            B_006968 = temp_v1_5 + 4;
            B_006960.unk_0 = 0;
            if (&B_008210 != NULL) {
                B_009222 = 0x100;
                B_008210.unk_0 = func_00000040(&B_006960, &B_008210);
            }
        } else {
            B_006968 = NULL;
            B_006960.unk_0 = 0;
        }
        temp_v1_6 = code + ((HVQM2Frame*)code)->scale_offset[1];
        if (*temp_v1_6 != 0) {
            B_008210 = (void *) (temp_v1_6 + 4);
        } else {
            B_006974 = NULL;
        }
        B_00696C = 0;
        temp_v1_7 = code + ((HVQM2Frame*)code)->scale_offset[2];
        if (*temp_v1_7 != 0) {
            B_006974 = temp_v1_7 + 4;
        } else {
            B_006980 = 0;
        }
        B_006978 = 0;
        temp_v1_8 = code + ((HVQM2Frame*)code)->dcval_offset[0];
        if (*temp_v1_8 != 0) {
            B_006990 = temp_v1_8 + 4;
            B_006988.unk_0 = 0;
            if (&B_0069E0 != NULL) {
                B_009222 = 0x100;
                B_0069E0.unk_0 = func_00000040(&B_006988, &B_0069E0);
            }
        } else {
            B_006990 = NULL;
            B_006988.unk_0 = 0;
        }
        temp_v1_9 = code + ((HVQM2Frame*)code)->dcval_offset[1];
        if (*temp_v1_9 != 0) {
            B_0069E0 = (void *) (temp_v1_9 + 4);
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
        var_a1_2 = 0;
        var_a0_2 = &B_0069D4;
        do {
            temp_v0_6 = ((HVQM2Frame*)code)->fixvl_offset[var_a1_2];
            var_a1_2 += 1;
            *var_a0_2 = code + temp_v0_6 + 4;
            var_a0_2 += 4;
        } while (var_a1_2 < 3);
        B_00A100 = &B_005EB0;
        switch (format) {                           /* irregular */
            case 0x0:
                var_a2 = 0;
                var_a0_3 = &B_0069B0;
                sp2C = (u8*)code + sizeof(HVQM2Frame);
                do {
                    temp_v1_11 = code + sp2C->dcrun_offset[var_a2];
                    if (*temp_v1_11 != 0) {
                        var_a0_3->unk_8 = (void *) (temp_v1_11 + 4);
                    } else {
                        var_a0_3->unk_8 = NULL;
                    }
                    var_a0_3->unk_0 = 0;
                    var_a0_3 += 0xC;
                    var_a2 += 1;
                } while (var_a2 < 3);
                var_t0_2 = B_00A0F0;
                var_a2_2 = B_009228;
                if (var_t0_2 > 0) {
                    do {
                        var_a1_4 = B_0071F0.unk_0;
                        var_v1_3 = var_a1_4;
                        if ((s16) B_0071F0.unk_0 >= 0x100) {
                            do {
                                if (B_006930.unk_0 == 0) {
                                    temp_v0_7 = B_006938;
                                    B_006938 = temp_v0_7 + 4;
                                    B_006930.unk_0 = 0x80000000;
                                    B_006934 = *temp_v0_7;
                                }
                                temp_v1_12 = B_006934 & B_006930.unk_0;
                                B_006930.unk_0 = (u32) B_006930.unk_0 >> 1;
                                temp_v0_8 = var_a1_4 << 0x10;
                                if (temp_v1_12 != 0) {
                                    var_a1_4 = ((temp_v0_8 >> 0xF) + &B_0071F0)->unk_402;
                                    var_v0 = var_a1_4 << 0x10;
                                } else {
                                    var_a1_4 = ((temp_v0_8 >> 0xF) + &B_0071F0)->unk_2;
                                    var_v0 = var_a1_4 << 0x10;
                                }
                                var_v1_3 = var_a1_4;
                            } while ((var_v0 >> 0x10) >= 0x100);
                        }
                        if (var_v1_3 & 0xFF) {
                            *var_a2_2 = (s8) var_v1_3;
                            var_a2_2 += 1;
                            var_t0_2 -= 1;
                        } else {
                            var_a1_5 = B_007A00.unk_0;
                            var_v0_2 = var_a1_5 & 0xFF;
                            if ((s16) B_007A00.unk_0 >= 0x100) {
                                do {
                                    if (B_006948.unk_0 == 0) {
                                        temp_v0_9 = B_006950;
                                        B_006950 = temp_v0_9 + 4;
                                        B_006948.unk_0 = 0x80000000;
                                        B_00694C = *temp_v0_9;
                                    }
                                    temp_v1_13 = B_00694C & B_006948.unk_0;
                                    B_006948.unk_0 = (u32) B_006948.unk_0 >> 1;
                                    temp_v0_10 = var_a1_5 << 0x10;
                                    if (temp_v1_13 != 0) {
                                        var_a1_5 = ((temp_v0_10 >> 0xF) + &B_007A00)->unk_402;
                                        var_v0_3 = var_a1_5 << 0x10;
                                    } else {
                                        var_a1_5 = ((temp_v0_10 >> 0xF) + &B_007A00)->unk_2;
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
                var_t0_3 = B_00A0FC;
                var_a2_3 = B_00922C;
                var_a3_2 = B_009230;
                if (var_t0_3 > 0) {
                    do {
                        var_a1_6 = B_0071F0.unk_0;
                        var_v0_4 = var_a1_6 & 0xFF;
                        if ((s16) B_0071F0.unk_0 >= 0x100) {
                            do {
                                if (B_00693C.unk_0 == 0) {
                                    temp_v0_11 = B_006944;
                                    B_006944 = temp_v0_11 + 4;
                                    B_00693C.unk_0 = 0x80000000;
                                    B_006940 = *temp_v0_11;
                                }
                                temp_v1_14 = B_006940 & B_00693C.unk_0;
                                B_00693C.unk_0 = (u32) B_00693C.unk_0 >> 1;
                                temp_v0_12 = var_a1_6 << 0x10;
                                if (temp_v1_14 != 0) {
                                    var_a1_6 = ((temp_v0_12 >> 0xF) + &B_0071F0)->unk_402;
                                    var_v0_5 = var_a1_6 << 0x10;
                                } else {
                                    var_a1_6 = ((temp_v0_12 >> 0xF) + &B_0071F0)->unk_2;
                                    var_v0_5 = var_a1_6 << 0x10;
                                }
                                var_v0_4 = var_a1_6 & 0xFF;
                            } while ((var_v0_5 >> 0x10) >= 0x100);
                        }
                        if (var_v0_4 == 0) {
                            var_a1_7 = B_007A00.unk_0;
                            var_v0_6 = var_a1_7 & 0xFF;
                            if ((s16) B_007A00.unk_0 >= 0x100) {
                                do {
                                    if (B_006954.unk_0 == 0) {
                                        temp_v0_13 = B_00695C;
                                        B_00695C = temp_v0_13 + 4;
                                        B_006954.unk_0 = 0x80000000;
                                        B_006958 = *temp_v0_13;
                                    }
                                    temp_v1_15 = B_006958 & B_006954.unk_0;
                                    B_006954.unk_0 = (u32) B_006954.unk_0 >> 1;
                                    temp_v0_14 = var_a1_7 << 0x10;
                                    if (temp_v1_15 != 0) {
                                        var_a1_7 = ((temp_v0_14 >> 0xF) + &B_007A00)->unk_402;
                                        var_v0_7 = var_a1_7 << 0x10;
                                    } else {
                                        var_a1_7 = ((temp_v0_14 >> 0xF) + &B_007A00)->unk_2;
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
                                var_a1_8 = B_007A00.unk_0;
                                if ((s16) B_007A00.unk_0 >= 0x100) {
                                    do {
                                        if (B_0069B0 == 0) {
                                            temp_v0_15 = B_0069B8;
                                            B_0069B8 = temp_v0_15 + 4;
                                            B_0069B0 = 0x80000000;
                                            B_0069B4 = *temp_v0_15;
                                        }
                                        temp_v1_16 = B_0069B4 & B_0069B0;
                                        B_0069B0 = (u32) B_0069B0 >> 1;
                                        temp_v0_16 = var_a1_8 << 0x10;
                                        if (temp_v1_16 != 0) {
                                            var_a1_8 = ((temp_v0_16 >> 0xF) + &B_007A00)->unk_402;
                                            var_v0_9 = var_a1_8 << 0x10;
                                        } else {
                                            var_a1_8 = ((temp_v0_16 >> 0xF) + &B_007A00)->unk_2;
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
                            var_v0_10 = func_000002F8(&B_006988);
                            if (var_v0_10 == 0) {
                                var_a1_9 = B_007A00.unk_0;
                                if ((s16) B_007A00.unk_0 < 0x100) {
                                    sp10 = (u8) var_a1_9;
                                } else {
                                    do {
                                        if (B_0069B0 == 0) {
                                            temp_v0_17 = B_0069B8;
                                            B_0069B8 = temp_v0_17 + 4;
                                            B_0069B0 = 0x80000000;
                                            B_0069B4 = *temp_v0_17;
                                        }
                                        temp_v1_17 = B_0069B4 & B_0069B0;
                                        B_0069B0 = (u32) B_0069B0 >> 1;
                                        temp_v0_18 = var_a1_9 << 0x10;
                                        if (temp_v1_17 != 0) {
                                            var_a1_9 = ((temp_v0_18 >> 0xF) + &B_007A00)->unk_402;
                                            var_v0_11 = var_a1_9 << 0x10;
                                        } else {
                                            var_a1_9 = ((temp_v0_18 >> 0xF) + &B_007A00)->unk_2;
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
                            var_v0_12 = func_000002F8(&B_006994);
                            if (var_v0_12 == 0) {
                                var_a1_10 = B_007A00.unk_0;
                                if ((s16) B_007A00.unk_0 < 0x100) {
                                    sp11 = (u8) var_a1_10;
                                } else {
                                    do {
                                        if (B_0069BC == 0) {
                                            temp_v0_19 = B_0069C4;
                                            B_0069C4 = temp_v0_19 + 4;
                                            B_0069BC = 0x80000000;
                                            B_0069C0 = *temp_v0_19;
                                        }
                                        temp_v1_18 = B_0069C0 & B_0069BC;
                                        B_0069BC = (u32) B_0069BC >> 1;
                                        temp_v0_20 = var_a1_10 << 0x10;
                                        if (temp_v1_18 != 0) {
                                            var_a1_10 = ((temp_v0_20 >> 0xF) + &B_007A00)->unk_402;
                                            var_v0_13 = var_a1_10 << 0x10;
                                        } else {
                                            var_a1_10 = ((temp_v0_20 >> 0xF) + &B_007A00)->unk_2;
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
                            var_v0_14 = func_000002F8(&B_0069A0);
                            if (var_v0_14 == 0) {
                                var_a1_11 = B_007A00.unk_0;
                                if ((s16) B_007A00.unk_0 < 0x100) {
                                    sp12 = (u8) var_a1_11;
                                } else {
                                    do {
                                        if (B_0069C8 == 0) {
                                            temp_v0_21 = B_0069D0;
                                            B_0069D0 = temp_v0_21 + 4;
                                            B_0069C8 = 0x80000000;
                                            B_0069CC = *temp_v0_21;
                                        }
                                        temp_v1_19 = B_0069CC & B_0069C8;
                                        B_0069C8 = (u32) B_0069C8 >> 1;
                                        temp_v0_22 = var_a1_11 << 0x10;
                                        if (temp_v1_19 != 0) {
                                            var_a1_11 = ((temp_v0_22 >> 0xF) + &B_007A00)->unk_402;
                                            var_v0_15 = var_a1_11 << 0x10;
                                        } else {
                                            var_a1_11 = ((temp_v0_22 >> 0xF) + &B_007A00)->unk_2;
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
                if (B_00A0D8 != NULL) {
                    var_s3_2 = B_00A0F4;
                    var_s2_2 = *var_s1;
                    if (var_s3_2 > 0) {
                        do {
                            if (sp10 == 0) {
                                var_v0_16 = func_000002F8(&B_006988);
                                if (var_v0_16 == 0) {
                                    var_a1_12 = B_007A00.unk_0;
                                    if ((s16) B_007A00.unk_0 < 0x100) {
                                        sp10 = (u8) var_a1_12;
                                    } else {
                                        do {
                                            if (B_0069B0 == 0) {
                                                temp_v0_23 = B_0069B8;
                                                B_0069B8 = temp_v0_23 + 4;
                                                B_0069B0 = 0x80000000;
                                                B_0069B4 = *temp_v0_23;
                                            }
                                            temp_v1_20 = B_0069B4 & B_0069B0;
                                            B_0069B0 = (u32) B_0069B0 >> 1;
                                            temp_v0_24 = var_a1_12 << 0x10;
                                            if (temp_v1_20 != 0) {
                                                var_a1_12 = ((temp_v0_24 >> 0xF) + &B_007A00)->unk_402;
                                                var_v0_17 = var_a1_12 << 0x10;
                                            } else {
                                                var_a1_12 = ((temp_v0_24 >> 0xF) + &B_007A00)->unk_2;
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
                                var_v0_18 = func_000002F8(&B_006988);
                                if (var_v0_18 == 0) {
                                    var_a1_13 = B_007A00.unk_0;
                                    if ((s16) B_007A00.unk_0 < 0x100) {
                                        sp10 = (u8) var_a1_13;
                                    } else {
                                        do {
                                            if (B_0069B0 == 0) {
                                                temp_v0_26 = B_0069B8;
                                                B_0069B8 = temp_v0_26 + 4;
                                                B_0069B0 = 0x80000000;
                                                B_0069B4 = *temp_v0_26;
                                            }
                                            temp_v1_21 = B_0069B4 & B_0069B0;
                                            B_0069B0 = (u32) B_0069B0 >> 1;
                                            temp_v0_27 = var_a1_13 << 0x10;
                                            if (temp_v1_21 != 0) {
                                                var_a1_13 = ((temp_v0_27 >> 0xF) + &B_007A00)->unk_402;
                                                var_v0_19 = var_a1_13 << 0x10;
                                            } else {
                                                var_a1_13 = ((temp_v0_27 >> 0xF) + &B_007A00)->unk_2;
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
                                        var_a1_14 = B_007A00.unk_0;
                                        if ((s16) B_007A00.unk_0 >= 0x100) {
                                            do {
                                                if (B_0069B0 == 0) {
                                                    temp_v0_29 = B_0069B8;
                                                    B_0069B8 = temp_v0_29 + 4;
                                                    B_0069B0 = 0x80000000;
                                                    B_0069B4 = *temp_v0_29;
                                                }
                                                temp_v1_22 = B_0069B4 & B_0069B0;
                                                B_0069B0 = (u32) B_0069B0 >> 1;
                                                temp_v0_30 = var_a1_14 << 0x10;
                                                if (temp_v1_22 != 0) {
                                                    var_a1_14 = ((temp_v0_30 >> 0xF) + &B_007A00)->unk_402;
                                                    var_v0_21 = var_a1_14 << 0x10;
                                                } else {
                                                    var_a1_14 = ((temp_v0_30 >> 0xF) + &B_007A00)->unk_2;
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
                                    var_v0_22 = func_000002F8(&B_006988);
                                    if (var_v0_22 == 0) {
                                        var_a1_15 = B_007A00.unk_0;
                                        if ((s16) B_007A00.unk_0 < 0x100) {
                                            sp10 = (u8) var_a1_15;
                                        } else {
                                            do {
                                                if (B_0069B0 == 0) {
                                                    temp_v0_32 = B_0069B8;
                                                    B_0069B8 = temp_v0_32 + 4;
                                                    B_0069B0 = 0x80000000;
                                                    B_0069B4 = *temp_v0_32;
                                                }
                                                temp_v1_23 = B_0069B4 & B_0069B0;
                                                B_0069B0 = (u32) B_0069B0 >> 1;
                                                temp_v0_33 = var_a1_15 << 0x10;
                                                if (temp_v1_23 != 0) {
                                                    var_a1_15 = ((temp_v0_33 >> 0xF) + &B_007A00)->unk_402;
                                                    var_v0_23 = var_a1_15 << 0x10;
                                                } else {
                                                    var_a1_15 = ((temp_v0_33 >> 0xF) + &B_007A00)->unk_2;
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
                                    var_v0_24 = func_000002F8(&B_006994);
                                    if (var_v0_24 == 0) {
                                        var_a1_16 = B_007A00.unk_0;
                                        if ((s16) B_007A00.unk_0 < 0x100) {
                                            sp11 = (u8) var_a1_16;
                                        } else {
                                            do {
                                                if (B_0069BC == 0) {
                                                    temp_v0_35 = B_0069C4;
                                                    B_0069C4 = temp_v0_35 + 4;
                                                    B_0069BC = 0x80000000;
                                                    B_0069C0 = *temp_v0_35;
                                                }
                                                temp_v1_24 = B_0069C0 & B_0069BC;
                                                B_0069BC = (u32) B_0069BC >> 1;
                                                temp_v0_36 = var_a1_16 << 0x10;
                                                if (temp_v1_24 != 0) {
                                                    var_a1_16 = ((temp_v0_36 >> 0xF) + &B_007A00)->unk_402;
                                                    var_v0_25 = var_a1_16 << 0x10;
                                                } else {
                                                    var_a1_16 = ((temp_v0_36 >> 0xF) + &B_007A00)->unk_2;
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
                                    var_v0_26 = func_000002F8(&B_0069A0);
                                    if (var_v0_26 == 0) {
                                        var_a1_17 = B_007A00.unk_0;
                                        if ((s16) B_007A00.unk_0 < 0x100) {
                                            sp12 = (u8) var_a1_17;
                                        } else {
                                            do {
                                                if (B_0069C8 == 0) {
                                                    temp_v0_38 = B_0069D0;
                                                    B_0069D0 = temp_v0_38 + 4;
                                                    B_0069C8 = 0x80000000;
                                                    B_0069CC = *temp_v0_38;
                                                }
                                                temp_v1_25 = B_0069CC & B_0069C8;
                                                B_0069C8 = (u32) B_0069C8 >> 1;
                                                temp_v0_39 = var_a1_17 << 0x10;
                                                if (temp_v1_25 != 0) {
                                                    var_a1_17 = ((temp_v0_39 >> 0xF) + &B_007A00)->unk_402;
                                                    var_v0_27 = var_a1_17 << 0x10;
                                                } else {
                                                    var_a1_17 = ((temp_v0_39 >> 0xF) + &B_007A00)->unk_2;
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
                        if (B_00A0D8 != NULL) {
                            var_s3_4 = B_00A0F4;
                            var_s2_4 = *var_s1;
                            if (var_s3_4 > 0) {
                                do {
                                    if (sp10 == 0) {
                                        var_v0_28 = func_000002F8(&B_006988);
                                        if (var_v0_28 == 0) {
                                            var_a1_18 = B_007A00.unk_0;
                                            if ((s16) B_007A00.unk_0 < 0x100) {
                                                sp10 = (u8) var_a1_18;
                                            } else {
                                                do {
                                                    if (B_0069B0 == 0) {
                                                        temp_v0_41 = B_0069B8;
                                                        B_0069B8 = temp_v0_41 + 4;
                                                        B_0069B0 = 0x80000000;
                                                        B_0069B4 = *temp_v0_41;
                                                    }
                                                    temp_v1_26 = B_0069B4 & B_0069B0;
                                                    B_0069B0 = (u32) B_0069B0 >> 1;
                                                    temp_v0_42 = var_a1_18 << 0x10;
                                                    if (temp_v1_26 != 0) {
                                                        var_a1_18 = ((temp_v0_42 >> 0xF) + &B_007A00)->unk_402;
                                                        var_v0_29 = var_a1_18 << 0x10;
                                                    } else {
                                                        var_a1_18 = ((temp_v0_42 >> 0xF) + &B_007A00)->unk_2;
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
                                        var_v0_30 = func_000002F8(&B_006988);
                                        if (var_v0_30 == 0) {
                                            var_a1_19 = B_007A00.unk_0;
                                            if ((s16) B_007A00.unk_0 < 0x100) {
                                                sp10 = (u8) var_a1_19;
                                            } else {
                                                do {
                                                    if (B_0069B0 == 0) {
                                                        temp_v0_44 = B_0069B8;
                                                        B_0069B8 = temp_v0_44 + 4;
                                                        B_0069B0 = 0x80000000;
                                                        B_0069B4 = *temp_v0_44;
                                                    }
                                                    temp_v1_27 = B_0069B4 & B_0069B0;
                                                    B_0069B0 = (u32) B_0069B0 >> 1;
                                                    temp_v0_45 = var_a1_19 << 0x10;
                                                    if (temp_v1_27 != 0) {
                                                        var_a1_19 = ((temp_v0_45 >> 0xF) + &B_007A00)->unk_402;
                                                        var_v0_31 = var_a1_19 << 0x10;
                                                    } else {
                                                        var_a1_19 = ((temp_v0_45 >> 0xF) + &B_007A00)->unk_2;
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
block_348:
                func_000033D8(sp1C, var_a1_21, var_a2_4, var_a3_5);
                return;
            case 0x1:
                temp_v1_28 = code + ((HVQM2PredictFrame*)((u8*)code + sizeof(HVQM2Frame)))->movevector_offset;
                if (*temp_v1_28 != 0) {
                    B_006928 = temp_v1_28 + 4;
                    B_006920.unk_0 = 0;
                    if (&B_008A20 != NULL) {
                        B_009222 = 0x100;
                        B_008A20.unk_0 = func_00000040(&B_006920, &B_008A20);
                    }
                } else {
                    B_006928 = NULL;
                    B_006920.unk_0 = 0;
                }
                temp_a0 = code + ((HVQM2PredictFrame*)((u8*)code + sizeof(HVQM2Frame)))->macroblock_offset;
                if (*temp_a0 != 0) {
                    B_008A20 = (void *) (temp_a0 + 4);
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
                B_009248 = B_009228;
                B_00924C = B_009234;
                sp6C = sp1C;
                B_009250 = B_009228 + B_00A0E8;
                B_009254 = &B_009234[B_00A0E8];
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
                                    var_a1_22 = B_008A20.unk_0;
                                    if ((s16) B_008A20.unk_0 >= 0x100) {
                                        do {
                                            if (B_006920.unk_0 == 0) {
                                                temp_v0_50 = B_006928;
                                                B_006928 = temp_v0_50 + 4;
                                                B_006920.unk_0 = 0x80000000;
                                                B_006924 = *temp_v0_50;
                                            }
                                            temp_v1_29 = B_006924 & B_006920.unk_0;
                                            B_006920.unk_0 = (u32) B_006920.unk_0 >> 1;
                                            temp_v0_51 = var_a1_22 << 0x10;
                                            if (temp_v1_29 != 0) {
                                                var_a1_22 = ((temp_v0_51 >> 0xF) + &B_008A20)->unk_402;
                                                var_v0_32 = var_a1_22 << 0x10;
                                            } else {
                                                var_a1_22 = ((temp_v0_51 >> 0xF) + &B_008A20)->unk_2;
                                                var_v0_32 = var_a1_22 << 0x10;
                                            }
                                        } while ((var_v0_32 >> 0x10) >= 0x100);
                                    }
                                    var_a1_23 = B_008A20.unk_0;
                                    sp77 += var_a1_22 & 0xFF;
                                    if ((s16) B_008A20.unk_0 >= 0x100) {
                                        do {
                                            if (B_006920.unk_0 == 0) {
                                                temp_v0_52 = B_006928;
                                                B_006928 = temp_v0_52 + 4;
                                                B_006920.unk_0 = 0x80000000;
                                                B_006924 = *temp_v0_52;
                                            }
                                            temp_v1_30 = B_006924 & B_006920.unk_0;
                                            B_006920.unk_0 = (u32) B_006920.unk_0 >> 1;
                                            temp_v0_53 = var_a1_23 << 0x10;
                                            if (temp_v1_30 != 0) {
                                                var_a1_23 = ((temp_v0_53 >> 0xF) + &B_008A20)->unk_402;
                                                var_v0_33 = var_a1_23 << 0x10;
                                            } else {
                                                var_a1_23 = ((temp_v0_53 >> 0xF) + &B_008A20)->unk_2;
                                                var_v0_33 = var_a1_23 << 0x10;
                                            }
                                        } while ((var_v0_33 >> 0x10) >= 0x100);
                                    }
                                    temp_v0_54 = sp7F + (var_a1_23 & 0xFF);
                                    var_t0_5 = var_fp_3;
                                    var_a3_6 = 8;
                                    sp7F = temp_v0_54;
                                    var_v1_12 = &(&sp24[var_s6 + (s8) sp77])[(sp84 + temp_v0_54) * B_00A0C4];
                                    do {
                                        var_a2_5 = var_t0_5;
                                        var_a1_24 = var_v1_12;
                                        var_a0_6 = 8;
loop_333:
                                        temp_v0_55 = *var_a1_24;
                                        var_a1_24 += 2;
                                        var_a0_6 -= 1;
                                        *var_a2_5 = temp_v0_55;
                                        var_a2_5 += 2;
                                        if (var_a0_6 != 0) {
                                            goto loop_333;
                                        }
                                        var_a3_6 -= 1;
                                        var_t0_5 = &var_t0_5[B_00A0C4];
                                        var_v1_12 = &var_v1_12[B_00A0C4];
                                    } while (var_a3_6 != 0);
                                    temp_v1_31 = B_009248;
                                    B_009248 = temp_v1_31 + 1;
                                    *temp_v1_31 = 0x80U;
                                    temp_v1_32 = B_009248;
                                    B_009248 = temp_v1_32 + 1;
                                    *temp_v1_32 = 0x80U;
                                    temp_v1_33 = B_009250;
                                    B_00924C += 2;
                                    B_009250 = temp_v1_33 + 1;
                                    *temp_v1_33 = 0x80U;
                                    temp_v1_34 = B_009250;
                                    B_009250 = temp_v1_34 + 1;
                                    *temp_v1_34 = 0x80U;
                                    temp_v1_35 = B_009288;
                                    B_009254 += 2;
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
                                        temp_a1 = B_009248;
                                        B_009248 = temp_a1 + 1;
                                        *temp_a1 = temp_v0_57;
                                        temp_a3 = B_00924C;
                                        temp_s0 = var_s3_5 + func_000002F8(&B_006988, temp_a1);
                                        B_00924C = temp_a3 + 1;
                                        *temp_a3 = temp_s0;
                                        temp_v0_58 = func_000004A8(&sp10, &B_006930, &B_006948, temp_a3);
                                        temp_a1_2 = B_009248;
                                        B_009248 = temp_a1_2 + 1;
                                        *temp_a1_2 = temp_v0_58;
                                        temp_a3_2 = B_00924C;
                                        temp_s0_2 = temp_s0 + func_000002F8(&B_006988, temp_a1_2);
                                        B_00924C = temp_a3_2 + 1;
                                        *temp_a3_2 = temp_s0_2;
                                        temp_v0_59 = func_000004A8(&sp10, &B_006930, &B_006948, temp_a3_2);
                                        temp_a1_3 = B_009250;
                                        B_009250 = temp_a1_3 + 1;
                                        *temp_a1_3 = temp_v0_59;
                                        temp_a3_3 = B_009254;
                                        temp_s0_3 = temp_s0_2 + func_000002F8(&B_006988, temp_a1_3);
                                        B_009254 = temp_a3_3 + 1;
                                        *temp_a3_3 = temp_s0_3;
                                        temp_v0_60 = func_000004A8(&sp10, &B_006930, &B_006948, temp_a3_3);
                                        temp_a1_4 = B_009250;
                                        B_009250 = temp_a1_4 + 1;
                                        *temp_a1_4 = temp_v0_60;
                                        temp_s0_4 = temp_s0_3 + func_000002F8(&B_006988, temp_a1_4);
                                        var_s3_5 = temp_s0_4;
                                        temp_v1_39 = B_009254;
                                        B_009254 = temp_v1_39 + 1;
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
                                        temp_a0_7 = B_009248;
                                        B_009248 = temp_a0_7 + 1;
                                        *temp_a0_7 = 0;
                                        temp_a0_8 = B_00924C;
                                        B_00924C = temp_a0_8 + 1;
                                        *temp_a0_8 = var_s3_5;
                                        temp_a0_9 = B_009248;
                                        B_009248 = temp_a0_9 + 1;
                                        *temp_a0_9 = 0;
                                        temp_a0_10 = B_00924C;
                                        B_00924C = temp_a0_10 + 1;
                                        *temp_a0_10 = var_s3_5;
                                        temp_a0_11 = B_009250;
                                        B_009250 = temp_a0_11 + 1;
                                        *temp_a0_11 = 0;
                                        temp_a0_12 = B_009254;
                                        B_009254 = temp_a0_12 + 1;
                                        *temp_a0_12 = var_s3_5;
                                        temp_a0_13 = B_009250;
                                        B_009250 = temp_a0_13 + 1;
                                        *temp_a0_13 = 0;
                                        temp_a0_14 = B_009254;
                                        B_009254 = temp_a0_14 + 1;
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
                        var_a2_4 = &B_009254[var_a1_21];
                        B_009248 += var_a1_21;
                        B_00924C = &B_00924C[var_a1_21];
                        B_009250 += var_a1_21;
                        B_009254 = var_a2_4;
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
                goto block_348;
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

#define B_009AC0_LEN 0x300

extern s32 B_0092C0[0x200];
extern u8 B_009AC0[B_009AC0_LEN];
extern u8 B_009DC0[B_009AC0_LEN];

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
