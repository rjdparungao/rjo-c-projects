#include<stdio.h>
//function prototype
 int power(int x,  int y);

int main(){
	//variables
	int num1, num2;
	//gets variable values from user to pass to the function
	printf("Please enter base number [x]: ");
	scanf("%d", &num1);
	printf("Please enter exponent [y]: ");
	scanf("%d", &num2);
	
	//prints the return value from the function call
	printf("The value of %d^%d is: %d", num1,num2,power(num1, num2)); //function call inside the printf statement
	
	return 0;
}

int power(int x, int y){ //function definition
	
	if(y==1){ //recursive function to calculate the power of a intput integer value
		return x;
	}	else {
		if(y==0){
			return 1;
		}
		return x * power(x,y-1);
	}
	
}
