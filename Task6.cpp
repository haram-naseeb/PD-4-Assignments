#include<iostream>
using namespace std;
void time(int h, int m);

main()
{
int h,m;
cout<<"Enter the number of hours: ";
cin>>h;
cout<<"Enter the number of minutes: ";
cin>>m;
time(h,m);
}

void time(int h,int m)
{
int hour=h*60;

if(hour>m)
  cout<<h<<endl;

if(m>hour)
  cout<<m<<endl;

}
