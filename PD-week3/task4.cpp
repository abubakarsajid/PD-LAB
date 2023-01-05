#include <iostream>
using namespace std;
main()
{
string name;
float sub1;
float sub2;
float sub3;
float sub4;
float sub5;
float percentage;

cout<<"Enter Your Name:";
cin>>name;
cout<<"Enter subject 1 marks: ";
cin>>sub1;
cout<<"Enter subject 2 marks: ";
cin>>sub2;
cout<<"Enter subject 3 marks: ";
cin>>sub3;
cout<<"Enter subject 4 marks: ";
cin>>sub4;
cout<<"Enter subject 5 marks: ";
cin>>sub5;

percentage=(sub1+sub2+sub3+sub4+sub5)/500*100;

cout<<"Your Percentage Is :"<<percentage<<endl;

}


