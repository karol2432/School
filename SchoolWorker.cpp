#include "SchoolWorker.h"
SchoolWorker::SchoolWorker( string sName, int nAge, double nSalary, int nSenority ) : Person(sName, nAge)
{
	setSalary( nSalary );
	setSeniority( nSenority );
}
SchoolWorker::SchoolWorker( const SchoolWorker& sw )
{
	*this = sw;
}

SchoolWorker& SchoolWorker::operator = ( const SchoolWorker& sw )
{
	setPerson( sw.getName(), sw.getAge() );
	setSalary( sw.getSalary() );
	setSeniority( sw.getSeniority() );
	return *this;
}
