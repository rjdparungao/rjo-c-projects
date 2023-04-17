#include <stdio.h>

int main(void) {
	//declaration of variables
	float startBalance,deposit, withdrawals, currBalance;
 
	//gets required inputs from the user
	printf("Enter starting balance: ");
	scanf("%f", &startBalance);
	printf("\nEnter total amounts of deposits made: ");
	scanf("%f", &deposit);
	printf("\nEnter total amounts of withdrawals made: ");
	scanf("%f", &withdrawals);
	//calculates current balance
	currBalance = startBalance + deposit - withdrawals;
	//prints output of current balance
	printf("\nYour current balance is %0.2f", currBalance);
	
	return 0;
}
