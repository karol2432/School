#pragma once
#include "Pupil.h"
class SchoolBoy : public Pupil
{
public:
	SchoolBoy( string name, int age, string ClassName ) noexcept;
	virtual void printOutfit() override; //gdyby by³o final to by znaczy³o ze nie mozna jej nadpisac w klasie pochodnej
};

