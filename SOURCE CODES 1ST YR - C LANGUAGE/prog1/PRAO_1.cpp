#include<stdio.h>


int main(){
	//variables
	int age; 
	//gets input from user
	printf("Enter your age: ");
	scanf("%d", &age);
	//tests input and displays corresponding output
	if(age < 16 && age >= 0) {
		printf("You are not old enough to drive!\nYou must wait %d year/s before you can drive legally", 16-age);
	} 	else if (age >= 16) {
		printf("You are old enough to drive!");
	} 		else {
		printf("Invalid age input!");
	}
	return 0;
}
