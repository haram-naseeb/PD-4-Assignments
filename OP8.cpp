#include<iostream>
using namespace std;
void printmenu();
void CalculateAggregate(string stname,float matricMarks,float interMarks,float ecatMarks);
void compareMarks(string nameSTD1,float ecatSTD1,string nameSTD2,float ecatSTD2);
main()
{
 string stname;
 float matricMarks,interMarks,ecatMarks;
 string nameSTD1,nameSTD2;
 float ecatSTD1, ecatSTD2;
 printmenu();
 CalculateAggregate(stname,matricMarks, interMarks, ecatMarks);
 compareMarks(nameSTD1,ecatSTD1,nameSTD2,ecatSTD2);
}

void printmenu()
{
system("color 80");
cout<<"* *  ***  ***  * *  ***  **    **   *** ***  * *        *  **   * *  ***  **   **   ***  ***    ***"<<endl;       
cout<<"* *  * *   *   * *  *    * *  *      *   *   * *       * * * *  ***   *  *    *      *   * *    * *"<<endl;
cout<<"* *  * *   *   * *  **   **    *     *   *    *        *** * *  ***   *   *    *     *   * *    * *"<<endl;
cout<<"* *  * *   *   * *  *    * *    *    *   *    *        * * * *  * *   *    *    *    *   * *    * *"<<endl;
cout<<"***  * *  ***   *   ***  * *  **    ***  *    *        * * **   * *  *** **   **    ***  ***    * *"<<endl;
cout<<"                                                                                                   "<<endl;
cout<<"* *   *   ***   *    **  ***  * *   ***  ***  ***        **    * *    **    ***  ***  * *          "<<endl;
cout<<"***  * *  * *  * *  *    *    ***   *    * *   *        *      * *   *       *   *    ***          "<<endl;
cout<<"***  ***  * *  ***  * *  **   ***   **   * *   *         *      *     *      *   **   ***          "<<endl;
cout<<"* *  * *  * *  * *  * *  *    * *   *    * *   *          *     *      *     *   *    * *          "<<endl;
cout<<"* *  * *  * *  * *   **  ***  * *   ***  * *   *        **      *    **      *   ***  * *          "<<endl;
}

void CalculateAggregate(string stname,float matricMarks,float interMarks,float ecatMarks)
{
 float Agggregate;
 cout<<"Enter your name: ";
 cin>>stname;
 cout<<"Enter your matric marks: ";
 cin>>matricMarks;
 cout<<"Enter your inter marks: ";
 cin>>interMarks;
 cout<<"Enter your ecat marks: ";
 cin>>ecatMarks;
 Agggregate=((interMarks/560*0.3)+(matricMarks/1100*0.3)+(ecatMarks/400*0.4))*100;
 cout<<"Your aggregate is: "<<Agggregate<<endl;
}

void compareMarks(string nameSTD1,float ecatSTD1,string nameSTD2,float ecatSTD2)
{
 cout<<"Enter the name of student 1: ";
 cin>>nameSTD1;
 cout<<"Enter the name of student 2: ";
 cin>>nameSTD2;
 cout<<"Enter ecat marks of student 1: ";
 cin>>ecatSTD1;
 cout<<"Enter ecat marks of student 2: ";
 cin>>ecatSTD2;
if(ecatSTD1>ecatSTD2) 
     cout<<"Roll no is assigned to "<<nameSTD1;
else
     cout<<"Roll no is assigned to "<<nameSTD2;
}