8.8
#include <iostream>

using namespace std;

int main()
{

    unsigned int values[SIZE]={2,4,6,8,10};

    unsigned int *vPtr;

    for(unsigned int i=0;i<values.size();++i)
        cout<<values[i];

    *vPtr=&values;
    vPtr=values;

   for(unsigned int i=0;i<values.size();++i)
        cout<<*(vPtr+i);


     for(unsigned int i=0;i<values.size();++i)
        cout<<*(v+i);


     for(unsigned int i=0;i<values.size();++i)
        cout<<vPtr(i);

        values[5];
        *(v+5);
        vPtr[5];
        *(vPtr+5);

        values[3]=6;


}

