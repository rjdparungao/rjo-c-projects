#include<stdio.h>
#include<stdlib.h>
//function prototype
int gcdCal (int x, int y);

int main(){
	//variables
	int num1,num2, ret;
	
	start:
		//user input
	printf("Please enter the first number: ");
	scanf("%d", &num1);

	printf("Please enter the second number: ");
	scanf("%d", &num2);
	//checks values of input for 0 value
	while(num1!=0 && num2!=0){//continues program if no 0 value is entered
	ret = gcdCal(num1, num2);	//function call
	printf("The Greatest Common Divisor of %d and %d is %d\n", num1, num2, ret);
	goto start;
	} //ends program if a 0 value is entered
	printf("A 0 value was entered!");
	printf("\n=====END OF PROGRAM=====");
	return 0;
}

int gcdCal (int x, int y){ //function definition
	int temp, rem;
	if(y>x){ //based from Eucledian Algorithm
		temp = x;
		x = y;
		y = temp;
	} 
	temp=0;
	while(rem!=0){ 
		rem=x%y;
			if(rem>0){
				x=y;
				y=rem;
				temp=y;
		}			else{
					temp=y;
	 }
 } 
	return temp;
	}
	

