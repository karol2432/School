#pragma once
#include "SchoolWorker.h"
#define KWOTA_WOLNA 556.02
class Teacher : public SchoolWorker
{
public:
  Teacher( string sName = "", int nAge = 0, bool isCTeacher = 0, string ClassName = "", string subject = "POLSKI", int nSalary = 0, int nSeniority = 0);
  Teacher& operator = ( const Teacher& t );

  string getClass() const;
  string getSubject() const;
  bool getCTeacher()const;

  void setCTeacher( bool classt );
  void setClass( string ClassName );
  void setSubject( string subject );

  virtual double Netto() const override;
  virtual void printSWorker() const override;

private:
  bool m_isCTeacher;
  string m_ClassName;
  string m_subject;
};

//==============INLINE FUNCTIONS======================
inline bool Teacher::getCTeacher()const
{
  return this->m_isCTeacher;
}
inline string Teacher::getClass() const
{
  return this->m_ClassName;
}
inline string Teacher::getSubject() const
{
  return this->m_subject;
}
inline void Teacher::setCTeacher( bool classt )
{
  this->m_isCTeacher = classt;
}
inline void Teacher::setClass( string ClassName )
{
  this->m_ClassName = ClassName;
}
inline void Teacher::setSubject( string subject )
{
  this->m_subject = subject;
}
