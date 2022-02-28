/*
 * barquito.h
 *
 *  Created on: 06/01/2020
 *      Author: SamSoft
 */

#ifndef BARQUITO_H_
#define BARQUITO_H_

class barquito {
public:
	barquito();
	void iniciarjuego(); //inicializa la matriz en cero y llama a otros procedimientos
	void pedir_coordenadas();//pide coordenadas con posicion h o v
	void pedir_coordenadas2();//pide coordenadas sin posicion
	void pedirdatos(); //pide datos del usuario y los acomoda en la matriz
	void mostrar_tablero(); // muestra el espacio de juego que se actualiza
	void mostrar_tablero2(); // muestra el espacio de juego que se actualiza y muestra posicion de barcos
	void resultado(); //arregla la matriz funcion  de fallar o acertar
	void ganar(); //resultado final

private:
	int matriz[8][8];int matriz2[8][8];
	int h,v,auxiliar,protocolo,acumulador;
	int resulto;
	char posicion;
};

#endif /* BARQUITO_H_ */
