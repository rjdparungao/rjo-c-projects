#include <stdio.h>
#include <stdlib.h>
int main() {
	system("cls");
	//variables
	int num,n;
	unsigned long int m = 1;

	printf("Enter a number to get its factorial: "); //gets input integer
	scanf("%d", &num);
	n=num; //initializes the value of int num to int n
	printf("%d! = ", num); //prints initial value of num
	num-=(num-1); //decrements num to 1 for printing
	do{	//loop for printing the formula for the factorial of int num
		printf("%d", num); 
		num++;
			if(num<=n){printf("x");}
				}while(num<=n);	
				for(int i=1;i<=n;i++){//loop for calculating the factorial of int num
					m=m*i;
						}
	printf("\nThe factorial of %d is: %lu", n,m);
	return 0;
}
