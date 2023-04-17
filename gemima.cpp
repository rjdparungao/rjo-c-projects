#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main() {

    int hour=0,dropsOfWine=162,ctr=1,catDrank=0; //counter

    system("cls");

    printf("HOUR\t\tDROPS");
    
    while (dropsOfWine<=2452) //check
    { //execute
        if(ctr==3)
        {
            ctr=0;
            dropsOfWine = dropsOfWine - 28;
            catDrank += 28;
        }
        printf("\n%3d\t\t%3d", hour, dropsOfWine);
        hour++;
        dropsOfWine+=162;
        ctr++;
    }
     //kung puno na yung bucket
    
    printf("\n\nThe cat drank %3d drops of wine", catDrank);
    printf("\n\n");
    return 0;
}


