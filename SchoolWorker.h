#pragma once
#include "Person.h"
class SchoolWorker : public Person
{
public:
  SchoolWorker( string sName = "", int nAge = 0, double nSalary = 0, int nSenority = 0 );
  SchoolWorker( const SchoolWorker& sw );

  SchoolWorker& operator = ( const SchoolWorker& sw );

  void setSalary( double nSalary );
  double getSalary() const;
  void setSeniority( int nSeniority );
  int getSeniority() const;

  virtual void printSWorker()const = 0;
  virtual double Netto()const = 0;
  

private:
  double m_nSalary;
  int m_nSeniority;



};

//==========INLINE FUNCTIONS=================

inline void SchoolWorker::setSalary( double nSalary )
{
  this->m_nSalary = nSalary;
}
inline double SchoolWorker::getSalary() const
{
  return this->m_nSalary;
}
inline void SchoolWorker::setSeniority( int nSeniority )
{
  this->m_nSeniority = nSeniority;
}
inline int SchoolWorker::getSeniority() const
{
  return this->m_nSeniority;
}
