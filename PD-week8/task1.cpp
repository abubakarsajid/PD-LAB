
#include<iostream>
using namespace std;
main()
{ string fruit[4]={"peach","apple","guava","watermelon"};
  int price[4]={60,70,40,30};
  string nameoffruit;
  int quantity;
  cout<<"Enter the name of fruit : ";
  cin>>nameoffruit;
  cout<<"Enter the quantity in kgs : ";
  cin>>quantity;
  int bill=0;

  for(int idx=0; idx<5; idx++)
  {
      if(nameoffruit==fruit[idx])
      {  
         bill= price[idx] * quantity;
       }
    




  } cout<<bill;









}
