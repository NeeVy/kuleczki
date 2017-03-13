#include <iostream>

using namespace std;

void generate(){
	
}

void ShowGame(int **hist){
	for(int i = 0; i<9; i++){
		for(int j = 0; j < 4; j++){
			cout << hist[i][j] << "\t";
		}
		cout << endl;
	}
}

void newgame(){
	//int tab[] = generate();
	int history[9][4];
	for(int i = 0; i<9; i++)
		for(int j = 0; j < 4; j++)
			history[i][j] = 0;	
	
	ShowGame(history);
	generate();
}
