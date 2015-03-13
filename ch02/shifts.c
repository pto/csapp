#include <stdio.h>

int main()
{
	int i = 0x1234ABCD;
	printf("%#x\n", i << 4);

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wshift-count-overflow"
	printf("%#x\n", i << 36);
#pragma clang diagnostic pop

	return 0;
}
