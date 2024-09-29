#include<iostream>
using namespace std;
void final_price(string country_name, float ticket_price);

main()
{
string country_name;
float ticket_price;
cout<<"Enter the country's name: ";
cin>>country_name;
cout<<"Enter the ticket's price in dollars: $";
cin>>ticket_price;
final_price(country_name,ticket_price);
}

void final_price(string country_name, float ticket_price)
{
float final_price;

 if(country_name=="Pakistan")
  {
   final_price=ticket_price-(ticket_price*0.05);
   cout<<"Final ticket price after discount: $"<<final_price<<endl;
  }
 
 if(country_name=="India")
  {
   final_price=ticket_price-(ticket_price*0.2);
   cout<<"Final ticket price after discount: $"<<final_price<<endl;
  }

 if(country_name=="Ireland")
  {
   final_price=ticket_price-(ticket_price*0.1);
   cout<<"Final ticket price after discount: $"<<final_price<<endl;
  }

 if(country_name=="England")
  {
   final_price=ticket_price-(ticket_price*0.3);
   cout<<"Final ticket price after discount: $"<<final_price<<endl;
  }

 if(country_name=="Canada")
  {
   final_price=ticket_price-(ticket_price*0.45);
   cout<<"Final ticket price after discount: $"<<final_price<<endl;
  }

}


