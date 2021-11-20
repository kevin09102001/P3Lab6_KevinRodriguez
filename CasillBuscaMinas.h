#ifndef CASILLBUSCAMINAS_H
#define CASILLBUSCAMINAS_H
class CasillBuscaMinas
{
	public:
		
		CasillBuscaMinas();
		~CasillBuscaMinas();
		bool getEsBomba();
		void setEsBomba(bool);
		bool getDescubierta();
		void setDescubierta(bool);
		char getDisplay();
		void setDisplay(char);
		bool getMarcada();
		void setMarcada(bool);
		
	private:
		bool esBomba;
		bool descubierta;
		char display;
		bool marcada;
};
#endif