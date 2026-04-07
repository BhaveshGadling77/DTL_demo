#include <stdio.h>
#include "add.h"
#include "sub.h"
#include "mult_div.h"

int main() {
	int a, b;
	char operation;
	printf("Enter two numbers: \n");
	scanf("%d%d", &a, &b);
	printf("Enter operation(+, -, * or /): \n");
	scanf(" %c", &operation);
	while (true) {
		switch(operation) {
			case '+':
				add(a, b);
				break;
			case '-':
				sub(a, b);
				break;
			case '*':
				mult(a, b);
				break;
			case '/':
				div(a, b);
				break;
			default:
				printf("Enter valid input\n");
		}
	}
	return 0;
}
