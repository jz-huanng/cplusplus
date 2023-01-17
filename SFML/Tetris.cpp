

#include <SFML/Graphics.hpp>
#include <ctime>

using namespace sf;

const int M = 20;
const int N = 10;
int field[M][N] = {0};
int dx=0,rotate=0,colorNum=1;

struct Point
{int x,y;} a[4], b[4];

int figures[7][4] =
{	
	//1,2,3,4,
    1,3,5,7, // I
    2,4,5,7, // Z
    3,5,4,6, // S
    3,5,4,7, // T
    2,3,5,7, // L
    3,5,7,6, // J
    2,3,4,5, // O
};

void Tile(){
	
	int n=3;
	
	for(int i=0;i<4;i++){
		a[i].x=figures[n][i]%2;
		a[i].y=figures[n][i]/2;
	}
	
}

int main(){
	
	RenderWindow window(VideoMode(320,480)," Tetris");
	
	Texture tile;
	tile.loadFromFile("images/tiles.png");
	
	Sprite s(tile);
	s.setTextureRect(IntRect(0,0,18,18));
	
	while(window.isOpen()){
		Event e;
		while(window.pollEvent(e)){
			if(e.type==Event::Closed)	window.close();
			if(e.type==Event::KeyPressed){
				if(e.key.code==Keyboard::Up)	rotate=1;
				else if(e.key.code==Keyboard::Left)	dx=-1;
				else if(e.key.code==Keyboard::Right)	dx=1;
			}
		}
		
	Tile();
	window.clear(Color::White);
	for(int i=0;i<4;i++){
		s.setPosition(a[i].x*18,a[i].y*18);
		window.draw(s);
	}
	window.display();
	//window.draw(s);
	}
	
	return 0;
}



