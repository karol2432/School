#include "SchoolBoy.h"
SchoolBoy::SchoolBoy( string name, int age, string ClassName ) noexcept : Pupil( name, age, ClassName )
{
	m_ID = "M_" + m_ID;

}
void SchoolBoy::printOutfit() // nie mozna jej nadpisac w klasie pochodnej
{
	cout << "biala/niebieska koszula z krawatem, szkolna marynarka, polbuty, granatowa/czarna spodnie";
}