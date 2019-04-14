#include <iostream>

using namespace std;

int primeNumber(int a)
{   int i;
    for (int i=2;i<a;i++)
    {
        if(a%i==0)

        return 0;

    }
       return 1;
}





int main()
{

   for(int k=2;k<=10000;k++)
   {
       if(primeNumber(k))
        cout <<k<<"\n"<<endl;

   }
   return 0;
}
