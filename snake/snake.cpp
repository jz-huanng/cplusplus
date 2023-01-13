//hello

#include <iostream>
#include <cstring>
#include <ctime>
#include <windows.h>
#include <conio.h>

using namespace std;

#define M 22
#define maxlength 100

struct item{
	int x=5,y=5;
	char c='T';
};	

item snake[maxlength];
item apple/*,fence*/;

int length=0;//need to notice 
int rdm;
int delay_time=500;
int bExit=0;

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

int IsTXR(int x,int y){
	int i;
	for(i=0;i<=length;i++){
		if(apple.x==snake[i].x&&apple.y==snake[i].y)	return 1;
	}
	return 0;
} 

void draw(int x,int y,char c){
	gotoxy(x,y);
	cout<<c;
}

void drawApple(){
	
	do{
		apple.x=rand()%(M-4)+3;
		apple.y=rand()%(M-4)+3;
	}while(IsTXR(apple.x,apple.y));
	draw(apple.x,apple.y,apple.c);
}

void drawFence(){
	int i,j;
	for(i=0;i<M;i++){
		for(j=0;j<M;j++){
			
			if(i==0||i==M-1)	draw(i,j,'*');
			else if(j==0||j==M-1)	draw(i,j,'*');
		}
	}
}

void key_control(){
	
}

void init(){
	snake[0].c='S';
	apple.c='A';	
	drawFence();
	//snake[0].x=rand()%(M-4)+3;
	//snake[0].y=snake[0].x;
	draw(snake[0].x,snake[0].y,snake[0].c);
	
	
}

void moveSnake(){
	Sleep(10000);
}

int main(){
	
	srand((unsigned)time(NULL));
	init();
	while(!bExit){
		
		Sleep(delay_time);
		if(kbhit())	key_control;
		drawApple();
		moveSnake();//apple eaten,bounndary detection,moving
	}
	
	return 0;
	
}
