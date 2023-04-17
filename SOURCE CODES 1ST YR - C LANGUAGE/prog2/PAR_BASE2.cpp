#include<stdio.h>
#include<math.h>

int main(){
	//variable/s
	int num=0;
	
	printf("          Base 2\n\n      Power   Result\n\n");
	do{//do while loop that computes for the power from base 2 using the pow function while int variable num is less than or equal to 10
		printf("\t%d\t%.f\n",num,pow(2,num));//prints the values
		num++;
	}while(num<=10);
	
	return 0;
}
