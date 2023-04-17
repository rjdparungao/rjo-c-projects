#include <iostream>
using namespace std;
 
int multiply(int *x, int *y)
{
  int product; 
 
  product = *x * *y;
 //place code here
}
 
int main() {
   system("clear");
   int num1 = 5 , num2 = 10;
   cout<<"The first number is " << num1 << endl;
   cout<<"The second number is " << num2 << endl;
   cout<<"The product is "<< multiply(&num1,&num2) << endl;
   return 0;
}
