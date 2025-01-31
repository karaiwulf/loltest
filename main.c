#include <stdio.h>

#include "loltest.h"

int main() {
	size_t z = zero();
	type_objtest objtest = (type_objtest) { .x = 35, .y = 2 };
	size_t x = objtest_get_x(objtest);
	size_t y = objtest_get_y(objtest);
	printf("z == %ld\nx == %ld\ny == %ld\n", z, x, y);
	return z;
}
