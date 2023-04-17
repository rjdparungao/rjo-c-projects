#include <stdio.h>
#include <stdlib.h>

int main(void) {
  system("cls");
  int hb=12, min=2,hr;	//initialized variables
	printf("\t\t  JEMIMAH'S HAMBURGER\n\tHOUR\t\tMINUTES\t\t NUMBER OF BURGERS\n"); //prints the categories of the values	
  for(hb=12; hb<=600;hb+=12){//loop that calculates the hours,minutes, and hamburgers made	
    if(min<60 && hr==1){//tests if time has reached an hour 
      printf("\t %d\t\t  %d\t\t\t%d\n", hr,min,hb);
    } else if (min==60 || hr==1) {//tests if time has reached an hour and sets values
      min=0; //initializes minutes to 0
      hr=1; //sets hours to 1
      printf("\t %d\t\t  %d\t\t\t%d\n", hr,min,hb);
    } else {
      printf("\t \t\t  %d\t\t\t%d\n", min, hb);
    }
    min+=2; //increments mintues by 2
  }
  return 0;
}
