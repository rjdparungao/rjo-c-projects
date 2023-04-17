#include<stdio.h>
//function prototype
void sortFunc (int x, int y, int z);

int main(){
	//variables
	int num1, num2, num3;
	//prompts user and gets the user input
	printf("Please enter three numbers to be sorted: \n");
	printf("1st number: ");
	scanf("%d", &num1);
	printf("2nd number: ");
	scanf("%d", &num2);
	printf("3rd number: ");
	scanf("%d", &num3);
	
	sortFunc(num1,num2,num3); //function call
	
return 0;
}

void sortFunc(int x, int y, int z){//function definition
	
	int low,mid,high;
	
	if(x>y){ //function to sort three integer inputs without using an array
		mid = x;
		low = y;
	} else {
		mid = y;
		low = x;
	}
	if(mid>z){
		high = mid;
		if(low>z){
			mid = low;
			low = z;
		} else {
			mid = z;
		}
	} else {
		high = z;
	}
	printf("The sorted values are: %d %d %d", low,mid,high);
}

