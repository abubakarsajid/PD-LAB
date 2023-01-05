#include <iostream>
using namespace std;
main()
{
string name;
int adult;
float child;
float adult_sold;
float child_sold;
float percentage;
float total;
float percentage_donate;
float donation;



cout<<"Enter Movie Name: ";
	cin>> name;
cout<<"Enter adult ticket price: ";
	cin>> adult;
cout<<"Enter child ticket price: ";
	cin>> child;
cout<<"Enter the number of adults tickets sold: ";
	cin>> adult_sold;
cout<<"Enter number of child tickets sold: ";
	cin>> child_sold;
cout<<"Enter Percentage To Donate: ";
        cin>> percentage;

total=(adult*adult_sold)+(child*child_sold);

cout<<"Total Amount Generated: "<<total<<endl;

percentage_donate= percentage/100*total;

donation=(total-percentage_donate);

cout<<"Amount after donation: "<<donation<<endl;


}

