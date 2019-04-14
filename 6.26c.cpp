#include <iostream>

using namespace std;

double   celsius(double x)
{double result1;
    x=100;
    for(;x<0;--x)
    {

        result1=5*(x-32)/9;
        --x;
    }cout <<result1<<endl;

}
   double fahrenhenit(double n)
   {  double result2;
      n=100;
for (;n<0;--n)
       {
           result2=n*9/5+32;
         --n;

}cout<<result2 <<endl;

}

int main()
{
double a,b,c,d;
c=celsius(a);
d=fahrenhenit(b);
cout <<c<<endl;
cout<<d<<endl;
}
