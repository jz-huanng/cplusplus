
#include <iostream>
#include <cstring>
#include <ctime>
#include <windows.h>
#include <conio.h>

using namespace std;

int main(){
	
	init();
	while(!bExit){
		
		sleep(delay_time);
		if(kbhit())	key_control;
		drawApple();
		moveSnake();//apple eaten,bounndary detection,moving
	}
	
	return 0;
	
	
}

 
