#include<iostream>
#include<string.h>
#include<cstring>
#include<ctype.h>
using namespace std;

int main(){
	//var
	char name[10][20], t[50];
	char programs[7][4] = {"CE", "CHE", "EE", "ECE", "IE", "ME"};
	int program, ctr=0, i, j;
	char population;
	//prompt
	cout << "UST Faculty of Engineering"<<endl;
	cout << "List of Engineering Programs: \n";
	cout << "[1] CE\n[2] CHE\n[3] EE\n[4] ECE\n[5] IE\n[6] ME"<<endl;
	cout << "Please Enter the Program Code: "; cin>>program;
	
	if(program <= 6 && program>0){ //if for population
		cout<<"Enter number of students: ";
 		cin >> population;
 	} else {
 		cout << "INVALID PROGRAM CODE!";
 		goto end;
	 }//if for population
 	
 	if(isalpha(population)){// for isalpha
 		cout << "INVALID CODE! Try Again.";
	 } else {
	 	ctr = (int)population;
	 	cout<<"Please Enter the Names of the Student (use the format: LN_FN)"<< endl;
	for(i=0; i<ctr-48; i++){ 
		cin>>name[i]; 
	}
	for(i=0; i<ctr-48; i++)
	{
		for(j=0; j<ctr-48; j++)
		{
			if(strcmp(name[j-1], name[j])> 0 )
			{
				strcpy(t, name[j-1]);
				strcpy(name[j-1], name[j]);
				strcpy(name[j], t);
			}
		}
	}
	cout<<"\n";
	
	cout<<"Below are your seating arrangements" << endl;
	
	for(i=0; i<ctr-48; i++){ 
	cout << programs[program-1] << " Seat No. " << i+1 << " -" << " "<<name[i]<< "\n"; 
	}
	
}
 end:	
	return 0;
}
