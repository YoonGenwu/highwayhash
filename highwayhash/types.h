#ifndef HIGHWAYHASH_HIGHWAYHASH_TYPES_H_
#define HIGHWAYHASH_HIGHWAYHASH_TYPES_H_

#include <stdint.h>
#include "highwayhash/code_annotation.h"

#ifdef __cplusplus
namespace highwayhash {
#endif

// uint64_t is unsigned long on Linux; we need 'unsigned long long'
// for interoperability with other software.
typedef unsigned long long uint64;  // NOLINT

typedef uint32_t uint32;
typedef uint16_t uint16;
typedef uint8_t uint8;

// Pointer to const
typedef const uint8* const RESTRICT crpcU8;
typedef const uint32* const RESTRICT crpcU32;
typedef const uint64* const RESTRICT crpcU64;

// Pointer to non-const
typedef uint8* const RESTRICT crpU8;
typedef uint32* const RESTRICT crpU32;
typedef uint64* const RESTRICT crpU64;

#ifdef __cplusplus
}  // namespace highwayhash
#endif

#endif  // HIGHWAYHASH_HIGHWAYHASH_TYPES_H_
