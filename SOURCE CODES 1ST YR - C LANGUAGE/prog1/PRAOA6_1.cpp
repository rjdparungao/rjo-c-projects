#include <stdio.h>

int main(){
	
	int arr[10]={},high,low; //declared variables
	
	//for loop to get the input integers
	for(int r=0; r<10;r++){ 
		printf("Enter a value for arr[%d]: ", r);
		scanf("%d", &arr[r]);
	}	
	high=arr[0];
	low=arr[0];
	//for loop to test for the highest integer in the array
	for(int j=0; j<10; j++){		
		if(arr[j]>high){
			high=arr[j];
		} 
	} //for loop to test for the lowest integer in the array
	for(int o=0;o<10;o++){		
		if(arr[o]<low){
			low=arr[o];
		}
	}
	//prints the values of the array
	printf("\nThe values of the array are: ");
	for(int p=0;p<10;p++){
		printf("%d ", arr[p]);
	}
	//prints the output
	printf("\n\nThe lowest value in the array is: %d", low);
	printf("\nThe highest value in the array is: %d", high);	
	return 0;
}
