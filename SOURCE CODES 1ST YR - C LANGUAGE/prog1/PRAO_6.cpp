#include<stdio.h>

int main() {
	//variables
	int a, b; 
	char opp;
	//gets input from user
	printf("Enter the first integer number: ");
	scanf("%d", &a);
	printf("Enter the second integer number: ");
	scanf("%d", &b);
	printf("\n Add : + \n Subtract : - \n Multiply : * \n Divide : /\n\nChoose an operator: ");
	scanf(" %c", &opp);

	//tests which operation to perform on the two integer values and prints the corresponding output
	switch(opp) {
		case ('+'): {
			printf("%d + %d = %d", a,b,a+b);
			break;
		}
		case ('-'): {
			printf("%d - %d = %d", a,b,a-b);
			break;
		}
		case ('*'): {
			printf("%d * %d = %d", a,b,a*b);
			break;
		}
		case ('/'): {
			printf("%d / %d = %.2f", a,b,(float)a/b);
			break;
		}
		default: {
			printf("Invalid operator!");
			break;
		}
	}
	return 0;
}
