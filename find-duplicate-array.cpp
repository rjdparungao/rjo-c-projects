#include<iostream>
using namespace std;

int main(){
    system("cls"); 

    int duplicates = 0;
    int num;
    int i = 0;
    int j = 0;
    int size = 0;

    cout<<"Enter size of array: "; //enter the array size
    cin>>size;

     int array[size];

    for(i=0;i<size;i++) //user input array values
    {
        cout<<"Enter array elements "<< i+1 <<" = ";
        cin>>array[i];
    }

    system("cls");

    cout<<"The array elements are: "; //prints array values
    for(i=0;i<size;i++)
    {
        cout << array[i] << " ";
    }

    cout<<endl<<endl<<endl;

    for(i = 0; i<size; i++) //checks if there are duplicate values in the array
    {
        for(j = i+1; j<size; j++)
        {
            if(array[i]==array[j])
            {
                duplicates += 1;
                num = array[i];
                cout<<"The number " << num << " has duplicate values in the array."<< endl;
            }
        }
    }
    
    if(duplicates<1) //if int variable "duplicates" is less than 1, then there are no duplicates in the array
    {
        cout<<"There are no duplicate values in the array.";
    }
        
    cout<<endl<<endl;
return 0;
}
