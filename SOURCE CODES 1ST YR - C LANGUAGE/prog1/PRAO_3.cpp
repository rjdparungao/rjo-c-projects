#include<stdio.h>

int main(){
	//variables
	float hw, rph, wage;
	//gets input from user
	printf("Enter hours worked: ");
	scanf("%f", &hw);
	printf("Enter rate per hour: ");
	scanf("%f", &rph);
	//tests input and adds overtime pay if hours worked is greater than 40
	if(hw > 40) {
		hw -= 40;
		wage = 40*rph;
		rph = rph + (rph*.5);
	    wage = wage + (rph*hw);
	} 	else {
			wage = hw*rph;
	}
	printf("\nYour weekly wage is: PHP %.2f", wage); //prints final weekly wage
	return 0;	
}


		
	

