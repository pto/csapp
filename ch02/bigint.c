#include <stdio.h>

const int START = 16777215;

int main() {
	for (int i = START; i < START + 5; i++)
		printf("%f\n", (float)i);
	return 0;
}
