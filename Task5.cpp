#include<iostream>
using namespace std;
void PositionBonus(int a,int b);

main()
{
int a,b;
cout<<"Enter your postion: ";
cin>>a;
cout<<"Enter your friend's position: ";
cin>>b;
PositionBonus(a,b);
}

void PositionBonus(int a,int b)
{
int PositionBonus=b-a;

if(PositionBonus<=6)
  cout<<"True"<<endl;

if(PositionBonus>6)
  cout<<"False"<<endl;

}
