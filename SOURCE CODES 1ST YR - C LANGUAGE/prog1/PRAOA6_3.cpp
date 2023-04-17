#include <stdio.h>

int main(){
	
	int marr[10], sarr[5],n=0; //variables
	
	for(int i=0; i<10; i++){ //for loop to get the values of the main array
		printf("Enter a value for the first array[%d]: ", i);
		scanf("%d", &marr[i]);
	} printf("\n");
	for(int j=0; j<5; j++){ //for loop to get the values of the smaller array
		printf("Enter a value for the second array[%d]: ", j);
		scanf("%d", &sarr[j]);
	} 
			//loop to check if each value of the small array is in the main array
			for(int r=0;r<5;r++){ 
			for(int o=0; o<10; o++){
				if(sarr[r]==marr[o]){
				n++; //increments n everytime an equal value is found
				} 
			  } 
			}						
				
	if(n<5){//condition that tests if n reaches 5 and prints corresponding output
		printf("\nThe second array is not a subset of the first.");
	} else {
		printf("\nThe second array is a subset of the first");
	}
		return 0;	
	}
		
	
	
		

	
	

