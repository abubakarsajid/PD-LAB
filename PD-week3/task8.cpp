#include <iostream>
using namespace std;
main()
{
float a;
float b;
int c;
int d;
float vegetables_cost;
float fruits_cost;
float total;

cout<<"Enter vegetable price per kg : ";
cin>>a;
cout<<"Enter fruit price per kg: ";
cin>>b;
cout<<"Enter total kgs of vegetables: ";
cin>>c;
cout<<"Enter total kilograms of vegetables: ";
cin>>d;

vegetables_cost= a*c;
fruits_cost= b*d;
cout<<"Vegetable cost is: "<<vegetables_cost<<endl;
cout<<"Fruits Cost is: "<<fruits_cost<<endl;

total= (vegetables_cost+fruits_cost)/1.94;
cout<<"Total: "<<total<<endl;

}
