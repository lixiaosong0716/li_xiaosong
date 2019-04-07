#include <iostream>
using namespace std;
int main()
{ unsigned  int i=0;
int number=1;
int factorial=1;



cout << "Enter a integer: "<< endl;
cin >> number;
while( i<=number )
{
    factorial=i*number;
        i++;

}cout <<factorial << endl;
 // end while

} // end main
