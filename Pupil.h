#pragma once
#include "Person.h"
//typedef enum { POLSKI, MATEMATYKA, FIZYKA, CHEMIA, INFORMATYKA, ANGIELSKI, NIEMIECKI} Subject; C
enum Subjects { POLSKI, MATEMATYKA, FIZYKA, CHEMIA, INFORMATYKA, ANGIELSKI, NIEMIECKI } ; //C++
#define MAXSUBJECTS NIEMIECKI+1
class Pupil : public Person
{
public:
	Pupil( string name = "", int age = 0, string className = "" );
	virtual ~Pupil();
	void setClassName( string newClassname );
	string getClassName() const;
	string getID() const;

	void clearNotes();
	double calcAve(); //oblicza srednia
	double getAve() const;
	void setNote( Subjects subject, double note );
	void printPupil();
	virtual void printOutfit() {}; // =0 metoda czysta/abstrakcyjna to jest dodatkowe zabezpieczenie zeby ktos nie robi³ obiektow danej klasy
protected:
	string m_ID;

private:
	string m_ClassName;
	double m_Ave;
	double m_Notes[MAXSUBJECTS];
	static int m_baseID;

};
//===========INLINE FUNCTIONS================
inline void Pupil::setClassName( string newClassname )
{
	this->m_ClassName = newClassname;
}
inline string Pupil::getClassName() const
{
	return this->m_ClassName;
}
inline string Pupil::getID() const
{
	return this-> m_ID;
}
inline double Pupil::getAve() const
{
	return this->m_Ave;
}
