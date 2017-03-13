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
}

void newgame(){
	;
}

void wpisz(){
	for(int i=0; i<4; i++){
		cout<<"podaj"<<" "<<i<<" liczbe"<<endl;
		cin>>p[i];
	}
}

