#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int arr[5][5];
	
	//input values for array
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("Enter a value for [%d][%d]: ", i,j);
			scanf("%d", &arr[i][j]);
		}
	}
	system("CLS");

	//prints original values
	printf("The original values are: \n");
	for(int k=0; k<5; k++){
		for(int l=0; l<5; l++){
			printf(" %d ", arr[k][l]);
		}
		printf("\n");
	}
	//tests if array values are negative 
	for(int a = 0; a<5; a++){
		for(int b=0; b<5; b++){
			if(arr[a][b]<0){
				arr[a][b]=0; //changes value to 0
			}
		}
	}
	//prints changed values
	printf("The changed values are: \n");
	for(int q=0; q<5; q++){
		for(int w=0; w<5; w++){
			printf(" %d ", arr[q][w]);
		}
		printf("\n");
	}

	return 0;
}
