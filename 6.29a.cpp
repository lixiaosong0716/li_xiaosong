#include <iostream>

using namespace std;

double primeNumber(int x)
{
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
            return 0;

    }
    return 1;
}





int main()
{ int a ,b;
 cout <<"Enter a number"<<endl;
 cin >>a;
 b=primeNumber(a);
 if (b)
    cout <<" It is a primeNumber"<<endl;
 else
    cout<<"It is not a primeNumber"<<endl;
    return 0;
}
