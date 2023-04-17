#include <stdio.h>

 void EXCHANGE(int arr[][3]){//function definition
 	//variables
 	int newarr[3][3], row=0, column=0;

 	for(row=0;row<3;row++){//loop to give the array with input values to the new array
 		for(column=0;column<3;column++){
 			newarr[row][column]=arr[column][row];//exchanges rows and column values
		 }
	 }	
 	for(row=0;row<3;row++){//prints the values of the new array with the exchanged values
 		for(column=0; column<3; column++){
 			printf("%3d", newarr[row][column]);
		 }
		 printf("\n");
	 }
 	
}
 
int main(){
	//variables
	int arr[3][3];
	
	for(int i=0; i<3;i++){//gets first array values from the user
		for(int j=0; j<3; j++){
			printf("Please enter value for [%d][%d]: ",i,j);
			scanf("%d", &arr[i][j]);
		}
	} printf("\nOriginal array values are:\n"); //prints the values of the first array 
	for(int g=0; g<3; g++){
		for(int a=0; a<3; a++){
			printf("%3d", arr[g][a]);
		}
		printf("\n");
	}
	//calls the function to exchange the values of rows and columns
	printf("The new values are: \n");
	EXCHANGE(arr);//function call
	return 0;
}
