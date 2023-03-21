#ifndef CUSTOM_MACROS_H
#define CUSTOM_MACROS_H

#ifndef ARRAY_COUNT
#define ARRAY_COUNT(arr) (s32)(sizeof(arr) / sizeof(arr[0]))
#endif

#ifndef ARRAY_COUNTU
#define ARRAY_COUNTU(arr) (u32)(sizeof(arr) / sizeof(arr[0]))
#endif

#ifndef STATIC
#define STATIC static
#endif

#endif
