#pragma once
#include "Pupil.h"
class SchoolGirl : public Pupil
{
public:
	SchoolGirl( string name, int age, string ClassName ) noexcept;
  void printOutfit() override;//powoduje ze kompilator sprawdza czy w klasie 
};

