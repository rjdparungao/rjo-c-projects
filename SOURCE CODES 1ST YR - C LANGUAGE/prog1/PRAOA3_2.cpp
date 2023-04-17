#include <stdio.h>

int main(void) {

	//declaration of variables
	float hoursWorked, pay, weekly;
	//gets inputs from the user
	printf("Enter hourly pay rate: ");
	scanf("%f", &pay);
	printf("Enter hours worked for the week: ");
	scanf("%f", &hoursWorked);
	//calculates weekly pay	
	weekly = pay*hoursWorked;
	//prints output of weekly pay
	printf("Weekly pay is PHP %.2f", weekly);

	return 0;
}
