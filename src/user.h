#include "sizes.h"

#define U_STACK_SIZE (16*K)
#define USER_STACK_VMA (0xFFFFFFFFFFFFFFFF - U_STACK_SIZE + 1)
#define USER_STACK_START ((uintptr_t)STACK(USER_STACK_VMA, U_STACK_SIZE))
#define USER_TEXT_VMA 0x1000000
#define USER_TEXT_SIZE (32*K)
#define NUM_USER_PROGS 3
#define USER_VIDEO (USER_TEXT_VMA + USER_TEXT_SIZE*NUM_USER_PROGS)
#define USER_VIDEO_SIZE (8*K)
#define USER_HEAP (USER_VIDEO + USER_VIDEO_SIZE)

#define TEST_PROG_PMA 0x40000
