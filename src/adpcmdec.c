#include "libultra/ultra64.h"
#include "hvqm/adpcmdec.h"
#include "hvqm/hvqm2dec.h"
#include "hvqm/HVQM2File.h"
#include "hvqm/HVQmd.h"
#include "custom_macros.h"

STATIC s32 D_0001D0[] = {
    -1,
    -1,
    -1,
    -1,
    2,
    4,
    6,
    8,
    -1,
    -1,
    -1,
    -1,
    2,
    4,
    6,
    8,
};

STATIC s32 D_000210[] = {
    0x0007,
    0x0008,
    0x0009,
    0x000A,
    0x000B,
    0x000C,
    0x000D,
    0x000E,
    0x0010,
    0x0011,
    0x0013,
    0x0015,
    0x0017,
    0x0019,
    0x001C,
    0x001F,
    0x0022,
    0x0025,
    0x0029,
    0x002D,
    0x0032,
    0x0037,
    0x003C,
    0x0042,
    0x0049,
    0x0050,
    0x0058,
    0x0061,
    0x006B,
    0x0076,
    0x0082,
    0x008F,
    0x009D,
    0x00AD,
    0x00BE,
    0x00D1,
    0x00E6,
    0x00FD,
    0x0117,
    0x0133,
    0x0151,
    0x0173,
    0x0198,
    0x01C1,
    0x01EE,
    0x0220,
    0x0256,
    0x0292,
    0x02D4,
    0x031C,
    0x036C,
    0x03C3,
    0x0424,
    0x048E,
    0x0502,
    0x0583,
    0x0610,
    0x06AB,
    0x0756,
    0x0812,
    0x08E0,
    0x09C3,
    0x0ABD,
    0x0BD0,
    0x0CFF,
    0x0E4C,
    0x0FBA,
    0x114C,
    0x1307,
    0x14EE,
    0x1706,
    0x1954,
    0x1BDC,
    0x1EA5,
    0x21B6,
    0x2515,
    0x28CA,
    0x2CDF,
    0x315B,
    0x364B,
    0x3BB9,
    0x41B2,
    0x4844,
    0x4F7E,
    0x5771,
    0x602F,
    0x69CE,
    0x7462,
    0x7FFF,
};

void adpcmDecode(void* instream, u32 format, u32 samples, s16* outstream, u32 ex_stereo, ADPCMstate* state) {
    s32 var_t0;
    s32 stepIndex;
    s32 hiNibble;
    u8* streamP;

    if (outstream == NULL) {
        outstream = state->outPtr;
    }

    if (instream != NULL) {
        streamP = instream;
        if (format == ADPCM_RESET) {
            u8 temp_a0 = *streamP++;
            u8 t = *streamP++;

            state->previous = (temp_a0 << 8) | (t & 0x80);
            state->step_index = t & 0x7F;
            *outstream =  state->previous;
            outstream++;
            if (ex_stereo) {
                *outstream = state->previous;
                outstream++;
            }
            samples--;
        }

        hiNibble = 1;
    } else {
        streamP = state->inPtr;
        hiNibble = state->hi_nibble;
    }

    var_t0 = state->previous;
    stepIndex = state->step_index;
    while (samples > 0) {
        u32 var_a1;
        s32 temp_a0_2;
        s32 var_v1;

        if (hiNibble) {
            var_a1 = *streamP >> 4;
        } else {
            var_a1 = *streamP++ & 0xF;
        }

        temp_a0_2 = D_000210[stepIndex];
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

        stepIndex += D_0001D0[var_a1];
        if (stepIndex < 0) {
            stepIndex = 0;
        } else if (stepIndex >= ARRAY_COUNT(D_000210)) {
            stepIndex = ARRAY_COUNT(D_000210) - 1;
        }

        *outstream++ = var_t0;
        if (ex_stereo != 0) {
            *outstream = var_t0;
            outstream += 1;
        }

        samples--;
        hiNibble ^= 1;
    }

    state->inPtr = streamP;
    state->hi_nibble = hiNibble;
    state->outPtr = outstream;
    state->previous = var_t0;
    state->step_index = stepIndex;
}
