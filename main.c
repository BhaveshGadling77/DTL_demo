#include <stdio.h>
#include<stdlib.h>
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
				printf("\n");
				flag = false;
				break;
			case '-':
				sub(a, b);
				printf("\n");
				flag = false;
				break;
			case '*':
				mult(a, b);
				printf("\n");
				flag = false;
				break;
			case '/':
				divi(a, b);
				printf("\n");
				flag = false;
				break;
			default:
				printf("Enter valid input\n");
				exit(1);
		}

	}
	return 0;
}
