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
}

void wpisz(){
	for(int i=0; i<4; i++){
		cout<<"podaj"<<" "<<i<<" liczbe"<<endl;
		cin>>p[i];
	}
}

