#include<iostream>
using namespace std;
void pet(int holidays);

main()
{
int holidays;
cout<<"Holidays: ";
cin>>holidays;
pet(holidays);
}

void pet(int holidays)
{

int total_days=365;
int norm=30000;
int working_days=total_days-holidays;
int games_time=(63*working_days)+(127*holidays);
int rest_time=games_time-norm;
int hour=rest_time/60;
int min=hour*60-rest_time;

 if(games_time<norm)
   {

   cout<<"Tom sleeps well"<<endl;
   cout<<-hour<<" hours and "<<min<<" minutes less for play";
   }

 if(games_time>norm)
   {
   cout<<"Tom will run away"<<endl;
   cout<<hour<<" hours and "<<-min<<" minutes for play";
   }

}
   

