
#include <iostream>
#include "Employee.h"
using namespace std;


Employee::Employee( string first, string last, int salary )
{
   setFirstName( first );
   setLastName( last );
   setMonthlySalary( salary );
}


void Employee::setFirstName( string name )
{.
#include <iostream>
#include "Employee.h"
using namespace std;


Employee::Employee( string first, string last, int salary )
{
   setFirstName( first );
   setLastName( last );
   setMonthlySalary( salary );
}

void Employee::setFirstName( string name )
{
   firstName = name;
}

string Employee::getFirstName()
{
   return firstName;
} // end function getFirstName


void Employee::setLastName( string name )
{
   lastName = name;
} // end function setLastName


string Employee::getLastName()
{
   return lastName;
} // end function getLastName


void Employee::setMonthlySalary( int salary )
{
   if ( salary > 0 )
      monthlySalary = salary;

   if ( salary <= 0 )
      monthlySalary = 0;
} // end function setMonthlySalary

int Employee::getMonthlySalary()
{
   return monthlySalary;
}


   firstName = name;
} // end function setFirstName

string Employee::getFirstName()
{
   return firstName;
}


void Employee::setLastName( string name )
{
   lastName = name;
} // end function setLastName


string Employee::getLastName()
{
   return lastName;
} // end function getLastName


void Employee::setMonthlySalary( int salary )
{
   if ( salary > 0 )
      monthlySalary = salary;
   if ( salary <= 0 )
      monthlySalary = 0;
} // end function setMonthlySalary


int Employee::getMonthlySalary()
{
   return monthlySalary;
} // end function getMonthlySalary

