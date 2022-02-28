//============================================================================
// Name        : NAVAL_DESTRUCTION.cpp
// Author      : Heyscar,Sergio,Arantxa,Nelson
// Version     :
// Copyright   : derechos reservados 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include "barquito.h"
using namespace std;
int inicio=3;
barquito w;
int main() {
	while(inicio !=2){
		do{
cout<<"_  _                       _   _  _ ___  _ _ _  _ ___    _  _  _     \n";
cout<<"| /|  /\\ \\   /  /\\  |      |\\ |_ |_  |  |_|| | |   |  | | | | /|   \n";
cout<<"|/ | /--\\ \\ /  /__\\ |__    |/ |_  _| |  | \\|_| |_  |  | |_| |/ |    \n\n";

cout<<"         "<<"                                   )___(   \n";
cout<<"         "<<"                            _______/__/_ \n";
cout<<"         "<<"                   ___     /===========|  ___ \n";
cout<<"         "<<"  ____       __   [///]___/____________|__[///]   __ \n";
cout<<"         "<<" \\%%%|_____[//]__/___________________________|__[//]___ \n";
cout<<"         "<<"  \\40A%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%| \n";
cout<<"         "<<"   \\%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%/  \n";
cout<<"         "<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";


	inicio=3;
	cout<<"         "<<"selecione una opcion\n\n";
	cout<<"         "<<"1) Iniciar juego\n";
	cout<<"         "<<"2) Salir\n\n";
	cout<<"         ";cin>>inicio;
	if((inicio!=2)&&(inicio!=1))cout<<"ERROR! opcion invalida "<<endl;
	system("cls");
}while((inicio!=2)&&(inicio!=1));
if(inicio==1){
	w.iniciarjuego();
	w.pedirdatos();
	for(int juego=1;juego<=15;juego++){
		w.mostrar_tablero();

		w.resultado();
		system("pause");
		system("cls");
	}
	w.ganar();
}
	}
	return 0;
}

