#include <iostream>
using namespace std;
main()
{
float size;
float costofbag;
float area;
float costperpound;
float fertilizing;



cout<<"Enter the size of fertilizer bag in pounds: ";
cin>>size;
cout<<"Enter the cost of bag: ";
cin>>costofbag;
cout<<"Enter the area in square feet covered by bag: ";
cin>>area;

costperpound = costofbag/size;
fertilizing = area*size;

cout<<"Cost of fertilizer per pound is: "<<costperpound<<endl;
cout<<"Cost of fertilizing area per square feet is : "<<fertilizing<<endl;




}

