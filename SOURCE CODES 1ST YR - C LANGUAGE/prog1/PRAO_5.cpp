#include<stdio.h>

int main(){
	//variables
	int num;
	//gets input from user
	printf("Enter an integer number: ");
	scanf("%d", &num);
	//tests if the input is zero, odd, or even, and displays corresponding output
	if(num == 0) {
		printf("The number %d is ZERO!", num);
	}	else if (num%2 != 0) {
			printf("The number %d is ODD!", num);
	}		 else {
				printf("The number %d is EVEN!", num);
	}
	return 0;
}
