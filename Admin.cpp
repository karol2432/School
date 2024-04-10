#include "Admin.h"
Admin::Admin( string name, int age, double nsalary, int nSeniority, string position ) : SchoolWorker(name, age, nsalary, nSeniority)
{
	setPosition( position );
}
double Admin::Netto() const
{
	//dla admina podatek oblicza sie ( (kwota brutto - koszty uzysku) * 18% podatku - kwota wolna)
	double pensjapocz = getSalary();
	double podatek = (pensjapocz - KOSZTY_UZYSKU) * 0.18 - KWOTA_WOLNA;
	//(kwota netto to brutto minus obliczony podatek)
	double netto = pensjapocz - podatek;
	return netto;
}
