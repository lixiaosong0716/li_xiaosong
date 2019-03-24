

#include <iostream>
#include "Date.h"
using namespace std;


int main()
{
   Date date( 6, 15, 2004 );


   cout << "Month: " << date.getMonth() << endl;
   cout << "Day: " << date.getDay() << endl;
   cout << "Year: " << date.getYear() << endl;

   cout << "\nOriginal date:" << endl;
   date.displayDate();


   date.setMonth( 13 );
   date.setDay( 1 );
   date.setYear( 2006 );

   cout << "\nNew date:" << endl;
   date.displayDate();
} // end main

