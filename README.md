# cplusplus

**230114 SFML yey to install**<br>
**230115 install SFML**
---

<br>

```
void drawBoundary(){
	int i,j;
	for(i=0;i<M;i++){
		for(j=0;j<M;j++){
			
			if(i==0||i==M-1){
				gotoxy(i,j);
				cout<<'#';
			}
			else if(j==0||j==M-1){
				gotoxy(i,j);
				cout<<'#';
			}
		}
	}
}

```
