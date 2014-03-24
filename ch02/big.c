#include <stdio.h>

int main()
{
	printf("sizeof(int) is %zu\n", sizeof(int));
	printf("%d\n\n", 200 * 300 * 400 * 500);

	printf("sizeof(double) is %zu\n", sizeof(double));
	printf("%g %g\n", (3.14 + 1e20) - 1e20, 3.14 + (1e20 - 1e20));
}
