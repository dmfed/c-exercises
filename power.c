#include <stdio.h>
#include <inttypes.h>

intmax_t power(int base, int p) {
	intmax_t res = 1;
	for (int i = 0; i < p; i++) {
		res *= base;
	}
	if (base < 0 && p != 0 && p % 2 == 0) {
		res = -res;
	}
	return res;
}
	
int main() {
	int n, p;
	intmax_t res;
	scanf("%d", &n);
	scanf("%d", &p);
	res = power(n, p);
	printf("%d power %d is %" PRIiMAX "\n", n, p, res);
	return 0;
}
