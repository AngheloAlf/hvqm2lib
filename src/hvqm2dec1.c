#include "hvqm/hvqm2dec.h"
#include "hvqm/HVQM2File.h"
#include "hvqm/HVQmd.h"
#include "include_asm.h"
#include "custom_macros.h"

INCLUDE_ASM("asm/functions/hvqm2dec1", func_00000040);

INCLUDE_ASM("asm/functions/hvqm2dec1", func_000002F8);

INCLUDE_ASM("asm/functions/hvqm2dec1", func_000004A8);

INCLUDE_ASM("asm/functions/hvqm2dec1", func_0000061C);

INCLUDE_ASM("asm/functions/hvqm2dec1", func_000012E4);

INCLUDE_ASM("asm/functions/hvqm2dec1", func_0000187C);

INCLUDE_ASM("asm/functions/hvqm2dec1", func_000029F8);

INCLUDE_ASM("asm/functions/hvqm2dec1", func_000033D8);

INCLUDE_ASM("asm/functions/hvqm2dec1", hvqm2Decode1);

INCLUDE_ASM("asm/functions/hvqm2dec1", hvqm2Setup1);

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
