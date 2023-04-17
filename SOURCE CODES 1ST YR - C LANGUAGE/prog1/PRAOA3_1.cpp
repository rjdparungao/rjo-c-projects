#include <stdio.h>

int main(void) {
	//declaration of variables
	int minutes1, minutes2,hours2, minutes3;
	float hours1;
	//gets input for hours to minutes conversion
	printf("Enter number of hours: ");
	scanf("%f", &hours1);
	//calculates hours to minutes
	minutes1 = hours1 * 60;
	//prints output of hours to minutes
	printf("%0.2f hour/s is %d minute/s", hours1, minutes1); 
	printf("\n\n");
	//gets input for minutes to hours conversion
	printf("Enter number of minutes: ");
	scanf("%d", &minutes2);
	//calculates minutes to hours
	hours2 = minutes2/60;
	minutes3 = minutes2%60;
	//prints output of minutes to hours
	printf("%d minutes is %d hour/s and %d minute/s", minutes2, hours2, minutes3);
	
	return 0;
}
