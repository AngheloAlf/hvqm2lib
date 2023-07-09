#include "hvqm/hvqm2dec.h"
#include "hvqm/HVQM2File.h"
#include "hvqm/HVQmd.h"
#include "include_asm.h"
#include "custom_macros.h"

INCLUDE_ASM("asm/functions/hvqm2decSP1", func_00000040);

INCLUDE_ASM("asm/functions/hvqm2decSP1", func_000002F8);

INCLUDE_ASM("asm/functions/hvqm2decSP1", func_000004A8);

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
