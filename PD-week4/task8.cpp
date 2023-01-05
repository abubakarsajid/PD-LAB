#include<iostream>

using namespace std;

void checknumber(int number1 , int number2);

main(){
   
        int number1 , number2 ;

	cout<<"ENTER FIRST NUMBER: ";
        cin>>number1;

	cout<<"ENTER SECOND NUMBER: ";
        cin>>number2;

        checknumber(number1,number2);


}

void checknumber(int number1 , int number2){
    
 	if(number1==number2){
             cout<<"TRUE"<<endl;
         }
 	if(number1!=number2){
             cout<<"FALSE"<<endl;
         }
}        