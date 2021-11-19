#include <iostream>

using namespace std;
#include "CasillBuscaMinas.h"
#include "Tablero.h"
#include "BuscaMinas.h"

int menu();
int main(int argc, char** argv) {
	int opcion=0;
	while((opcion = menu()) != 4) {
		BuscaMinas* juego=new BuscaMinas(opcion);
		Tablero* tablero=new Tablero(opcion);
		switch(opcion) {
			case 1: {
				tablero->imprimirTablero(8);
				tablero->liberarMemoria(8);
			}
			break;
			case 2: {
				tablero->imprimirTablero(10);
				tablero->liberarMemoria(10);
			}
			break;
			case 3: {
				tablero->imprimirTablero(12);
				tablero->liberarMemoria(12);
			}
			break;
		}
	}
return 0;
}

int menu() {
	int opc=0;
	cout << "menu:\n"
	     "1) Facil\n"
	     "2) Normal 2\n"
	     "3) Dificil 3\n"
	     "4) Salir\n"
	     "Ingrese la opcion que desee" << endl;
	cin >> opc;
	return opc;
}