#include <iostream>
using namespace std;
main()
{

float init;
float final;
float acce;
float time;
cout<<"Enter the initial velocity: ";
cin>> init;
cout<<"Enter Acceleration: ";
cin>> acce;
cout<<"Enter time: ";
cin>>time;
 
final=(acce*time)+init;
cout<<"Final velocity is :"<<final<<endl;

}
