#include "libultra/ultra64.h"
#include "hvqm/adpcmdec.h"
#include "hvqm/hvqm2dec.h"
#include "hvqm/HVQM2File.h"
#include "hvqm/HVQmd.h"

extern s32 D_0001D0[];
extern s32 D_000210[];

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
            // temp_t2 = var_t2 + 1;
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
        } else if (var_t1 >= 0x59) {
            var_t1 = 0x58;
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
