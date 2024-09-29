#include<iostream>
using namespace std;
void flowershop(int redrose, int whiterose, int tulip);

main()
{
int redrose,whiterose,tulip;
cout<<"Red Rose: ";
cin>>redrose;
cout<<"White Rose: ";
cin>>whiterose;
cout<<"Tulips: ";
cin>>tulip;
flowershop(redrose,whiterose,tulip);
}

void flowershop(int redrose, int whiterose, int tulip)
{
   float total_price=2.0*redrose+4.10*whiterose+2.50*tulip;
   float discounted_price,discount;

   cout<<"original price: $"<<total_price<<endl;


if(total_price>=200)
{
    discount=total_price*0.2;

    discounted_price=total_price-discount;
   
    cout<<"Price after discount: $"<<discounted_price;
}

if(total_price<200)
    cout<<"No discount applied";
}

