#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int history[9][4];
int result[9][4];
int *numbers;
bool win = false;

void hack(){
	cout<<"wygenerowane liczby: "<<endl;
	for (int i=0; i<4; i++){
		cout<<numbers[i]<<"\t";
	}
	cout<<endl<<endl;
}

enum Color{
	white = 15,
	grey = 8,
	lightGrey = 7,
	green = 10,
	cyan = 11,
	red = 12,
	pink = 13,
	yellow = 14,
	blue = 9,
	purple = 5,
	darkRed = 4
};

void SetColor(int _color){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hConsole, _color);
}
void RefreshGame(){
	system("cls");
	hack();
	
	for(int i = 8; i >= 0; i--){
		SetColor(white);
		cout << i+1 <<"|";
		
		for(int j = 0; j < 4; j++){
			SetColor(history[i][j]+7);
			cout << "   " <<((history[i][j] == 0) ? '_' : (char)(history[i][j]+'0') ); 	
		}
		
		SetColor(white);
		cout << "   |";
		
		for(int j = 0; j < 4; j++){
			if(result[i][j] == 0){
				SetColor(grey);
				cout << "- ";
			}
			else if(result[i][j] == 1){
				SetColor(lightGrey);
				cout << "o ";
			}
			else if(result[i][j] == 2){
				SetColor(white);
				cout << "@ ";
			}
		}
		
		cout << endl<<endl;
		SetColor(white);
	}
}

void check(int i){
	int tab[4];
	int goodColors = 0;
	int onPosition = 0;
	
	for(int j = 0; j < 4; j++){
		tab[j] = history[i][j];
	}
	
	for(int k = 0; k < 4; k++){
		for(int j = 0; j < 4; j++){
			if(numbers[k] == tab[j]){
				if(k == j)
					onPosition++;
				else
					goodColors++;
			}
		}
	}
	
	if(onPosition == 4)
		win = true;
	
	for(int j = 0; j < 4; j++){
		if(onPosition > 0){
			result[i][j] = 2;
			onPosition--;		
		}
		else if(goodColors > 0){
			result[i][j] = 1;
			goodColors--;
		}
		else
			result[i][j] = 0;
	}
	

}

int *generate(){
	srand(time(NULL));
	int *p = new int[4];
	
	for(int i=0; i<4; i++){
		p[i]=rand()%8+1;
	}
	return p;
}

void wpisz(int i){
	for(int j=0; j<4; j++){
		do{
		cout<<"["<<j<<"]- ";
		cin>>history[i][j];
		cout << endl;
		
		if(history[i][j] < 1 || history[i][j] > 8)
			history[i][j] = 0;
		
		RefreshGame();
		
		}while(history[i][j] == 0);
	}
}

void Win(int i){
	cout << "Wygrales przy " << i << "probie!!!\n";
}

void newgame(){
	numbers = generate();

	for(int i = 0; i<9; i++){
		for(int j = 0; j < 4; j++){
			history[i][j] = 0;	
			result[i][j] = -1;
		}
	}
	
	RefreshGame();
	generate();
	hack();
	int level = 0;
	
	for(int i=0; i<9; i++){
		
		if(!win){
			level = i+1;
			RefreshGame();
			wpisz(i);
			check(i);
		}
		else
			Win(level);
	}
	
	RefreshGame();
	
	if(win)
		Win(level);
}





