
## gotoxy ##


```
#include <windows.h> 
#include <ctime>
#include <cstring>
#include <iostream>

using namespace std;

string name;
int bExit=1; 

void gotoxy(short x, short y);

int main(){

	/////interface/////
	SetConsoleTitle("snake game 230112");
	
	gotoxy(20,11);
	cout<<"first draft"<<endl;
	gotoxy(20,13);
	cout<<"enter your name"<<endl;
	gotoxy(20,14);
	cin>>name;
	system("cls");
	gotoxy(20,14);
	cout<<"your name is "<<name;
	gotoxy(20,15);
	cout<<"game start";
	cin.get();
	cin.get();
	system("cls");
	
	while(!bExit){//Gaming
	
	
	}
	gotoxy(30, 10);//Gamw over
    cout << "Game Over!!!";
    //Sleep(2000);
    gotoxy(28, 12);
    system("pause");
    return 0;
}

void gotoxy(short x, short y)
{
    /*COORD position = { x, y };
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hOut, position);*/
	COORD pos;
	pos.X=x;
	pos.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
```
