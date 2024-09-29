#include<iostream>
using namespace std;
void tpchecker(int people, int roll);
main()
{
int people,roll;
cout<<"Number of people in the household: ";
cin>>people;
cout<<"Number of rolls of TP: ";
cin>>roll;
tpchecker(people, roll);
}
void tpchecker(int people, int roll)
{
int total_sheets=roll*500;
int sheet_used_per_day=people*57;
int days=total_sheets/sheet_used_per_day;
if(days<14)
  cout<<"Your TP will last only "<<days<<" days, buy more!";
if(days>=14)
  cout<<"Your TP will last "<<days<<" days, no need to panic!";
}