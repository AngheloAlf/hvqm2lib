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

// extern u8 B_003D60[];
// STATIC u8 B_003D60[];
/* .space 0x04 */

// extern u8 B_003D64[];
// STATIC u8 B_003D64[];
/* .space 0x04 */

// extern u8 B_003D68[];
// STATIC u8 B_003D68[];
/* .space 0x04 */

// extern u8 B_003D6C[];
// STATIC u8 B_003D6C[];
/* .space 0x04 */

// extern u8 B_003D70[];
// STATIC u8 B_003D70[];
/* .space 0x04 */

// extern u8 B_003D74[];
// STATIC u8 B_003D74[];
/* .space 0x04 */

// extern u8 B_003D78[];
// STATIC u8 B_003D78[];
/* .space 0x08 */

// extern u8 B_003D80[];
// STATIC u8 B_003D80[];
/* .space 0x04 */

// extern u8 B_003D84[];
// STATIC u8 B_003D84[];
/* .space 0x04 */

// extern u8 B_003D88[];
// STATIC u8 B_003D88[];
/* .space 0x04 */

// extern u8 B_003D8C[];
// STATIC u8 B_003D8C[];
/* .space 0x04 */

// extern u8 B_003D90[];
// STATIC u8 B_003D90[];
/* .space 0x04 */

// extern u8 B_003D94[];
// STATIC u8 B_003D94[];
/* .space 0x04 */

// extern u8 B_003D98[];
// STATIC u8 B_003D98[];
/* .space 0x04 */

// extern u8 B_003D9C[];
// STATIC u8 B_003D9C[];
/* .space 0x04 */

// extern u8 B_003DA0[];
// STATIC u8 B_003DA0[];
/* .space 0x04 */

// extern u8 B_003DA4[];
// STATIC u8 B_003DA4[];
/* .space 0x04 */

// extern u8 B_003DA8[];
// STATIC u8 B_003DA8[];
/* .space 0x04 */

// extern u8 B_003DAC[];
// STATIC u8 B_003DAC[];
/* .space 0x04 */

// extern u8 B_003DB0[];
// STATIC u8 B_003DB0[];
/* .space 0x08 */

// extern u8 B_003DB8[];
// STATIC u8 B_003DB8[];
/* .space 0x04 */

// extern u8 B_003DBC[];
// STATIC u8 B_003DBC[];
/* .space 0x08 */

// extern u8 B_003DC4[];
// STATIC u8 B_003DC4[];
/* .space 0x04 */

// extern u8 B_003DC8[];
// STATIC u8 B_003DC8[];
/* .space 0x08 */

// extern u8 B_003DD0[];
// STATIC u8 B_003DD0[];
/* .space 0x08 */

// extern u8 B_003DD8[];
// STATIC u8 B_003DD8[];
/* .space 0x08 */

// extern u8 B_003DE0[];
// STATIC u8 B_003DE0[];
/* .space 0x04 */

// extern u8 B_003DE4[];
// STATIC u8 B_003DE4[];
/* .space 0x08 */

// extern u8 B_003DEC[];
// STATIC u8 B_003DEC[];
/* .space 0x04 */

// extern u8 B_003DF0[];
// STATIC u8 B_003DF0[];
/* .space 0x08 */

// extern u8 B_003DF8[];
// STATIC u8 B_003DF8[];
/* .space 0x08 */

// extern u8 B_003E00[];
// STATIC u8 B_003E00[];
/* .space 0x04 */

// extern u8 B_003E04[];
// STATIC u8 B_003E04[];
/* .space 0x04 */

// extern u8 B_003E08[];
// STATIC u8 B_003E08[];
/* .space 0x04 */

// extern u8 B_003E0C[];
// STATIC u8 B_003E0C[];
/* .space 0x04 */

// extern u8 B_003E10[];
// STATIC u8 B_003E10[];
/* .space 0x04 */

// extern u8 B_003E14[];
// STATIC u8 B_003E14[];
/* .space 0x04 */

// extern u8 B_003E18[];
// STATIC u8 B_003E18[];
/* .space 0x04 */

// extern u8 B_003E1C[];
// STATIC u8 B_003E1C[];
/* .space 0x04 */

// extern u8 B_003E20[];
// STATIC u8 B_003E20[];
/* .space 0x04 */

// extern u8 B_003E24[];
// STATIC u8 B_003E24[];
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

// extern u8 B_005660[];
// STATIC u8 B_005660[];
/* .space 0x02 */

// extern u8 B_005662[];
// STATIC u8 B_005662[];
/* .space 0x80E */

// extern u8 B_005E70[];
// STATIC u8 B_005E70[];
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

// extern u8 B_006678[];
// STATIC u8 B_006678[];
/* .space 0x04 */

// extern u8 B_00667C[];
// STATIC u8 B_00667C[];
/* .space 0x04 */

// extern u8 B_006680[];
// STATIC u8 B_006680[];
/* .space 0x04 */

// extern u8 B_006684[];
// STATIC u8 B_006684[];
/* .space 0x04 */

// extern u8 B_006688[];
// STATIC u8 B_006688[];
/* .space 0x04 */

// extern u8 B_00668C[];
// STATIC u8 B_00668C[];
/* .space 0x04 */

// extern u8 B_006690[];
// STATIC u8 B_006690[];
/* .space 0x04 */

// extern u8 B_006694[];
// STATIC u8 B_006694[];
/* .space 0x04 */

// extern u8 B_006698[];
// STATIC u8 B_006698[];
/* .space 0x04 */

// extern u8 B_00669C[];
// STATIC u8 B_00669C[];
/* .space 0x04 */

// extern u8 B_0066A0[];
// STATIC u8 B_0066A0[];
/* .space 0x04 */

// extern u8 B_0066A4[];
// STATIC u8 B_0066A4[];
/* .space 0x04 */

// extern u8 B_0066A8[];
// STATIC u8 B_0066A8[];
/* .space 0x01 */

// extern u8 B_0066A9[];
// STATIC u8 B_0066A9[];
/* .space 0x01 */

// extern u8 B_0066AA[];
// STATIC u8 B_0066AA[];
/* .space 0x01 */

// extern u8 B_0066AB[];
// STATIC u8 B_0066AB[];
/* .space 0x01 */

// extern u8 B_0066AC[];
// STATIC u8 B_0066AC[];
/* .space 0x04 */

// extern u8 B_0066B0[];
// STATIC u8 B_0066B0[];
/* .space 0x04 */

// extern u8 B_0066B4[];
// STATIC u8 B_0066B4[];
/* .space 0x04 */

// extern u8 B_0066B8[];
// STATIC u8 B_0066B8[];
/* .space 0x04 */

// extern u8 B_0066BC[];
// STATIC u8 B_0066BC[];
/* .space 0x04 */

// extern u8 B_0066C0[];
// STATIC u8 B_0066C0[];
/* .space 0x04 */

// extern u8 B_0066C4[];
// STATIC u8 B_0066C4[];
/* .space 0x04 */

// extern u8 B_0066C8[];
// STATIC u8 B_0066C8[];
/* .space 0x01 */

// extern u8 B_0066C9[];
// STATIC u8 B_0066C9[];
/* .space 0x01 */

// extern u8 B_0066CA[];
// STATIC u8 B_0066CA[];
/* .space 0x01 */

// extern u8 B_0066CB[];
// STATIC u8 B_0066CB[];
/* .space 0x01 */

// extern u8 B_0066CC[];
// STATIC u8 B_0066CC[];
/* .space 0x04 */

// extern u8 B_0066D0[];
// STATIC u8 B_0066D0[];
/* .space 0x04 */

// extern u8 B_0066D4[];
// STATIC u8 B_0066D4[];
/* .space 0x04 */

// extern u8 B_0066D8[];
// STATIC u8 B_0066D8[];
/* .space 0x04 */

// extern u8 B_0066DC[];
// STATIC u8 B_0066DC[];
/* .space 0x04 */

// extern u8 B_0066E0[];
// STATIC u8 B_0066E0[];
/* .space 0x04 */

// extern u8 B_0066E4[];
// STATIC u8 B_0066E4[];
/* .space 0x04 */

// extern u8 B_0066E8[];
// STATIC u8 B_0066E8[];
/* .space 0x01 */

// extern u8 B_0066E9[];
// STATIC u8 B_0066E9[];
/* .space 0x01 */

// extern u8 B_0066EA[];
// STATIC u8 B_0066EA[];
/* .space 0x01 */

// extern u8 B_0066EB[];
// STATIC u8 B_0066EB[];
/* .space 0x01 */

// extern u8 B_0066EC[];
// STATIC u8 B_0066EC[];
/* .space 0x04 */

// extern u8 B_0066F0[];
// STATIC u8 B_0066F0[];
/* .space 0x04 */

// extern u8 B_0066F4[];
// STATIC u8 B_0066F4[];
/* .space 0x04 */

// extern u8 B_0066F8[];
// STATIC u8 B_0066F8[];
/* .space 0x04 */

// extern u8 B_0066FC[];
// STATIC u8 B_0066FC[];
/* .space 0x04 */

// extern u8 B_006700[];
// STATIC u8 B_006700[];
/* .space 0x04 */

// extern u8 B_006704[];
// STATIC u8 B_006704[];
/* .space 0x04 */

// extern u8 B_006708[];
// STATIC u8 B_006708[];
/* .space 0x01 */

// extern u8 B_006709[];
// STATIC u8 B_006709[];
/* .space 0x01 */

// extern u8 B_00670A[];
// STATIC u8 B_00670A[];
/* .space 0x01 */

// extern u8 B_00670B[];
// STATIC u8 B_00670B[];
/* .space 0x01 */

// extern u8 B_00670C[];
// STATIC u8 B_00670C[];
/* .space 0x04 */

// extern u8 B_006710[];
// STATIC u8 B_006710[];
/* .space 0x04 */

// extern u8 B_006714[];
// STATIC u8 B_006714[];
/* .space 0x04 */

// extern u8 B_006718[];
// STATIC u8 B_006718[];
/* .space 0x04 */

// extern u8 B_00671C[];
// STATIC u8 B_00671C[];
/* .space 0x04 */

// extern u8 B_006720[];
// STATIC u8 B_006720[];
/* .space 0x04 */

// extern u8 B_006724[];
// STATIC u8 B_006724[];
/* .space 0x04 */

// extern u8 B_006728[];
// STATIC u8 B_006728[];
/* .space 0x04 */

// extern u8 B_00672C[];
// STATIC u8 B_00672C[];
/* .space 0x04 */

// extern u8 B_006730[];
// STATIC u8 B_006730[];
/* .space 0x04 */

// extern u8 B_006734[];
// STATIC u8 B_006734[];
/* .space 0x04 */

// extern u8 B_006738[];
// STATIC u8 B_006738[];
/* .space 0x04 */

// extern u8 B_00673C[];
// STATIC u8 B_00673C[];
/* .space 0x04 */

// extern u8 B_006740[];
// STATIC u8 B_006740[];
/* .space 0x04 */

// extern u8 B_006744[];
// STATIC u8 B_006744[];
/* .space 0x04 */

// extern u8 B_006748[];
// STATIC u8 B_006748[];
/* .space 0x04 */

// extern u8 B_00674C[];
// STATIC u8 B_00674C[];
/* .space 0x04 */

// extern u8 B_006750[];
// STATIC u8 B_006750[];
/* .space 0x01 */

// extern u8 B_006751[];
// STATIC u8 B_006751[];
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

s32 func_000004A8(u8 *arg0, struct_00000040_arg0 *arg1, struct_00000040_arg0 *arg2) {
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

INCLUDE_ASM("asm/functions/hvqm2decSP1", func_0000061C);

INCLUDE_ASM("asm/functions/hvqm2decSP1", func_000009FC);

INCLUDE_ASM("asm/functions/hvqm2decSP1", func_0000135C);

INCLUDE_ASM("asm/functions/hvqm2decSP1", hvqm2DecodeSP1);

#if 0
extern s16 B_003E32[];
extern s16 B_005662[];
extern s16 B_006674;
extern s16 B_006676;
extern u32 B_006710;
extern s32 B_006714;
extern s32 B_006718;
extern s32 B_00671C;
extern s32 B_006720;
extern s32 B_006724;
extern s32 B_006728;
extern s32 B_00672C;
extern s32 B_006730;
extern s32 B_006734;
extern s32 B_006738;
extern s32 B_00673C;
extern s32 B_006740;
extern s32 B_006748;
extern s32 B_00674C;
extern u8 B_006750;

u32 hvqm2SetupSP1(HVQM2Header *header, u32 outbufWidth) {
    s16 *var_a0;
    s16 *var_a1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a2;
    s32 var_a3;
    s32 var_v0;
    s8 var_a2_2;
    u16 temp_a3;
    u16 temp_t0;
    u8 temp_t0_2;
    u8 temp_v0_2;

    temp_a3 = header->width;
    temp_t0 = header->height;
    B_006710 = outbufWidth;
    B_006724 = (s32) temp_a3;
    B_006728 = (s32) temp_t0;
    if (outbufWidth == 0) {
        B_006710 = (u32) temp_a3;
    }
    B_006714 = (s32) header->h_sampling_rate;
    temp_a0 = (s32) temp_a3 >> 2;
    B_006718 = (s32) header->v_sampling_rate;
    temp_v0 = (s32) temp_t0 >> 2;
    var_a2 = temp_v0;
    B_00672C = temp_a0;
    temp_a0_2 = (s32) temp_a3 >> 3;
    B_006730 = var_a2;
    B_006738 = temp_a0_2;
    temp_v1 = header->v_sampling_rate == 2;
    B_00671C = temp_v1;
    B_006734 = temp_a0 * temp_v0;
    if (temp_v1 != 0) {
        var_a2 = (s32) temp_t0 >> 3;
    }
    B_00673C = var_a2;
    B_006720 = B_006710 * 8;
    B_006740 = temp_a0_2 * var_a2;
    B_006750 = header->y_shiftnum;
    temp_v0_2 = header->y_shiftnum;
    B_006750 = temp_v0_2;
    if ((temp_v0_2 & 0xFF) == 8) {
        B_006750 = 0x46;
        var_v0 = 0x26;
    } else {
        B_006748 = 0x26;
        var_v0 = 0x46;
    }
    B_00674C = var_v0;
    var_a3 = 0;
    var_a2_2 = 0;
    var_a1 = B_003E32;
    temp_t0_2 = header->video_quantize_shift;
    var_a0 = B_005662;
    B_006674 = 0x7F << temp_t0_2;
    B_006676 = -0x80 << temp_t0_2;
    while (var_a3 < 0x100) {
        *var_a0 = (s16) ((s32) (var_a2_2 << 0x18) >> 0x15);
        *var_a1 = var_a2_2 << temp_t0_2;
        var_a1 += 2;
        var_a0 += 2;
        var_a2_2 += 1;
        var_a3 += 1;
    }

    return header->total_frames;
}
#else
INCLUDE_ASM("asm/functions/hvqm2decSP1", hvqm2SetupSP1);
#endif

extern u8 B_006751;

void hvqm2InitSP1(u8 alpha) {
    B_006751 = alpha;
}
