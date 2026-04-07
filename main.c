#include <stdio.h>
#include "add.h"
#include "sub.h"
#include "mult_div.h"
#include <stdbool.h>
int main() {
	int a, b;
	char operation;
	printf("Enter two numbers: \n");
	scanf("%d%d", &a, &b);
	printf("Enter operation(+, -, * or /): \n");
	scanf(" %c", &operation);
	bool flag = true;
	while (flag) {
		switch(operation) {
			case '+':
				add(a, b);
				flag = false;
				break;
			case '-':
				sub(a, b);
				flag = false;
				break;
			case '*':
				mult(a, b);
				flag = false;
				break;
			case '/':
				div(a, b);
				flag = false;
				break;
			default:
				printf("Enter valid input\n");
		}

	}
	return 0;
}
