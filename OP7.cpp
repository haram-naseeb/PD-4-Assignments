#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void maze();
void playermove(int x,int y);
main()
{
int x=17,y=2;
system("cls");
maze();
while(true)
{
playermove(x,y);
y=y+1;
if(y==10)
{
while(true)
{
playermove(x,y);
y=y-1;
if(y==1)
{break;}
}
}
gotoxy(0,12);
}
}
void playermove(int x,int y)
{
gotoxy(x,y);
cout<<"P";
Sleep(200);
gotoxy(x,y);
cout<<"  ";
}






void maze()
{
cout<<"###########################################"<<endl;
cout<<"#                                         #"<<endl;
cout<<"#                                         #"<<endl;
cout<<"#                                         #"<<endl;
cout<<"#                                         #"<<endl;
cout<<"#                                         #"<<endl;
cout<<"#                                         #"<<endl;
cout<<"#                                         #"<<endl;
cout<<"#                                         #"<<endl;
cout<<"#                                         #"<<endl;
cout<<"#                                         #"<<endl;
cout<<"###########################################"<<endl;
}

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}