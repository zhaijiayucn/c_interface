#include <stdio.h>
#include <stdlib.h>
#include "arith.h"

int main(void)
{
	int x = -13;
	int y = 5;

	printf("Arith_max: %d\n", Arith_max(x, y));
	printf("Arith_min: %d\n", Arith_min(x, y));
	printf("Arith_div: %d\n", Arith_div(x, y));
	printf("Arith_mod: %d\n", Arith_mod(x, y));
	printf("Arith_ceiling: %d\n", Arith_ceiling(x, y));
	printf("Arith_floor: %d\n", Arith_floor(x, y));
	printf("Hello world\n");

	return 0;
}	
