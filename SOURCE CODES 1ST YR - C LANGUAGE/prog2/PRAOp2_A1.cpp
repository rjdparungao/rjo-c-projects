#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int arr[5][5], arr_row[20], arr_col[20], rowsum=0, colsum=0, cchk=0, rchk=0;
	//input values for array
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("Enter a value for [%d][%d]: ", i,j);
			scanf("%d", &arr[i][j]);
		}
	}
	system("CLS");
	//this segment calculates the sum of the row and places it in an array
	for(int r=0; r<5; r++){ // loop for rows
		for(int o=0; o<5; o++){
		rowsum+=arr[r][o];
		}
		arr_row[r] = rowsum;
		rowsum = 0;
	}
	
	for(int k = 0; k<5; k++){ //loop for columns
		for(int l = 0; l<5; l++){
			colsum += arr[l][k];
		}
		arr_col[k] = colsum;
		colsum = 0;
	}
	
	//prints the values of the rows
	printf("\nThe sum of the row values are: ");
	for(int f=0;f<5;f++){
		printf("%d ", arr_row[f]);
	}
	//prints the values of the columns
	printf("\nThe sum of the column values are: ");
	for(int g=0;g<5;g++){
		printf("%d ", arr_col[g]);
	}
	
	printf("\n");
	
	//loop to test the values of the new array whether they are equal
		
	for(int x = 0; x<5; x++){ //loop to test row sum values
		for(int y = 0; y<5; y++){
			if(arr_row[x]!=arr_row[y]){
				rchk = 1;
				break;
			}
		}
	}
	//tests rchk variable based on the value given from row sum loop
	switch(rchk){
		case 1: printf("\nThe sum of the rows are not equal");
				break;
		case 0: printf("\nThe sum of the rows are equal");
	}
	
		for(int a = 0; a<5; a++){  //loop to test column sum values
			for(int b = 0; b<5; b++){
				if(arr_col[a]!=arr_col[b]){
				cchk = 1;
				break;
			}
		}
	}
	//tests cchk variable based on the value given from the column sum loop
	switch(cchk){
		case 1: printf("\nThe sum of the columns are not equal");
				break;
		case 0: printf("\nThe sum of the columns are equal");
	}
	return 0;
}
