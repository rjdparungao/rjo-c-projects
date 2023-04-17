#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct studRecords //structure declaration
{
	char *studnum[10];
	char *studname[15];
	float q1,q2,q3,avg;
};

struct studRecords student[5]; //structure array

int main(){
	
	float q1Ave,q2Ave,q3Ave,gAve;
     
	for(int i=0; i<2; i++)
	{//input for the members of the structure
		printf("STUDENT %d", i+1);
		printf("\nEnter Student's Number: ");
		scanf("%s", &student[i].studnum);
		printf("Enter Student Name: ");
		scanf("%s", &student[i].studname);
		printf("Enter grade for Quiz 1: ");
		scanf("%f", &student[i].q1);
		printf("Enter grade for Quiz 2: ");
		scanf("%f", &student[i].q2);
		printf("Enter grade for Quiz 3: ");
		scanf("%f", &student[i].q3);
	//computes for the average of the students' grade
		student[i].avg=(student[i].q1+student[i].q2+student[i].q3)/3;
	}
	for(int k=0;k<2;k++)
	{
		q1Ave+=student[k].q1;
		q2Ave+=student[k].q2;
		q3Ave+=student[k].q3;
		gAve+=student[k].avg;		
	}
	system("cls");
	//prints the students' grades in tabular form
	printf("\t\t\tPOLYTECHNIC UNIVERSITY OF THE PHILIPPINES\n\t\t\t\t  QUEZON CITY BRANCH\n\t\t\t\t\tBSIT 1-1\n");
	printf("STUDENT NO.\tSTUDENT NAME\tQUIZ #1\t\tQUIZ #2\t\tQUIZ #3\t\tGRADE AVERAGE\n");
	for(int j=0; j<2; j++)
	{
		printf("%s\t%s\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n",student[j].studnum,student[j].studname,student[j].q1,student[j].q2,student[j].q3,student[j].avg);
	}
	printf("AVERAGE\t\t\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f", q1Ave/=5,q2Ave/=5,q3Ave/=5,gAve/=5);
	
return 0;
}
