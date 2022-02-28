//	========================
//	|     Barquito.cpp     |
//	========================

#include "Barquito.h"
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

	Barquito::Barquito(){
		h=0; v=0;	auxiliar=0;	protocolo=0;						//INICIALIZA 
		posicion='\0';	acumulador=0;	resulto=0; validador=true; 	//LOS
		brr=186; glu=177; fallador=0; copr=184;	coxiliar=0;			//ATRIBUTOS
	}
	void Barquito::logo(){	//MUESTRA EL LOGO
			cout<<"\t\t\t\t\t[ CREADO POR: HEYSCAR, SERGIO, NELSON, ARANTXA "<<copr<<" ]";
			cout<<"\n\n";
			cout<<"	`8.`888b                 ,8' .8.          8 888888888o.     d888888o.   8 8888        8  8 8888  8 888888888o  \n";
			cout<<"	 `8.`888b               ,8' .888.         8 8888    `88.  .`8888:' `88. 8 8888        8  8 8888  8 8888    `88.\n";
			cout<<"	  `8.`888b             ,8' :88888.        8 8888     `88  8.`8888.   Y8 8 8888        8  8 8888  8 8888     `88\n";
			cout<<"	   `8.`888b     .b    ,8' . `88888.       8 8888     ,88  `8.`8888.     8 8888        8  8 8888  8 8888     ,88\n";
			cout<<"	    `8.`888b    88b  ,8' .8. `88888.      8 8888.   ,88'   `8.`8888.    8 8888        8  8 8888  8 8888.   ,88'\n";
			cout<<"	     `8.`888b .`888b,8' .8`8. `88888.     8 888888888P'     `8.`8888.   8 8888        8  8 8888  8 888888888P' \n";
			cout<<"	      `8.`888b8.`8888' .8' `8. `88888.    8 8888`8b          `8.`8888.  8 8888888888888  8 8888  8 8888        \n";
			cout<<"	       `8.`888`8.`88' .8'   `8. `88888.   8 8888 `8b.    8b   `8.`8888. 8 8888        8  8 8888  8 8888        \n";
			cout<<"	        `8.`8' `8,`' .888888888. `88888.  8 8888   `8b.  `8b.  ;8.`8888 8 8888        8  8 8888  8 8888        \n";
			cout<<"	         `8.`   `8' .8'       `8. `88888. 8 8888     `88. `Y8888P ,88P' 8 8888        8  8 8888  8 8888  \n";
			cout<<"\n\n";
			cout<<"				                       $                     .........\n";
			cout<<"				                      $$$      .oo..     'oooo'oooo'ooooooooo....\n";
			cout<<"				                       $       $$$$$$$\n";
			cout<<"				                   .ooooooo.   $$!!!!!\n";
			cout<<"				                 .'.........'. $$!!!!!      o$$oo.   ...oo,oooo,oooo'ooo''\n";
			cout<<"				    $          .o'  oooooo   '.$$!!!!!      $$!!!!!       'oo''oooo''\n";
			cout<<"				 ..o$ooo...    $                '!!''!.     $$!!!!!\n";
			cout<<"				 $    ..  '''oo$$$$$$$$$$$$$.    '    'oo.  $$!!!!!\n";
			cout<<"				 !.......      '''..$$ $$ $$$   ..        '.$$!!''!\n";
			cout<<"				 !!$$$!!!!!!!!oooo......   '''  $$ $$ :o           'oo.\n";
			cout<<"				 !!$$$!!!$$!$$!!!!!!!!!!oo.....     ' ''  o$$o .      ''oo..\n";
			cout<<"				 !!!$$!!!!!!!!!!!!!!!!!!!!!!!!!!!!ooooo..      'o  oo..    $\n";
			cout<<"				  '!!$$!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!oooooo..  ''   ,$\n";
			cout<<"				   '!!$!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!oooo..$$\n";
			cout<<"				    !!$!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!$'\n";
			cout<<"				     '$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$!!!!!!!!!!!!!!!!!!,\n";
			cout<<"				      $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
			cout<<"			~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<"			    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n";
	}
	int Barquito::menu(){	//LEE LAS OPCIONES DEL MENU
			int opcion=0;
		do{
			Barquito::logo();
			validador=true;	//VALIDADOR DEL CICLO
			opcion=0;	//INICIALIZA EL ATRIBUTO EN CERO
			cout<<"\t\t\t\t\t\t===============================\n";
			cout<<"\t\t\t\t\t\t"<<brr<<"    SELECCIONE UNA OPCION    "<<brr<<endl;
			cout<<"\t\t\t\t\t\t===============================\n\n";
			cout<<"\t\t\t\t\t1) INICIAR JUEGO\n";
			cout<<"\t\t\t\t\t2) ESTADISTICAS\n";
			cout<<"\t\t\t\t\t3) SALIR\n\n";
			cout<<"\t\t\t\t\t\t[OPCION]: ";cin>>opcion;
			cout<<"\n\n";
			if((opcion<1)||(opcion>3)){
				cout<<endl<<endl;
				cout<<"\t\t\t\t\t	OH OH! OPCION INVALIDA.\n\n";
				validador=false;
				cout<<"\t\t\t\t\t\t"; system("pause");
			}	system("cls");
		}while(validador==false);
		return opcion;
	}
	void Barquito::iniciarjuego(){
		protocolo++;	//INDICADOR DE JUEGOS JUGADOS
		for(int y=0;y<8;y++){
			for(int x=0;x<8;x++) matriz[x][y]=0;	//INICIALIZA LA MATRIZ EN CERO				
			}
	}
	void Barquito::pedir_coordenadas(){
		do{	
			cout<<endl<<endl;
			Barquito::mostrar_tablero2();
			cout<<"\t\t\t\t\tINGRESE COORDENADA [X]\n\n"; 
			cout<<"\t\t\t\t\t"; cout<<"[HORINZONTAL]: "; cin>>h;
				h--;	//COINCIDE EL NUMERO INGRESADO CON LA MATRIZ
					if((h<0)||(h>7)){
						cout<<endl<<endl;
						cout<<"\t\t\t\t\t\tOH OH! TU COORDENADA NO ES VALIDA.\n\n";
						cout<<"\t\t\t\t\t"; system("pause");
					}system("cls");
		}while((h<0)||(h>7));
		do{	
			cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
			Barquito::mostrar_tablero2();
			cout<<"\t\t\t\t\tINGRESE COORDENADA [Y]\n\n"; cout<<"\t\t\t\t\t"; cout<<"[VERTICAL]: "; cin>>v;
				v--;	//COINCIDE EL NUMERO INGRESADO CON LA MATRIZ
				if((v<0)||(v>7)){
					cout<<endl<<endl;
					cout<<"\t\t\t\t\t\tOH OH! TU COORDENADA NO ES VALIDA.\n\n";
					cout<<"\t\t\t\t\t";system("pause");
				}system("cls");
		}while((v<0)||(v>7));
		do{	
			cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
			Barquito::mostrar_tablero2();
			validador=true;	//VALIDADOR
				cout<<"\t\t\t\t\tINGRESE EL SENTIDO DEL BARCO:\n\n";
				cout<<"\t\t\t\t\t-PRESIONE [H] PARA HORIZONTAL.\n";
				cout<<"\t\t\t\t\t-PRESIONE [V] PARA VERTICAL.\n\n\n";
				cout<<"\t\t\t\t[SENTIDO]: ";cin>>posicion;
					if((posicion !='h')&&(posicion!='H')&&(posicion != 'v')&&(posicion!='V')){
						cout<<endl;
						cout<<"\t\t\t\t\t\tOH OH! TU LETRA NO ES CORRECTA.\n\n"; validador=false;
						cout<<"\t\t\t\t\t";system("pause");
					}system("cls");

		}while(validador==false);
	}
	void Barquito::pedir_coordenadas2(){
		do{	
			system("cls");
			Barquito::mostrar_tablero();
			cout<<"\t\t\t\t\tINGRESE COORDENADA (X): ";cin>>h;
				h--;	//COINCIDE EL NUMERO INGRESADO CON LA MATRIZ
				if((h<0)||(h>7)){
					cout<<endl<<endl;
					cout<<"\t\t\t\t\t\tOH OH! TU COORDENADA NO ES VALIDA.\n";
					cout<<"\t\t\t\t"; system("pause");
				}system("cls");
		}while((h<0)||(h>7));
		do{
			system("cls");
			Barquito::mostrar_tablero();
			cout<<"\t\t\t\t\tINGRESE COORDENADA (Y): ";cin>>v;
				v--;	//COINCIDE EL NUMERO INGRESADO CON LA MATRIZ
				if((v<0)||(v>7)){
					cout<<endl<<endl;
					cout<<"\t\t\t\t\t\tOH OH! TU COORDENADA NO ES VALIDA.\n";
					cout<<"\t\t\t\t"; system("pause");
				}system("cls");
		}while((v<0)||(v>7));
	}
	void Barquito::pedirdatos(){ //PIDE LOS DATOS PARA POSICIONAR LOS BARCOS
		cout<<endl;
		cout<<"\t\t\t\t\t\t===============================\n";
		cout<<"\t\t\t\t\t\t"<<brr<<"    BARCO ACORAZADO NRO 1    "<<brr<<endl;
		cout<<"\t\t\t\t\t\t===============================\n\n";
		Barquito::pedir_coordenadas();
		cout<<endl;				
			if((posicion=='h')||(posicion=='H')){
				if(h<4){	//VERIFICA QUE LOS DATOS NO SALGAN DE LA MTRIZ
					for(int x =0;x<=2;x++){matriz[v][h]=1;h++;	//POSICIONA EN HORIZONTAL LOS BARCOS
					}
				}else{	for(int x =0;x<=2;x++){matriz[v][h]=1;h--;
						}
				}
			}else{
				if(v<4){	//VERIFICA QUE LOS DATOS NO SALGAN DE LA MTRIZ
					for(int x =0;x<=2;x++){matriz[v][h]=1;v++;	//POSICIONA EN VERTICAL LOS BARCOS
					}
				}else{for(int x =0;x<=2;x++){matriz[v][h]=1;v--;}}
			}system("cls");
			int vspace;	//VALIDA LOS ESPACIOS
					do{ cout<<endl;
					cout<<"\t\t\t\t\t\t=============================\n";
					cout<<"\t\t\t\t\t\t"<<brr<<"    BARCO FRAGATA NRO 1    "<<brr<<endl;
					cout<<"\t\t\t\t\t\t=============================\n\n";
						vspace=0;
						Barquito::pedir_coordenadas();
						cout<<endl;

						if(matriz[v][h]!= 0)vspace++;
						if((h<4)||(v<4)){ //SE TIENE QUE HACER ASI POR QUE SI ES CUATRO O MAYOR PONDRA LA SEGUNDA CASILLA ATRAS
							if(((posicion== 'h')||(posicion== 'H'))&&(matriz[v][h+1]!=0))vspace++;
							if(((posicion== 'v')||(posicion =='V'))&&(matriz[v+1][h]!=0))vspace++;
						}else{
							if(((posicion== 'h')||(posicion== 'H'))&&(matriz[v][h-1]!=0))vspace++;
							if(((posicion== 'v')||(posicion== 'V'))&&(matriz[v-1][h]!=0))vspace++;
						}
						if(vspace>0){cout<<endl<<endl;
						cout<<"\t\t\t\t\tOH OH! POSICION OCUPADA.\n\n";
						system("pause");
						}system("cls");
					}while(vspace>0);
		if((posicion == 'h')||(posicion == 'H')){
					if(h<4){	//VERIFICA QUE LOS DATOS NO SALGAN DE LA MTRIZ
						for(int x =0;x<2;x++){matriz[v][h]=6;h++;}	//POSICIONA EN HORIZONTAL LOS BARCOS
					}else{	for(int x =0;x<2;x++){matriz[v][h]=6;h--;}
					}
				}else{
					if(v<4){	//VERIFICA QUE LOS DATOS NO SALGAN DE LA MTRIZ
						for(int x =0;x<2;x++){matriz[v][h]=6;v++;}	//POSICIONA EN VERTICAL LOS BARCOS
					}else{for(int x =0;x<2;x++){matriz[v][h]=6;v--;}}
				}
		system("cls");
		do{	cout<<endl;
			cout<<"\t\t\t\t\t\t=============================\n";
			cout<<"\t\t\t\t\t\t"<<brr<<"    BARCO FRAGATA NRO 2    "<<brr<<endl;
			cout<<"\t\t\t\t\t\t=============================\n\n";
				//INTRODUCE FRAGATA 2 ESPACIOS
			vspace=0;
				Barquito::pedir_coordenadas();
				cout<<endl;
				if(matriz[v][h]!= 0)vspace++;
				if((h<4)||(v<4)){ //SE TIENE QUE HACER ASI POR QUE SI ES CUATRO O MAYOR PONDRA LA SEGUNDA CASILLA ATRAS
					if(((posicion== 'h')||(posicion== 'H'))&&(matriz[v][h+1]!=0))vspace++;
					if(((posicion== 'v')||(posicion =='V'))&&(matriz[v+1][h]!=0))vspace++;
				}else{
					if(((posicion== 'h')||(posicion== 'H'))&&(matriz[v][h-1]!=0))vspace++;
					if(((posicion== 'v')||(posicion== 'V'))&&(matriz[v-1][h]!=0))vspace++;
					}
				if(vspace>0){cout<<endl<<endl;
					cout<<"\t\t\t\t\tOH OH! POSICION OCUPADA.\n\n";
					system("pause");
				}system("cls");
		}while(vspace>0);
		if((posicion == 'h')||(posicion == 'H')){
			if(h<4){	//VERIFICA QUE LOS DATOS NO SALGAN DE LA MTRIZ
				for(int x =0;x<2;x++){matriz[v][h]=2;h++;}	//POSICIONA EN HORIZONTAL LOS BARCOS
			}else{	for(int x =0;x<2;x++){matriz[v][h]=2;h--;}
			}
		}else{
			if(v<4){	//VERIFICA QUE LOS DATOS NO SALGAN DE LA MTRIZ
				for(int x =0;x<2;x++){matriz[v][h]=2;v++;}	//POSICIONA EN VERTICAL LOS BARCOS
			}else{for(int x =0;x<2;x++){matriz[v][h]=2;v--;}}
		}
		system("cls");
		for(int r= 1;r<=3;r++){
			do{	cout<<endl;
				cout<<"\t\t\t\t\t\t================================\n";
				cout<<"\t\t\t\t\t\t"<<brr<<"    BARCO DESTRUCTOR NRO "<<r<<"    "<<brr<<endl;
				cout<<"\t\t\t\t\t\t================================\n\n";
				Barquito::pedir_coordenadas();
				cout<<endl;
				if(matriz[v][h]!=0){ cout<<endl<<endl;
					cout<<"\t\t\t\t\tOH OH! POSICION OCUPADA.\n\n";
					system("pause");
				}system("cls");
			}while(matriz[v][h]!=0);matriz[v][h]=3;


		}
		for(int r=0;r<8;r++){for(int s=0;s<8;s++)matriz2[r][s]=matriz[r][s];	//COPIA LA MATRIZ PARA SER MOSTRADA LUEGO
		system("cls");
		}
	}
	void Barquito::mostrar_tablero(){	//INDICA SI FALLO O ACERTO EL DISPARO
		cout<<endl<<endl;
		for(int y=0;y<8;y++){
			cout<<"\t\t\t\t\t";
			for(int x=0;x<8;x++){	//DIBUJA PRIMERA FILA DE LA CELDA
				if (matriz2[y][x]==4)cout<<"OOOOO"; //ACERTO
				else if (matriz2[y][x]==5)cout<<"XXXXX"; //FALLO
				else cout<<glu<<glu<<glu<<glu<<glu;	//AGUA
				cout<<" ";
			}
			cout<<endl;
			cout<<"\t\t\t\t\t";
			for(int x=0;x<8;x++){	//DIBUJA SEGUNDA FILA DE LA CELDA
				if (matriz2[y][x]==4)cout<<"OOOOO";
				else if (matriz2[y][x]==5)cout<<"XXXXX";
				else cout<<glu<<glu<<glu<<glu<<glu;
				cout<<" ";
			}
			cout<<endl<<endl;
		}
		cout<<"\n\n--------------------------------------------------------------------------------------------------------------------------------\n\n";	//DIBUJA LINEA DIVISORIA
	}
	void Barquito::mostrar_tablero2(){
		cout<<endl<<endl;
		for(int y=0;y<8;y++){
			cout<<"\t\t\t\t\t";
				for(int x=0;x<8;x++){	//DIBUJA PRIMERA FILA DE LA CELDA
					if (matriz[y][x]==0)cout<<glu<<glu<<glu<<glu<<glu;
					if (matriz[y][x]==1)cout<<">>>>>";
					if ((matriz[y][x]==2)||(matriz[y][x]==6))cout<<"+++++";
					if (matriz[y][x]==3)cout<<"HHHHH";
					cout<<" ";
				}
					cout<<endl;
			cout<<"\t\t\t\t\t";
				for(int x=0;x<8;x++){	//DIBUJA SEGUNDA FILA DE LA CELDA
					if (matriz[y][x]==0)cout<<glu<<glu<<glu<<glu<<glu;
					if (matriz[y][x]==1)cout<<">>>>>";
					if ((matriz[y][x]==2)||(matriz[y][x]==6))cout<<"+++++";
					if (matriz[y][x]==3)cout<<"HHHHH";
					cout<<" ";
				}
			cout<<endl<<endl;
		}
		cout<<"\n\n--------------------------------------------------------------------------------------------------------------------------------\n\n";	//DIBUJA LINEA DIVISORIA
	}
	void Barquito::resultado(){
		do{					
				Barquito::pedir_coordenadas2();
					if((matriz2[v][h]==4)||(matriz2[v][h]==5)){ 
						cout<<endl<<endl;
						Barquito::mostrar_tablero();
						cout<<"\t\t\t\t\tJE JE JE! YA HAS DISPARADO AQUI.\n\n\n\n";
						system("pause");
					}system("cls");
				}while((matriz2[v][h]==4)||(matriz2[v][h]==5));
		if(matriz2 [v][h]==0){
			matriz2[v][h]=4;
			system("cls");
					  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					  cout<<"\t\t\t";cout<<"oooo    oooo         ooooooooo.   ooooo        ooooo     ooo   .oooooo.    .o. \n";
					  cout<<"\t\t\t";cout<<"`888   .8P'          `888   `Y88. `888'        `888'     `8'  d8P'  `Y8b   888 \n";
					  cout<<"\t\t\t";cout<<" 888  d8'             888   .d88'  888          888       8  888           888 \n";
					  cout<<"\t\t\t";cout<<" 88888[               888ooo88P'   888          888       8  888           Y8P \n";
					  cout<<"\t\t\t";cout<<" 888`88b.    8888888  888          888          888       8  888     ooooo `8' \n";
					  cout<<"\t\t\t";cout<<" 888  `88b.           888          888       o  `88.    .8'  `88.    .88'  .o. \n";
					  cout<<"\t\t\t";cout<<"o888o  o888o         o888o        o888ooooood8    `YbodP'     `Y8bood8P'   Y8P \n\n";
			          cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
			          cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
			          cout<<"\t\t\t\t\t"; system("pause"); system("cls");
		}else{matriz2[v][h]=5;acumulador++;
		system("cls");
				cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
				cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
				cout<<"\t\t\t";cout<<"oooo    oooo         oooooooooo.    .oooooo.     .oooooo.   ooo        ooooo .o. \n";
				cout<<"\t\t\t";cout<<"`888   .8P'          `888'   `Y8b  d8P'  `Y8b   d8P'  `Y8b  `88.       .888' 888 \n";
				cout<<"\t\t\t";cout<<" 888  d8'             888     888 888      888 888      888  888b     d'888  888 \n";
				cout<<"\t\t\t";cout<<" 88888[               888oooo888' 888      888 888      888  8 Y88. .P  888  Y8P \n";
				cout<<"\t\t\t";cout<<" 888`88b.    8888888  888    `88b 888      888 888      888  8  `888'   888  `8' \n";
				cout<<"\t\t\t";cout<<" 888  `88b.           888    .88P `88b    d88' `88b    d88'  8    Y     888  .o. \n";
				cout<<"\t\t\t";cout<<"o888o  o888o         o888bood8P'   `Y8bood8P'   `Y8bood8P'  o8o        o888o Y8P \n\n";} //EL ACUMULADOR LLEVA LA CUENTA DE LOS TIROS ACERTADOS
				cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
				cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
				cout<<"\t\t\t\t\t"; system("pause"); system("cls");
	}
	void Barquito::ganar(){
		system("cls");
		int datosk=0;
		cout<<endl<<endl;
		cout<<"\t\t\t\t\t\t===================================\n";
		cout<<"\t\t\t\t\t\t"<<brr<<"    VEAMOS DONDE SE ESCONDIAN    "<<brr<<endl;
		cout<<"\t\t\t\t\t\t===================================\n\n\n";
		Barquito::mostrar_tablero2();
			int acorazado=0;
			int fragata=0;
			int destructor=3;
			int fragata2=0;
				for(int y=0;y<8;y++){
					for(int x=0;x<8;x++){
						if (matriz2[x][y]==1)acorazado++;
						if (matriz2[x][y]==2)fragata++;
						if(matriz2[x][y]==3)destructor--;
						if(matriz2[x][y]==6)fragata2++;
						if(matriz2[x][y]==4)fallador++;
					}
				}
				if(acorazado ==0)datosk++;
				if(fragata2==0)datosk++;
				if(fragata==0)datosk++;
				for(int r=0;r<=2;r++){
					if(destructor==r)datosk=datosk+destructor;}
				if(acorazado ==0)resulto++;
				if(fragata2==0)resulto++;
				if(fragata==0)resulto++;
				for(int r=0;r<=2;r++){
					if(destructor==r)resulto+=destructor; //resulto=resulto+r}
					cout<<"\t\t\t\t\t\t>> HAS FALLADO: ["<<fallador<<"] DISPAROS\n\n";
					cout<<"\t\t\t\t\t\t>> HAS ACERTADO: ["<<acumulador<<"] DISPAROS\n\n";
					cout<<"\t\t\t\t\t\t>> HAS DESTRUIDO: ["<<datosk<<"] BARCOS\n\n\n";					
					auxiliar+=acumulador;
					coxiliar+=fallador;
					fallador=0; acumulador=0;
				}
	}
	void Barquito::estadisticas(){
		cout<<endl<<endl;
		cout<<"\t\t\t\t\t\t\t======================\n";
		cout<<"\t\t\t\t\t\t\t"<<brr<<"    ESTADISTICAS    "<<brr<<endl;
		cout<<"\t\t\t\t\t\t\t======================\n\n\n\n\n";
		cout<<endl<<endl<<endl<<endl<<endl;
			if(protocolo==0){
				cout<<"\t\t\t\tCOMIENZA A JUGAR PARA AGREGAR ESTADISTICAS";
				cout<<endl<<endl<<endl<<endl<<endl;
				cout<<"\t\t\t\t\t\t";		system("pause"); system("cls");
			}else{
				cout<<"\t\t\t\t\t\t>> HAS JUGADO:    ["<<protocolo<<"] JUEGOS\n\n\n";
				cout<<"\t\t\t\t\t\t>> HAS ACERTADO:  ["<<auxiliar<<"] DISPAROS\n\n\n";
				cout<<"\t\t\t\t\t\t>> HAS FALLADO:  ["<<coxiliar<<"] DISPAROS\n\n\n";
				cout<<"\t\t\t\t\t\t>> HAS DESTRUIDO: ["<<resulto<<"] BARCOS\n\n\n";
				cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
				cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
				cout<<"\t\t\t\t\t\t";	system("pause"); system("cls");
			}
	}
	void Barquito::fin(){
		  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		  cout<<"\t\t";cout<<"         .d8888b.  8888888b.         d8888  .d8888b. 8888888        d8888  .d8888b.  \n";
		  cout<<"\t\t";cout<<"        d88P  Y88b 888   Y88b       d88888 d88P  Y88b  888         d88888 d88P  Y88b \n";
		  cout<<"\t\t";cout<<"        888    888 888    888      d88P888 888    888  888        d88P888 Y88b.      \n";
		  cout<<"\t\t";cout<<"        888        888   d88P     d88P 888 888         888       d88P 888  :Y888b.   \n";
		  cout<<"\t\t";cout<<"        888  88888 8888888P:     d88P  888 888         888      d88P  888     :Y88b. \n";
		  cout<<"\t\t";cout<<"        888    888 888 T88b     d88P   888 888    888  888     d88P   888       :888 \n";
		  cout<<"\t\t";cout<<"        Y88b  d88P 888  T88b   d8888888888 Y88b  d88P  888    d8888888888 Y88b  d88P \n";
		  cout<<"\t\t";cout<<"         :Y8888P88 888   T88b d88P     888  :Y8888P: 8888888 d88P     888  :Y8888P:  \n";
		  cout<<"\t\t";cout<<"                                                                                     \n";
		  cout<<"\t\t";cout<<"                                                                                     \n";
		  cout<<"\t\t";cout<<"                                                                                     \n";
		  cout<<"\t\t";cout<<"8888888b.   .d88888b.  8888888b.        888888 888     888  .d8888b.         d8888 8888888b.  \n";
		  cout<<"\t\t";cout<<"888   Y88b d88P: :Y88b 888   Y88b         :88b 888     888 d88P  Y88b       d88888 888   Y88b \n";
		  cout<<"\t\t";cout<<"888    888 888     888 888    888          888 888     888 888    888      d88P888 888    888 \n";
		  cout<<"\t\t";cout<<"888   d88P 888     888 888   d88P          888 888     888 888            d88P 888 888   d88P \n";
		  cout<<"\t\t";cout<<"8888888P:  888     888 8888888P:           888 888     888 888  88888    d88P  888 8888888P:  \n";
		  cout<<"\t\t";cout<<"888        888     888 888 T88b            888 888     888 888    888   d88P   888 888 T88b   \n";
		  cout<<"\t\t";cout<<"888        Y88b. .d88P 888  T88b           88P Y88b. .d88P Y88b  d88P  d8888888888 888  T88b  \n";
		  cout<<"\t\t";cout<<"888         :Y88888P:  888   T88b          888  .Y88888P:   :Y8888P88 d88P     888 888   T88b \n";
		  cout<<"\t\t";cout<<"                                         .d88P                                                \n";
		  cout<<"\t\t";cout<<"                                       .d88P:                                                 \n";
		  cout<<"\t\t";cout<<"                                      888P:   \n";
		  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	}