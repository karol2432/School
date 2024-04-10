#include "Pupil.h"

int Pupil::m_baseID = 1000;

Pupil::Pupil( string name, int age, string className ) 
{

	m_ID = "ID" + to_string( m_baseID++ );
	setPerson( name, age );
	m_ClassName = className;
	m_Ave = 0.0;
	clearNotes();
}
Pupil:: ~Pupil() { }

void Pupil::clearNotes()
{
	for( int i = 0; i < MAXSUBJECTS; i++ )
	{
		m_Notes[i] = 0;
	}
}
double Pupil::calcAve()
{
	int sum = 0;
	double ave = 0.0;
	for( int i = 0; i < MAXSUBJECTS; i++ )
	{
		if( m_Notes[i]>=2 )
		{
			ave += m_Notes[i];
			sum++;
		}
		
	}
	return m_Ave = (sum > 0) ? ave / sum : 0.0;
}

void Pupil::setNote( Subjects subject, double note )
{
	if(subject>=POLSKI && subject<=NIEMIECKI && note >= 2 && note <= 5)
	{
		m_Notes[subject] = note;
	}
	else
		m_Notes[subject] = 0;
}

void Pupil::printPupil()
{
	cout << getID() << "\n" << getName() << " (" << getClassName() << "), " << getAge() << " lat " << endl;
	cout << "srednia ocen: " << calcAve() << endl;
	printOutfit(); //to jest ta wirtualna
}