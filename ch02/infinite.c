#include <stdio.h>

int main() {
	printf("1e400 is %f\n", 1e400);
	printf("1.0/0.0 is %f\n", 1.0/0.0);
	printf("-1e400 is %f\n", -1e400);
	printf("-1.0/0.0 is %f\n", -1.0/0.0);
	printf("1/-1e400 is %f\n", 1/1e400);
	printf("1.0/(-1.0/0.0) is %f\n", 1.0/(-1.0/0.0));
	printf("(int)1e10 is %d\n", (int)1e10);
	printf("(int)(-1.0/0.0) is %d\n", (int)(-1.0/0.0));
}
