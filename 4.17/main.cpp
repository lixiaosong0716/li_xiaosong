#include <iostream>
using namespace std;
int main()
{unsigned int counter=1;
    int number=0;

    int largest=0;
    number=largest;
   while ( counter <= 10 )
   {

    cin >> number ;
   if ( number >= largest )
    largest=number;


   ++counter;
   } cout << largest ;
   // end while
     cout << endl;
} // end main
