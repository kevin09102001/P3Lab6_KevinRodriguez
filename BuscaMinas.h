
#include "Tablero.h"

class BuscaMinas
{
	public:
		BuscaMinas(int);
		~BuscaMinas();
		bool jugar();
		Tablero* getTablero();
	private:
		Tablero* tablero;
		
};
