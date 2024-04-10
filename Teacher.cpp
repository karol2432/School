#include "Teacher.h"
Teacher::Teacher( string sName, int nAge, bool isCTeacher, string ClassName, string subject, int nSalary, int nSeniority) : SchoolWorker(sName, nAge, nSalary, nSeniority)
{
	setCTeacher( isCTeacher );
	setClass( ClassName );
	setSubject( subject );
}
Teacher& Teacher::operator = ( const Teacher& t )
{
  setPerson( t.getName(), t.getAge() );
  setSalary( t.getSalary() );
  setSeniority( t.getSeniority() );
  setClass( t.getClass() );
  setSubject( t.getSubject() );
  return *this;
}
double Teacher::Netto() const 
{
  double pensjapocz = getSalary();
  double dodatek = (getSeniority() >= 5 && getSeniority() <= 20) ? (getSeniority() / 100.0) * pensjapocz : 0.0; //w zakresie od 5 do 20 lat pracy doliczac do kwoty brutto odpowiednio od 5 do 20 % kwoty brutt
  double puzysku = (pensjapocz * 0.8) * 0.5; //dla nauczycieli od 80% pensji naliczac 50% koszty uzysku 
  double kuzysku = puzysku + ((pensjapocz * 0.2) - puzysku);
  double podatek = ((pensjapocz + 400) - kuzysku) * 400 - KWOTA_WOLNA;

  double pensja = pensjapocz + 400 - podatek;

  if( getCTeacher() ) //jesli jest wychowawca dodac dodatek 400 zl
    pensja += 400;

  return pensja;
}
void Teacher::printSWorker() const
{
  cout << "Imie i Nazwisko: " << getName() << ", wiek: " << getAge() << ", wychowawca: " << getCTeacher() << ", klasy: " <<getClass() << ", przedmiotu: " << getSubject() << ", pensja: " << Netto() << endl;
}