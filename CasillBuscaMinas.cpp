#include "CasillBuscaMinas.h"

CasillBuscaMinas::CasillBuscaMinas()
{
	this->esBomba=false;
	this->descubierta=false;
	this->marcada=false;
	this->display='-';
	
}

	bool CasillBuscaMinas:: getEsBomba(){
		return this->esBomba;
	}
	void CasillBuscaMinas:: setEsBomba(bool esMina){
		this->esBomba=esMina;
	}
	bool CasillBuscaMinas:: getDescubierta(){
		return this->descubierta;
	}
	void CasillBuscaMinas:: setDescubierta(bool des){
		this->descubierta=des;
	}
	char CasillBuscaMinas:: getDisplay(){
		return this->display;
	}
	void CasillBuscaMinas:: setDisplay(char dis){
		this->display=dis;
	}
	bool CasillBuscaMinas:: getMarcada(){
		return this->marcada;
	}
	void CasillBuscaMinas:: setMarcada(bool mar){
		this->marcada=mar;
	}
	
CasillBuscaMinas::~CasillBuscaMinas()
{
}