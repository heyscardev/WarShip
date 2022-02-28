//	========================================================
//	|     Name     : WAR_SHIP.cpp						   |
//	|     Authors  : HEYSCAR, SERGIO, NELSON Y ARANTXA     | 
//	|     Version  : 2.0								   |
//	========================================================

#include <iostream>
#include <cstdlib>
#include "Barquito.h"
using namespace std;
int nro=0;			//TOMA LA OPCION QUE RETORNA MENU
int u=0;			//CONTADOR DE DISPAROS RESTANTES
char crr=186;		//BARRA DE IGUALDAD INVERTIDA
int respuesta=0;	//PREGUNTA SI QUIERE VOLVER A JUGAR
Barquito w; //NOMBRAMIENTO DE LA CLASE
int main() {	
		system ("color 0B"); //COLOR DE TEXTO Y FONDO
		system("mode con: cols=130 lines=53"); //TAMANYO DE LA VENTANA
			while(nro!=3){		
				nro=w.menu();	//PASAR EL VALOR RETORNADO DEL MENU
	switch(nro){
		case 1:
			do{
				w.iniciarjuego();
				w.pedirdatos();
				u=15;
					for(int juego=1;juego<=15;juego++){	//PERMITE DISPARAR 15 VECES
						cout<<endl;
						cout<<"\t\t\t\t\t=================================\n";
						cout<<"\t\t\t\t\t"<<crr<<"    DISPAROS RESTANTES ["<<u<<"]   "<<crr<<endl;
						cout<<"\t\t\t\t\t=================================\n\n\n";
						w.resultado();
							u--;			
					}
				do{
					w.ganar();
					cout<<"\t\t\t\t\t1) JUGAR DE NUEVO\n";
					cout<<"\t\t\t\t\t2) VOLVER AL MENU PRINCIPAL\n";
					cout<<"\t\t\t\t\t"; cin>>respuesta;
					cout<<endl<<endl;					
						if((respuesta<1)||(respuesta>2))
							cout<<"\t\t\t\t\t\tOH OH! OPCION INVALIDA\n\n";
					cout<<"\t\t\t\t"; system("pause"); system("cls");
				}while((respuesta<1)||(respuesta>2));
			}while(respuesta==1);
			break;
		case 2:
			w.estadisticas();
			break;
		case 3:
			w.fin();
			cout<<"\t\t\t\t\t"; system("pause");
			break;
	}
			}
			return 0;
}
