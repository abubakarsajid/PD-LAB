#include<iostream>

using namespace std;

void challan(int speed);

main(){
    int speed;
    cout<<"ENTER THE SPEED IN KM/H: ";
    cin>>speed;

    challan(speed);
   

}

void challan(int speed){
    if(speed > 100){
        cout<<" Halt...You Will Be Fined!!!";
    }
    if(speed <= 100){
        cout<<" Perfect, You're Going Good";
    }
}