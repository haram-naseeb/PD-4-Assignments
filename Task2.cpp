#include<iostream>
using namespace std;
void condition(string input);

main()
{
string input;
cout<<"Enter 'true' or 'false': ";
cin>>input;
condition(input);
}

void condition(string input)
{
if(input=="true")
   cout<<"false"<<endl;
   
if(input=="false")
   cout<<"true"<<endl;
}