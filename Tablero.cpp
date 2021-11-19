#include "Tablero.h"
#include "CasillBuscaMinas.h"
#include <stdlib.h>      
#include <time.h> 
#include <iostream>
using std::cout;
using std::endl;


Tablero::Tablero(int diff)
{
	int bombas,size;
	if(diff==1)	{
		size=8;
		this->tablero=provisionarTablero(size);
		llenarTablero(12,size);	 }
	else
		if(diff==2){
			size=10;
			this->tablero=provisionarTablero(size);
			llenarTablero(25,size);}
	else
		if(diff==3){	
			size=12;
			this->tablero=provisionarTablero(size);
			llenarTablero(43,size);}
}

CasillBuscaMinas*** Tablero :: provisionarTablero(int size){
	
	CasillBuscaMinas*** Tablero = 0;
	Tablero=new CasillBuscaMinas**[size];
	for(int i=0;i<size;i++){
		Tablero[i]=new CasillBuscaMinas*[size];
	}
	return Tablero;
}

void Tablero :: llenarTablero(int bombas,int size){
	
	srand (time(NULL));
	
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			this->tablero[i][j]=new CasillBuscaMinas();
		}
	}
	
	for(int i=0;i<bombas;i++){
		int fil=rand()%size+1;
		int col=rand()%size+1;
		if(this->tablero[fil][col]->getEsBomba()==false){	 
			this->tablero[fil][col]->setEsBomba(true);
		}
		else{
	   		i--;
		}		
	}
		
}

void Tablero :: imprimirTablero(int size){
	
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			cout<<"["<<this->tablero[i][j]->getDisplay()<<"]";
		}
		cout<<endl;
	}
}                            

CasillBuscaMinas*** Tablero :: getMatriz(){
	
	return this->tablero;
	
}
 
void Tablero:: liberarMemoria(int size){
 	for(int j=0;j<size;j++){
			delete[] this->tablero[j];
		}
		delete [] this->tablero;
 }
Tablero::~Tablero(){
}
 