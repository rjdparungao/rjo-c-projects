#include<stdio.h>
//function prototype
int detPrime (int x);

int main(){
	//variable/s
	int num1;
	
	again:
	printf("Enter a number: "); //user input prompt
	scanf("%d", &num1); //gets user input
	while(num1!=0){ //tests user input for a 0 value
	//if user input is not 0, program will loop
	if(detPrime(num1)==1){ //tests return value of the function
		printf("\n%d is a prime number!\n", num1);
	} else {
		printf("\n%d is not a prime number!\n", num1);	
	}
	goto again;
}
//while loop ends when a 0 value input is entered
	printf("-==END OF PROGRAM==-");
	return 0;
	// end of program
}
int detPrime(int x){ //function definition
	int ctr=0;
	if(x==1){
		return 0;
	}
	printf("The factors of %d are: ", x);
	for(int i=1; i<=x; i++){ //loop to print the factors
		if(x%i==0){
			printf("%d ", i);
			ctr++;
		}
	}	
	if(ctr>2){ //returns value corresponding to the number of factors the input has
		return 0; //returns 0 if it only has 2 factors (1 and itself)
	} else {
		return 1; //returns 1 if it has more than 2 factors
	}
}

