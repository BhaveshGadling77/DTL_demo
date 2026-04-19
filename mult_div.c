#include <stdio.h>
void mult(int a, int b) {
	printf("%d * %d = %d", a, b, a * b);
}

void divi(int a, int b) {
	if (b == 0) {
		printf("Divide by 0 Error.");
		return;
	}
	printf("%d / %d = %d", a, b, a / b);
}
