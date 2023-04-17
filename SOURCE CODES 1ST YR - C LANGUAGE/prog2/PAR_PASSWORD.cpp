#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	//variables
	int chance=0,index=0;
	char pass[] = "PUP123", passw[7], input;
	
	do{ //do while that loops until user attempts(int variable chance) are less than 3
	again:
	printf("Please enter the password: ");//prompts the user to input password
	index=0;
	while((input=getch())!=13){//loop to get the input from the user using getch and assigns it to a char variable until an enter key is pressed
		if(input==8){//resets the input if a backspace key is pressed
			passw[0]=0;
			system("CLS");
			goto again;
		}
		passw[index] = input; //places the input from char variable input to the array
		index++;
		putch('*'); //masks input with an asterisk
}//when loop ends, intializes the last value of the input to 0. marking the end of the input string
	passw[index] = 0; 
	//tests value of the strcmp function
	if(strcmp(pass, passw)!=0){ //password is wrong
		chance++;
		printf("\nIncorrect Password! %d attempt/s remaining.\n", 3-chance);
		if(chance > 2){ 
			printf("\nIntruder Alert!\n");
			break;
		}
 }		else if (strcmp(pass,passw)==0){ //password is correct
 			printf("\nWelcome to PUP Quezon City!\n");
 			break;
 			}		
		}while(chance<3);
	return 0;
}
