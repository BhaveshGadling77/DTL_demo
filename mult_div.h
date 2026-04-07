#include <stdio.h>
void mult(int a, int b) {
	printf("%d * %d = %d\n", a, b, a * b);
}

void div(int a, int b) {
	if (b == 0) {
		printf("Divide by 0 Error.\n");
		return;
	}
	printf("%d / %d = %d\n", a, b, a / b);
}
