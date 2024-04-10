// school.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "Person.h"
#include "Pupil.h"
#include "Admin.h"
#include "SchoolBoy.h"
#include "SchoolGirl.h"
#include "Teacher.h"
#include "SchoolWorker.h"
#define MAXPUPIL 9
#define MAXTWORKERS 6
#define MAXAWORKERS 3
void printPupils( Pupil** tab, int PupilNo );
void sortPupils( Pupil** tab, int PupilNo );
void printWorkers( SchoolWorker** tab, int WorkerNo );

int main()
{
  Pupil* pupils[MAXPUPIL] = { NULL };
  Pupil* v = NULL;
  pupils[0] = v = new SchoolGirl( "Kazmierska Dagmara", 18, "4b" );
  v->setNote( POLSKI, 3 );
  v->setNote( MATEMATYKA, 4.5 );
  v->setNote( FIZYKA, 4 );
  v->setNote( CHEMIA, 4 );
  v->setNote( INFORMATYKA, 5 );
  v->setNote( ANGIELSKI, 4.5 );
  v->setNote( NIEMIECKI, 3.5 );

  pupils[1] = v = new SchoolGirl( "Kowalski Ania", 11, "1a" );
  v->setNote( POLSKI, 3 );
  v->setNote( MATEMATYKA, 4.5 );
  v->setNote( FIZYKA, 2 );
  v->setNote( CHEMIA, 2 );
  v->setNote( INFORMATYKA, 2 );
  v->setNote( ANGIELSKI, 5 );
  v->setNote( NIEMIECKI, 3.5 );

  pupils[2] = v = new SchoolGirl( "Nowak Natalia", 12, "3c" );
  v->setNote( POLSKI, 4 );
  v->setNote( MATEMATYKA, 3);
  v->setNote( FIZYKA, 4 );
  v->setNote( CHEMIA, 5 );
  v->setNote( INFORMATYKA, 2 );
  v->setNote( ANGIELSKI, 4.5 );
  v->setNote( NIEMIECKI, 3.5 );

  pupils[3] = v = new SchoolGirl( "Maziarz Klaudia", 19, "4b" );
  v->setNote( POLSKI, 5 );
  v->setNote( MATEMATYKA, 4.5 );
  v->setNote( FIZYKA, 4 );
  v->setNote( CHEMIA, 5 );
  v->setNote( INFORMATYKA, 5 );
  v->setNote( ANGIELSKI, 4.5 );
  v->setNote( NIEMIECKI, 2 );

  pupils[4] = v = new SchoolBoy( "Holody Karol", 18, "4b" );
  v->setNote( POLSKI, 3 );
  v->setNote( MATEMATYKA, 3);
  v->setNote( FIZYKA, 4 );
  v->setNote( CHEMIA, 3 );
  v->setNote( INFORMATYKA, 5 );
  v->setNote( ANGIELSKI, 3);
  v->setNote( NIEMIECKI, 3);

  pupils[5] = v = new SchoolBoy( "Nowak Jan", 10, "1b" );

  pupils[6] = v = new SchoolBoy( "Duda Andrzej", 15, "4b" );
  v->setNote( POLSKI, 3 );
  v->setNote( MATEMATYKA, 4.5 );
  v->setNote( FIZYKA, 4 );
  v->setNote( CHEMIA, 4 );
  v->setNote( INFORMATYKA, 5 );
  v->setNote( ANGIELSKI, 4.5 );
  v->setNote( NIEMIECKI, 3.5 );

  pupils[7] = v = new SchoolBoy( "Glab Mateusz", 18, "4b" );
  v->setNote( POLSKI, 4.5 );
  v->setNote( MATEMATYKA, 4.5 );
  v->setNote( FIZYKA, 4 );
  v->setNote( CHEMIA, 4 );
  v->setNote( INFORMATYKA, 5 );
  v->setNote( ANGIELSKI, 4.5 );
  v->setNote( NIEMIECKI, 5 );

  pupils[8] = v = new SchoolBoy( "But Jan", 19, "6b" );
  v->setNote( POLSKI, 3 );
  v->setNote( MATEMATYKA, 4.5 );
  v->setNote( FIZYKA, 4 );
  v->setNote( CHEMIA, 4 );
  v->setNote( INFORMATYKA, 5 );
  v->setNote( ANGIELSKI, 4.5 );
  v->setNote( NIEMIECKI, 3.5 );

  sortPupils( pupils, MAXPUPIL );
  printPupils( pupils, MAXPUPIL );
 

  SchoolWorker* tWorkers[MAXTWORKERS] = { NULL };
  SchoolWorker* w = NULL;

  tWorkers[0] = w = new Teacher( "Kowalski Jan", 38, 1, "2c", "CHEMIA", 3850, 10 );
  tWorkers[1] = w = new Teacher( "Nowak Anna", 45, 1, "4d", "MATEMATYKA", 4100, 13 );
  tWorkers[2] = w = new Teacher( "Mazur Ewa", 24, 0,"5c", "FIZYKA", 3200, 1);
  tWorkers[3] = w = new Teacher( "Lech Donald", 69, 1, "3a", "ANGIELSKI", 5400, 42 );
  tWorkers[4] = w = new Teacher( "Konik Kornel", 40, 0,"6g", "INFORMATYKA", 3850, 10);
  tWorkers[5] = w = new Teacher( "R¹pa³a Renata", 52, 1, "2c", "CHEMIA", 4600, 27 );
  printWorkers( tWorkers, MAXTWORKERS );

  SchoolWorker* aWorkers[MAXAWORKERS] = { NULL };
  SchoolWorker* a = NULL;
  aWorkers[0] = a = new Admin( "Wrona Dominika", 29, 4000, 3, "mlodszy_specjalista" );
  aWorkers[1] = a = new Admin( "Dumna Urszula", 37, 6200, 9, "specjalista" );
  aWorkers[2] = a = new Admin( "Kwiatkowski Maciej", 51, 8350, 17, "starszy_specjalista" );
  printWorkers( aWorkers, MAXAWORKERS );
 
  return 0;
}
void printPupils( Pupil** tab, int PupilNo )
{
  for( int i = 0; i < PupilNo; i++ )
  {
    tab[i]->printPupil();
    cout << "\n\n";
  }
}

void sortPupils( Pupil** tab, int PupilNo )
{
  for( int i = 1; i < PupilNo; i++ )
  {
    int j = i - 1;
    Pupil* v = tab[i];
    while( j >= 0 && v->getName() < tab[j]->getName() )
      tab[j + 1] = tab[j--];
    tab[j + 1] = v;
  }
}

void printWorkers( SchoolWorker** tab, int WorkerNo )
{
  for( int i = 0; i < WorkerNo; i++ )
  {
    tab[i]->printSWorker();
    cout << "\n\n";
  }
}


