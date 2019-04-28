


#include <iostream>
using namespace std;

int main()
{
   const int SIZE = 20;
   int a[ SIZE ] = {};
   int subscript = 0;
   int duplicate;
   int value;

   cout << "Enter 20 integers between 10 and 100:\n";


   for ( int i = 0; i < SIZE; )
   {
      duplicate = 0;
      cin >> value;

      if ( value >= 10 && value <= 100 )
      {
         for ( int j = 0; j < subscript; j++ )
         {
            if ( value == a[ j ] )
            {
               duplicate = 1;
               break;
            } // end if
         } // end for


         if ( !duplicate )
         {
            a[ subscript++ ] = value;
            ++i;
         } // end if
         else
            cout << "Duplicate number.\n";
      } // end if
      else
         cout << "Invalid number.\n";
   } // end for

   cout << "\nThe nonduplicate values are:\n";

   for ( int i = 0; i < SIZE; i++ )
      cout << a[ i ] << ' ';

   cout << endl;
} // end main

using namespace std;

int main()
{
   const int SIZE = 20;
   int a[ SIZE ] = {};
   int subscript = 0;
   int duplicate;
   int value;

   cout << "Enter 20 integers between 10 and 100:\n";


   for ( int i = 0; i < SIZE; )
   {
      duplicate = 0;
      cin >> value;

      if ( value >= 10 && value <= 100 )
      {
         for ( int j = 0; j < subscript; j++ )
         {
            if ( value == a[ j ] )
            {
               duplicate = 1;
               break;
            } // end if
         } // end for


         if ( !duplicate )
         {
            a[ subscript++ ] = value;
            ++i;
         } // end if
         else
            cout << "Duplicate number.\n";
      } // end if
      else
         cout << "Invalid number.\n";
   } // end for

   cout << "\nThe nonduplicate values are:\n";


   for ( int i = 0; i < SIZE; i++ )
      cout << a[ i ] << ' ';

   cout << endl;
} // end main
