#include <iostream>

using namespace std;

int generate(){
	srand(time(NULL));
	for(int i=0; i<4; i++){
		p[i]=rand()%8+1;
	}
	return p[];
}

void hack(){
	cout<<"wygenerowane liczby"<<endl;
	for (int i=0; i<4; i++){
		cout<<p[i]<<"\t";
	}
	cout<<endl;
}

void check(){
//	for(int i=0; i<4; i++){
//		if( ==p[i])	cout<<
//	}
;	
}

void newgame(){
	//int tab[] = generate();
	int history[9][4];
	for(int i = 0; i<9; i++)
		for(int j = 0; j < 4; j++)
			history[i][j] = 0;	
	
	ShowGame(history);
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

