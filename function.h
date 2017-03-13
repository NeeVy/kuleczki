#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;
int history[9][4];

int *generate(){
	srand(time(NULL));
	int p[4];
	
	for(int i=0; i<4; i++){
		p[i]=rand()%8+1;
	}
	return p;
}

	

void hack(){
	cout<<"wygenerowane liczby"<<endl;
	for (int i=0; i<4; i++){
		//cout<<p[i]<<"\t";
	}
	cout<<endl;
}

void check(){
//	for(int i=0; i<4; i++){
//		if( ==p[i])	cout<<
//	}
;	
}

void ShowGame(){
	
}

void newgame(){
	int tab[4] = generate();

	for(int i = 0; i<9; i++)
		for(int j = 0; j < 4; j++)
			history[i][j] = 0;	
	
	ShowGame();
	generate();
	hack();
	
	for(int i=0; i<9; i++){
		wpisz(i);
		ShowGame(history);
	}
}

void wpisz(int i){
	for(int j=0; j<4; j++){
		cout<<"podaj"<<" "<<j<<" liczbe"<<endl;
		cin>>p[i][j];
	}
}

