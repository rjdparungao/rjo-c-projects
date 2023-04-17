#include <stdio.h>
#include <stdlib.h>
int main(){
	system("cls");	
	for(int i=1;i<=5;i++){ //loop for printing the rows
		for(int j=1;j<=i;j++){ //loop for printing the columns
			printf("*");	
		}
		printf("\n");
	}	
	return 0;
}
