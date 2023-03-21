#include "libultra/ultra64.h"
#include "hvqm/adpcmdec.h"
#include "hvqm/hvqm2dec.h"
#include "hvqm/HVQM2File.h"
#include "hvqm/HVQmd.h"
#include "custom_macros.h"

STATIC s32 D_0001D0[] = {
    0xFFFFFFFF,
    0xFFFFFFFF,
    0xFFFFFFFF,
    0xFFFFFFFF,
    0x00000002,
    0x00000004,
    0x00000006,
    0x00000008,
    0xFFFFFFFF,
    0xFFFFFFFF,
    0xFFFFFFFF,
    0xFFFFFFFF,
    0x00000002,
    0x00000004,
    0x00000006,
    0x00000008,
};

STATIC s32 D_000210[] = {
    0x00000007,
    0x00000008,
    0x00000009,
    0x0000000A,
    0x0000000B,
    0x0000000C,
    0x0000000D,
    0x0000000E,
    0x00000010,
    0x00000011,
    0x00000013,
    0x00000015,
    0x00000017,
    0x00000019,
    0x0000001C,
    0x0000001F,
    0x00000022,
    0x00000025,
    0x00000029,
    0x0000002D,
    0x00000032,
    0x00000037,
    0x0000003C,
    0x00000042,
    0x00000049,
    0x00000050,
    0x00000058,
    0x00000061,
    0x0000006B,
    0x00000076,
    0x00000082,
    0x0000008F,
    0x0000009D,
    0x000000AD,
    0x000000BE,
    0x000000D1,
    0x000000E6,
    0x000000FD,
    0x00000117,
    0x00000133,
    0x00000151,
    0x00000173,
    0x00000198,
    0x000001C1,
    0x000001EE,
    0x00000220,
    0x00000256,
    0x00000292,
    0x000002D4,
    0x0000031C,
    0x0000036C,
    0x000003C3,
    0x00000424,
    0x0000048E,
    0x00000502,
    0x00000583,
    0x00000610,
    0x000006AB,
    0x00000756,
    0x00000812,
    0x000008E0,
    0x000009C3,
    0x00000ABD,
    0x00000BD0,
    0x00000CFF,
    0x00000E4C,
    0x00000FBA,
    0x0000114C,
    0x00001307,
    0x000014EE,
    0x00001706,
    0x00001954,
    0x00001BDC,
    0x00001EA5,
    0x000021B6,
    0x00002515,
    0x000028CA,
    0x00002CDF,
    0x0000315B,
    0x0000364B,
    0x00003BB9,
    0x000041B2,
    0x00004844,
    0x00004F7E,
    0x00005771,
    0x0000602F,
    0x000069CE,
    0x00007462,
    0x00007FFF,
};

void adpcmDecode(void* instream, u32 format, u32 samples, s16* outstream, u32 ex_stereo, ADPCMstate* state) {
    s32 var_t0;
    s32 temp_a0_2;
    s32 var_v1;
    u32 var_a1;
    u32 var_a2;
    u8 temp_a0;
    u8 t;
    s32 var_t1;
    s32 var_t3;
    u32 temp_t2;
    u8* var_t2;

    if (outstream == NULL) {
        outstream = state->outPtr;
    }
    if (instream != NULL) {
        var_t2 = instream;
        if (format == 0) {
            temp_a0 = *var_t2++;
            t = *var_t2++;
            state->previous = (temp_a0 << 8) | (t & 0x80);
            state->step_index = t & 0x7F;
            *outstream =  state->previous;
            outstream++;
            if (ex_stereo != 0) {
                *outstream = state->previous;
                outstream++;
            }
            samples -= 1;
        }
        var_t3 = 1;
    } else {
        var_t2 = state->inPtr;
        var_t3 = state->hi_nibble;
    }

    var_t0 = state->previous;
    var_t1 = state->step_index;
    while (samples != 0) {
        if (var_t3 != 0) {
            var_a1 = (u8) *var_t2 >> 4;
        } else {
            var_a1 = *var_t2++ & 0xF;
        }
        temp_a0_2 = D_000210[var_t1];
        var_v1 = temp_a0_2 >> 3;
        if (var_a1 & 1) {
            var_v1 += temp_a0_2 >> 2;
        }
        if (var_a1 & 2) {
            var_v1 += temp_a0_2 >> 1;
        }
        if (var_a1 & 4) {
            var_v1 += temp_a0_2;
        }
        if (var_a1 & 8) {
            var_v1 = -var_v1;
        }
        var_t0 += var_v1;
        if (var_t0 > 0x7FFF) {
            var_t0 = 0x7FFF;
        } else if (var_t0 < -0x8000) {
            var_t0 = -0x8000;
        }

        var_t1 += D_0001D0[var_a1];
        if (var_t1 < 0) {
            var_t1 = 0;
        } else if (var_t1 >= ARRAY_COUNT(D_000210)) {
            var_t1 = ARRAY_COUNT(D_000210) - 1;
        }

        *outstream++ = var_t0;
        if (ex_stereo != 0) {
            *outstream = var_t0;
            outstream += 1;
        }
        samples -= 1;
        var_t3 ^= 1;
    }
    state->inPtr = var_t2;
    state->hi_nibble = var_t3;
    state->outPtr = outstream;
    state->previous = var_t0;
    state->step_index = var_t1;
}
