#include "BuscaMinas.h"
#include "Tablero.h"

BuscaMinas::BuscaMinas(int diff)
{
	this->tablero=new Tablero(diff);		 	 
}

Tablero* BuscaMinas :: getTablero(){
	return this->tablero;
}


BuscaMinas::~BuscaMinas()
{
}