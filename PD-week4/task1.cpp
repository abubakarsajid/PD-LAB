#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}

 main()
{

system("cls");
cout<<"My Name Is M.Abubakar";

gotoxy(15,10);
cout<<"I live in Lahore";


}



 