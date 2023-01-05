#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int, int);
main()
{ 
	system("cls");
	int x=15;
	int y=8;
	gotoxy(x,y);
	cout<<"M.ABUBAKAR SAJID";
	


}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}