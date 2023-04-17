#include <iostream>
#include <string.h>
using namespace std;

int main(){
	
	char name[50];
	cout<<"Please enter your name: ";
	cin.get(name, 50);

	for(int i=strlen(name); i>=0;i--){
		cout<<name[i];
	}
	return 0;
}
