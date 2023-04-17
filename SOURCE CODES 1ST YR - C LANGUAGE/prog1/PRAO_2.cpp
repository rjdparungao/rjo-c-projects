#include<stdio.h>

int main(){
	//variables
	int ME = 0, YOU = 0, THEY = 5, THEM = 7;
	//gets input from the user
	printf("Enter value for ME: ");
	scanf("%d", &ME);
	printf("Enter value for YOU: ");
	scanf("%d", &YOU);
	//tests input from the user; performs corresponding calculations and prints the output
	if(ME > 0 && ME < 2) {
		YOU = ME;
		printf("%d", YOU);
	} else if (ME == 5) {
			YOU = THEY*THEM;
			printf("%d", YOU);
	}	else if (ME == 7) {
				YOU -= 4;
				printf("%d", YOU);
	}		else {
					printf("%d", YOU);	
					}			
	return 0;
}
