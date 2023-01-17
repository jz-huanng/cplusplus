

### instsll SFML

download at: https://www.sfml-dev.org/download.php

>-lsfml-audio<br>
-lsfml-graphics<br>
-lsfml-window<br>
-lsfml-system<br>

```

#include <SFML/Graphics.hpp>
#include <ctime>

using namespace sf;

int main(){
	
	RenderWindow window(VideoMode(320,480)," Tetris");
	
	while(window.isOpen()){
		Event e;
		while(window.pollEvent(e)){
			if(e.type==Event::Closed)	window.close();
		}
	window.clear(Color::White);
	window.display();
	}
	
	return 0;
}

```

```
	Texture tile;
	tile.loadFromFile("images/tiles.png");
	
	Sprite s(tile);
	
	window.draw(s);
```
