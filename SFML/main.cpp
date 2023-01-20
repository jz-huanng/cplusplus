

#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

//using namespace sf;

int main(){
	
	//Window
	sf::RenderWindow window(sf::VideoMode(640,480),"wINDOW",sf::Style::Titlebar | sf::Style::Close/* | sf::Style::Resize*/);
	/*sf::Window window(); not enough to use:RenderWinodw.clear();*/
	sf::Event ev;
	
	//Game loop
	while(window.isOpen()){//wrong IsOpen
		
		//Event Polling
		while(window.pollEvent(ev)){
			switch (ev.type){
				
				case sf::Event::Closed:
					window.close();
					break;
				case sf::Event::KeyPressed:
					if(ev.key.code==sf::Keyboard::Escape)	window.close(); /*wrong KeyBoard*/
					break;
				
			}
		}
		
		//Update
		
		//Render
		window.clear(sf::Color(220,220,220));//clear old frame
		//(220,220,220) Gainsboro// 
		//sf::Color::Blue
		
		//Draw your window
		
		window.display();//Tll app that window is ready to draw
		
	}
	
	//End of Application
	
	
	return 0;
}

