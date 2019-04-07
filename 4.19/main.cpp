#include <iostream>

using namespace std;

int main()
{
    unsigned int counter=1;
    int number=0;
    int largest1=0;
    int largest2=0;
    while ( counter<=10)
    {
        cin>>number;
        if(number>=largest1)
            largest1=number;
             else if(number>=largest2)
            largest2=number;
        ++counter;
    }cout<<largest1<<largest2;
    // end while

} // end main
