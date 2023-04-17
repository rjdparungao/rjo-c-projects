#include <stdio.h>

int main(){
	
	int arr[50], num,ctr=0; //variables
	
	printf("Enter an integer value: "); //gets integer input
	scanf("%d", &num);
	printf("The binary value of %d is: ", num); //prints initial conversion message
	while(num>0){//while loop to store the binary value in the array
		arr[ctr]=num%2;
		num/=2;
		ctr++;
	}	
	for(int i=ctr-1; i>=0; i--){ //reverse for loop for printing the values in the array
		printf("%d ", arr[i]);
	}
	return 0;
}
