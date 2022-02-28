/*
 * barquito.cpp
 *
 *  Created on: 06/01/2020
 *      Author: SamSoft
 */

#include "barquito.h"
#include <cstdlib>
#include <iostream>
using namespace std;

barquito::barquito()
{
	h=0; v=0; auxiliar=0;protocolo=0;
	posicion='\0';acumulador=0;resulto=0;
}
void barquito::iniciarjuego(){
	protocolo++;//variable que lleva cuantos juegos se han jugado
	for(int y=0;y<8;y++){for(int x=0;x<8;x++)//incializa matriz en ceros
		matriz[x][y]=0;}
}
void barquito::pedir_coordenadas(){
	do{
	cout<<endl<<"introduzca cordenada (x): ";
	cin>>h;
	h--;								//para que cuando el usuario introduzca su coordenada coincida con la matriz
		if((h<0)||(h>7))cout<<"ERROR! la coordenada introducida no es valida \n";
		}while((h<0)||(h>7));
		do{
			cout<<"introduzca coordenada (y): ";
		cin>>v;
		v--; 		//para que cuando el usuario introduzca su coordenada coincida con la matriz
		if((v<0)||(v>7))cout<<"ERROR! la coordenada introducida no es valida \n";
			}while((v<0)||(v>7));
		do{
			cout<<"introduzca la posicion de su barco (V) para vertical (h) para horizontal: ";
			cin>>posicion;
			if((posicion != 'h') && (posicion!='H') && (posicion != 'v') && (posicion!='V'))
				cout<<"ERROR! el dato introducido es invalido \n ";
			}while((posicion != 'h') && (posicion!='H') && (posicion != 'v') && (posicion!='V'));
}
	void barquito::pedir_coordenadas2(){
		do{
			cout<<endl<<"introduzca cordenada (x): ";
			cin>>h;
			h--;								//para que cuando el usuario introduzca su coordenada coincida con la matriz
			if((h<0)||(h>7))cout<<"ERROR! la coordenada introducida no es valida \n";
			}while((h<0)||(h>7));
			do{
				cout<<"introduzca coordenada (y): ";
			cin>>v;
			v--; 		//para que cuando el usuario introduzca su coordenada coincida con la matriz
			if((v<0)||(v>7))cout<<"ERROR! la coordenada introducida no es valida \n";
				}while((v<0)||(v>7));

	}


void barquito::pedirdatos(){
	cout<<"introduzca las cordenadas de los barcos pedidos a continuacion: \n\n";

	barquito::mostrar_tablero2();
	cout<<"introduzca coordenadas de su acorazado: \n\n";
	barquito::pedir_coordenadas();

	if((posicion == 'h')||(posicion == 'H')){
		if(h<4){			//comprueba que los barcos no se salgan de la matriz
			for(int x =0;x<=2;x++){matriz[v][h]=1;h++;}//posiciona horizontal los barcos
		}else{for(int x =0;x<=2;x++){matriz[v][h]=1;h--;}
			}
		}else{
			if(v<4){ 				//comprueba que los barcos no se salgan de la matriz
				for(int x =0;x<=2;x++){matriz[v][h]=1;v++;} //posiciona vertical los barcos
			}else{for(int x =0;x<=2;x++){matriz[v][h]=1;v--;}}
		}
	system("cls");
	for(int r= 1;r<=2;r++){//introduce fragatas 2 espacios
		int vspace; //para ordenar las condiciones
		barquito::mostrar_tablero2();
		do{
			vspace=0;

			cout<<endl<<"introduzca coordenadas de su fragata "<<r<<" : ";
			barquito::pedir_coordenadas();

			if(matriz[v][h]!= 0)vspace++;
			if((h<4)||(v<4)){ //se tiene que hacer asi por que si es cuatro o mayor pondra la segunda casilla atras
			if(((posicion== 'h')||(posicion== 'H'))&&(matriz[v][h+1]!=0))vspace++;
			if(((posicion== 'v')||(posicion =='V'))&&(matriz[v+1][h]!=0))vspace++;
			}else{
				if(((posicion== 'h')||(posicion== 'H'))&&(matriz[v][h-1]!=0))vspace++;
				if(((posicion== 'v')||(posicion== 'V'))&&(matriz[v-1][h]!=0))vspace++;
			}
			if(vspace>0)cout<<"ERROR! posicion ocupada ya esta ocupada"<<endl;
		}while(vspace>0);


		if(posicion == 'h'){
				if(h<4){			//comprueba que los barcos no se salgan de la matriz
					for(int x =0;x<2;x++){matriz[v][h]=2;h++;}//posiciona horizontal los barcos
				}else{for(int x =0;x<2;x++){matriz[v][h]=2;h--;}
					}
				}else{
					if(v<4){ 				//comprueba que los barcos no se salgan de la matriz
						for(int x =0;x<2;x++){matriz[v][h]=2;v++;} //posiciona vertical los barcos
					}else{for(int x =0;x<2;x++){matriz[v][h]=2;v--;}}
				}
		system("cls");
	}
	for(int r= 1;r<=3;r++){
		barquito::mostrar_tablero2();
			do{
				cout<<endl<<"introduzca coordenadas de su destructor "<<r<<" : ";
				barquito::pedir_coordenadas2();
				if(matriz[v][h]!=0)cout<<"ERROR la posicion ya esta ocupada: ";
			}while(matriz[v][h]!=0);matriz[v][h]=3;
			system("pause");
			system("cls");
	}
	for(int r=0;r<8;r++){for(int s=0;s<8;s++)matriz2[r][s]=matriz[r][s];}//copia la matriz para ser mostrada al final
}

void barquito::mostrar_tablero(){
	for(int y=0;y<8;y++){
		cout<<"                 ";
		for(int x=0;x<8;x++){
			if (matriz2[y][x]==4)cout<<"O ";
			else if (matriz2[y][x]==5)cout<<"x ";
			else cout<<"# ";

		}
		cout<<endl;
	}
	cout<<"\n\n_______________________________________\n\n";
}
void barquito::mostrar_tablero2(){
	for(int y=0;y<8;y++){
		cout<<"                 ";
			for(int x=0;x<8;x++){
							if (matriz[y][x]==0)cout<<" ~";
							if (matriz[y][x]==1)cout<<" >";
							if (matriz[y][x]==2)cout<<" O";
							if (matriz[y][x]==3)cout<<" +";
			}cout<<endl;
		}
		cout<<"\n\n_______________________________________\n\n";

}
void barquito::resultado(){
	do{
				barquito::pedir_coordenadas2();
				if((matriz2[v][h]==4)||(matriz2[v][h]==5))cout<<"\n ya tiraste en esta posicion \n";
			}while((matriz2[v][h]==4)||(matriz2[v][h]==5));

	if(matriz2 [v][h]==0){
		matriz2[v][h]=4;
		cout<<"\n FALLASTE!"<<endl;// fallo
	}else{matriz2[v][h]=5;acumulador++;cout<<"ACERTASTE! \n";} //acerto y lleva la cuenta
}

void barquito::ganar(){
	cout<<"ultima posiciones de los barcos\n\n\n";
	barquito::mostrar_tablero2();
	int acorazado = 3;
	int fragata=4;
	int destructor=3;


		for(int y=0;y<8;y++){
			for(int x=0;x<8;x++){

				if (matriz2[x][y]==1)acorazado--;
				if (matriz2[x][y]==2)fragata++;
				if(matriz2[x][y]==3)destructor--;
				}
				}
		if(acorazado ==0)resulto++;
		switch(fragata){
		case 0:resulto=resulto+2;break;
		case 1: resulto++;break;
		case 2:resulto++;break;
		}
		for(int r=0;r<=2;r++){if(destructor==r)resulto=resulto+r;}
		cout<<"->Se han jugado: "<<protocolo<<" JUEGOS";
		cout<<"->se hacertaron: "<<acumulador<<"disparos;\n";
		cout<<"->se han destruido: "<<resulto<<"Barcos;\n\n";
		system("cls");

}

