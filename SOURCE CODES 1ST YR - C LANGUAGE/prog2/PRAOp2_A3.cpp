#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int arr[10], num, oc=0;
	
	//gets integer value to be searched
	printf("Enter a number to be searched: ");
	scanf("%d", &num);
	
	//gets integer values of array
	for(int i=0; i<10; i++){
		printf("[%d] Enter array values: ", i);
		scanf("%d", &arr[i]);
	}
	
	system("CLS");
	//prints the array
	printf("The list contains: ");
	for(int r=0; r<10; r++){
		printf("%d ", arr[r]);
	}
	//prints the number to be searched
	printf("\n\nThe number to be searched is: %d", num);

	//loop to search for the int value within the array
	for(int j=0; j<10; j++){
		if(arr[j]==num){
			oc++;
		}	
	}
	//prints the occurrences of the int in the array
		printf("\n\nOutput: There is/are %d occurrence/s of the number %d.", oc, num);
	
	
		return 0;	
}
