#include <stdio.h>
#include <stdlib.h>
int main(){
	system("cls");
	int n, m=1; //variables	
	printf("Enter a number to find its factors: "); //gets input integer
	scanf("%d", &n);
	//this segment calculates the factors and prints the output
	printf("Factors of %d = ", n); 
	for(int i=1;i<=n; i++){ //loop that tests if the number is a factor of the input integer
		if(n%m==0){//tests if the number is a factor of the input integer
			printf("%d ", m);//prints the number
		}	
		m++;
	}	
	return 0;
}
