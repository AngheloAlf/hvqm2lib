#ifndef CUSTOM_MACROS_H
#define CUSTOM_MACROS_H

#ifndef ARRAY_COUNT
#define ARRAY_COUNT(arr) (s32)(sizeof(arr) / sizeof(arr[0]))
#endif

#ifndef ARRAY_COUNTU
#define ARRAY_COUNTU(arr) (u32)(sizeof(arr) / sizeof(arr[0]))
#endif

#ifndef STATIC
#if REAL_STATIC
#define STATIC static
#else
#define STATIC
#endif
#endif

#define STATIC_INLINE static inline
#ifdef PERMUTER
#define INLINE static inline
#else
#define INLINE inline
#endif

#endif
