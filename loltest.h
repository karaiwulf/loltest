#ifndef SPICY_LOLTEST_H
#define SPICY_LOLTEST_H

#include <stdlib.h>

typedef enum NumNum {
	EULL,
	LUL,
	ONE,
} type_numnum;

typedef struct ObjectTest {
	size_t x;
	size_t y;
} type_objtest;
extern size_t objtest_get_x(type_objtest);
extern size_t objtest_get_y(type_objtest);

extern size_t zero();

#endif

