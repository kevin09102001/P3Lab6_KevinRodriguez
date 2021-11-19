
#include "CasillBuscaMinas.h"
#include <string>
using std::string;

class Tablero
{
	public:
		Tablero(int);
		~Tablero();
		bool destaparCasilla(int,int);
		int calcularBombas(int);
		void marcarCasilla(int,int);
		CasillBuscaMinas*** provisionarTablero(int);
		void llenarTablero(int,int);
		void imprimirTablero(int);
		CasillBuscaMinas*** getMatriz();
		void liberarMemoria(int);
	private:
		CasillBuscaMinas*** tablero;
		
};
