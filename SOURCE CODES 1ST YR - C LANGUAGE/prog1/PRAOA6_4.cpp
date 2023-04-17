#include <stdio.h>

int main(){
	//variables
	int sarr1[5] = {10,11,12,13,14}, sarr2[5] = {1,2,3,4,5}, barr[10],ind=0,t=0,nex;
	//prints the values of the first and second array
	printf("The values of the first array are: ");
	for(int i=0;i<5;i++){
		printf("%d ", sarr1[i]);
	}
	printf("\nThe values of the second array are: ");
	for(int j=0;j<5;j++){
		printf("%d ", sarr2[j]);
	}
	//for loops to place value of small arrays into the new one
	for(int r=0;r<5;r++){
		barr[ind]=sarr1[r];
		ind++;
	}
	for(int o=0;o<5;o++){
		barr[ind]=sarr2[o];
		ind++;
	}
	//bubble sort loop for the new array
	do{ 
	 nex=0;
	for(int f=0;f<10;f++){
		if(barr[f]>barr[f+1]){
			t = barr[f];
			barr[f] = barr[f+1];
			barr[f+1] = t;
			nex = 1;
			}
		}
	}while(nex);
	//prints the values in the new array
	printf("\n\nThe values of the new sorted array are: ");
	for(int y=0;y<10;y++){
		printf("%d ", barr[y]);
	}
	
	return 0;
}
