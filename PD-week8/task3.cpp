
#include<iostream>
using namespace std;
main()
{ int number;
  string letter;
cout<<"Enter how many words you want to enter : ";
cin>>number;
string arr[number];
for(int idx=0; idx<number; idx++)
{
   cout<<"Enter Word "<<idx<<endl;
   cin>>arr[idx];
   
}
 cout<<"Enter The Letter You Want To Enter :"<<endl;
 cin>>letter;

  int count;
  while(letter==arr[0] || letter==arr[1] || letter==arr[2] || letter==arr[3] || letter==arr[4]
){
    count++;



}
cout<<"The "<< letter << "shows up" <<count << "Times" ;
  
  }



  









