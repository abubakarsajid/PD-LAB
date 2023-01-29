#include<iostream>

#include<windows.h>

using namespace std;

float calculater(float price,char code);
main()
{
  float price,result;
  char code;
  cout<<"Enter the price of vehicle: ";
  cin>>price;
  cout<<"Enter the code of vehicle in capital: ";
  cin>>code;
 result=calculater(price,code);
 cout<<"Your Final Price after tax is: "<<result;
}
 float calculater(float price,char code)
{
 float taxamount,taxprice;
 if(code=='M')
{ 
  
 taxamount=price*0.06; 
 taxprice=price-taxamount;
 
} 
 if(code=='E')
{
  
 taxamount=price*0.08; 
 taxprice=price-taxamount;

}
if (code=='S')
{
 
 taxamount=price*0.1; 
 taxprice=price-taxamount;

}
if (code=='V')
{

 taxamount=price*0.12; 
 taxprice=price-taxamount;
 
}  
if (code=='T')
{
 

 taxamount=price*0.15; 
 taxprice=price-taxamount;

}
return taxprice;  
}