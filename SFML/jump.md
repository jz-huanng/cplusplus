

### 230123
---
<br>
**Just for this->**
![](https://github.com/jz-huanng/cplusplus/blob/main/SFML/jump.png?raw=true)<br>
![](https://github.com/jz-huanng/AI-course/blob/gh-pages/images2/parking-detection/labels.png?raw=true)

```

#include <iostream>
#include <SFML/Graphics.hpp>
#include <ctime>
#include <vector>

#define MAX 50

int n=7;
int x[MAX],y[MAX];

using namespace sf;

void bubbleSort(int arr[],int n) {
    for (int  i = 0; i < n - 1; i++) {
        for (int j = 0; j < n- 1 - i; j++) {
            if (arr[j] > arr[j+1]) {        // 相?元素???比
                int temp = arr[j+1];        // 元素交?
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void XYPosition(){
	
	y[0]=rand()%30+10;
	
	for(int i=1;i<n;i++){
		x[i]=rand()%310;
		y[i]=i*(640/--n)-rand()%(64/++n);
	}
	
	

	/*
	//bubbleSort(x,n);
	
	//bubbleSort(y,n);
	
	for(int i=n-1;i>0;i--){
		if(y[i-1]-y[i]<15)	y[i-1]+20;
	}*/
	
}


int main(){
	
	srand((unsigned)time(NULL));
	
	RenderWindow window(VideoMode(360,640)," jump!");
	
	sf::CircleShape ball;
	ball.setRadius(9);
	ball.setFillColor(sf::Color(100,0,0));
	ball.setPosition(30,600);
	
	/*
	sf::RectangleShape plate(sf::Vector2f(50,5));
	plate.setFillColor(sf::Color(156,200,100));*/
	
	//plate plates[MAX];
	//std::vector<sf::RectangleShape> plates;
	
	sf::RectangleShape plates[MAX];
	
	XYPosition();
	
	for(int i=0;i<n;i++){
		plates[i].setSize(sf::Vector2f(50,5));
		plates[i].setFillColor(sf::Color(156+rand()%50,200+rand()%50,100+rand()%50));
		plates[i].setPosition(x[i],y[i]);
	}
	
	while(window.isOpen()){
		Event e;
		while(window.pollEvent(e)){
			if(e.type==Event::Closed)	window.close();
		}
		
	window.clear(sf::Color(255,244,244));
	
	window.draw(ball);
	
	for(int i=0;i<n;i++)	window.draw(plates[i]);
		
	window.display();
	
	}
	
	return 0;
}
```
