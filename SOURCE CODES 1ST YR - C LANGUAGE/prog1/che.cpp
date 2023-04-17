
#include<iostream>
using namespace std;



int main() {

	string app;
	int application;
	int portability;

	cout<< "What applications do you need?"<< endl;
	cout<< "1. Ordinary Ones"<< endl << "2. High-Computing Ones" << endl;

    
        cout<< "Please input choice code: ";
        cin>>application;
    
        cout<< "Portable or Not?" << endl;
        cout<<"3. Portable"<< endl << "4. Non-Portable" << endl;

        
            cout<<"Please input choice code: ";
            cin>> portability;

        if (application == (1) && portability == (3)){
            cout<< "Laptop - 4GB RAM, 500GB SSD"<< endl;
        } else if (application == (1) && portability == (4)){
            cout<< "Desktop - 4GB RAM, 500GB SSD" << endl;}
        else if(application == (2) && portability == (3) ){
            cout<< "Laptop - 8-16GB RAM, 500GB SSD" << endl;
        } else if (application == (2) && portability == (4)){
            cout<< "Desktop - 8-16GB RAM, 500GB SSD"<< endl;
        } 
        

        return 0;
}
