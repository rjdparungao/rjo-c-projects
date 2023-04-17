#include<stdio.h>

int main() {
	//variables
	int year;
	//gets input from user
	printf("Enter year: ");
	scanf("%d", &year);
	//tests if input is a leap year or not, and displays corresponding output
	if(year%4==0) {
		if(year%100==0) {
			if(year%400==0) {
				printf("%d is a leap year!", year);
			} else {
				printf("%d is NOT a leap year!", year);
			}
		} else {
			printf("%d is a leap year!", year);
		}
	} else {
			printf("%d is NOT a leap year!", year);
	}
	return 0;
}
