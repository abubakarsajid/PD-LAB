#include<iostream> 

using namespace std;

main (){

    int number;
    cout<<" Enter Your Number: ";
    cin>>number;

    int numbers[number];
    bool flag=false;

for (int i=0 ; i< number ; i++){
    cout<<"Enter number at index "<<i<<" : ";
    cin>>numbers[i];
    cout<<endl;

    if(numbers[i]==7){
        flag=true;
        break;
    }
    else{
        flag=false;
    }
}

if(flag==true){
            cout<<"BOOM!!!";

}
else{
    cout<<"THERE IS NO 7 IN THE ARRAY";
}
}