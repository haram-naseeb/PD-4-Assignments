#include<iostream>
using namespace std;
void integer(int num1, int num2);

main()
{
int num1,num2;
cout<<"Enter the first number: ";
cin>>num1;
cout<<"Enter the second number: ";
cin>>num2;
integer(num1, num2);
}

void integer(int num1, int num2)
{

if(num1==num2)
  cout<<"true"<<endl;
if(num1!=num2)
  cout<<"false"<<endl;
}