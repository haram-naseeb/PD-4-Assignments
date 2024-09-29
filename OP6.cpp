#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printH();
void printA();
void printS();
void printN();
main()
{ 
system("cls");
int x=0,y=6;
gotoxy(x,y);
printH();
y=y+6;
gotoxy(x,y);
printA();
y=y+6;
gotoxy(x,y);
printS();
y=y+6;
gotoxy(x,y);
printS();
y=y+6;
gotoxy(x,y);
printA();
y=y+6;
gotoxy(x,y);
printN();
y=y+6;
}

void printH()
{
cout<<"#    #"<<endl;
cout<<"#    #"<<endl;
cout<<"######"<<endl;
cout<<"#    #"<<endl;
cout<<"#    #"<<endl;
}

void printA()
{
cout<<"#####"<<endl;
cout<<"#   #"<<endl;
cout<<"#####"<<endl;
cout<<"#   #"<<endl;
cout<<"#   #"<<endl;
}

void printS()
{
cout<<"#####  "<<endl;
cout<<"#      "<<endl;
cout<<"#####  "<<endl;
cout<<"    #  "<<endl;
cout<<"#####  "<<endl;
}

void printN()
{
cout<<"#    #"<<endl;
cout<<"##   #"<<endl;
cout<<"# #  #"<<endl;
cout<<"#  # #"<<endl;
cout<<"#   ##"<<endl;
}

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}