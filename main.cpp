#include <iostream>
#include "function.h"

using namespace std;

int main(){
	
	while(true){
		newgame();
		
		char c;
		cout << "Czy chcesz zagrac jeszcze raz? [t/n]";
		cin >> c;
		if(c != 'N' || != 'n')
			break;
	}
}
