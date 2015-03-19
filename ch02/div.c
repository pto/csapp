#include <stdio.h>

int div2k(int x, int k) {
	return ((x < 0)? x + (1<<k) - 1 : x) >> k;
}

int shift(int x, int k) {
	return x >> k;
}

int mydiv(int x, int k) {
	int neg_mask = x >> 31;
	int pos_mask = ~neg_mask;
	int neg_return = neg_mask & ((x + (1<<k) - 1) >> k);
	int pos_return = pos_mask & (x >> k);
	return neg_return | pos_return;
}

void show(int x, int k) {
	printf("%d/%d is %d (/) %d (?:) %d (>>) %d (mine)\n", x, 1<<k, 
			x/(1<<k), div2k(x, k), shift(x, k), mydiv(x, k));
}

int main() {
	show(7, 2);
	show(-7, 2);
	show(12340, 8);
	show(-12340, 8);
}
