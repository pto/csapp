#include <stdio.h>

int main()
{
#ifdef __STDC_VERSION__
	printf("__STDC_VERSION__ is %ld\n\n", __STDC_VERSION__);
#endif

	printf("sizeof(int) is %zu\n", sizeof(int));
	printf("%d\n\n", 200 * 300 * 400 * 500);

	printf("sizeof(long) is %zu\n", sizeof(long));
	printf("%ld\n\n", 200L * 300 * 400 * 500);

	printf("sizeof(double) is %zu\n", sizeof(double));
	printf("%g %g\n", (3.14 + 1e20) - 1e20, 3.14 + (1e20 - 1e20));
}
