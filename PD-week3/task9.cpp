#include <iostream>
using namespace std;
main()
{

int input;
int sum;
int number1;
int number2;
int number3;
int number4;
cout<<" Enter four digit number: ";
cin>>input;
number1=input%10;
number2=input%100;
number2=number2/10;
number3=input%1000;
number3=number3/100;
number4=input%10000;
number4= number4/1000;
sum = number1+number2+number3+number4;
cout << "sum:"<< sum;

}