#include <stdio.h>
#include <stdint.h>

int main() {
	int x = -1;
	int y = INT32_MAX;
	unsigned ux = x;
	unsigned uy = y;

	printf("INT32_MIN is %d\n", INT32_MIN);
	printf("x*~y is %d\n", x*~y);
	printf("1U<<31 is %u\n", 1U<<31);
	printf("uy*ux is %u\n", uy*ux);
	printf("%d\n", x*~y + uy*ux == -x);
}
