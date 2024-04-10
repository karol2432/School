#pragma once
#include "SchoolWorker.h"
#include <string.h>
#define KOSZTY_UZYSKU 111.25
#define KWOTA_WOLNA 556.02
class Admin : public SchoolWorker
{
public: 
	Admin( string name = "", int age = 0, double nsalary = 0, int nSeniority = 0, string position="");
	
	string getPosition()const;
	void setPosition( string position );

	virtual double Netto() const override;
	virtual void printSWorker() const override;

private:
	string m_Position;
	
};

//============INLINE FUNCTIONS============

inline string Admin::getPosition()const
{
	return this->m_Position;
}
inline void Admin::setPosition( string position )
{
	this->m_Position = position;
}
inline void Admin::printSWorker() const
{
	cout << "Godnosc: " << getName() << ", wiek: " << getAge() << ", pensja: " << getSalary() << " ,staz: " << getSeniority() << ", stanowisko : " << m_Position << endl;
}