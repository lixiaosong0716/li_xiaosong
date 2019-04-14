#include <iostream>
#include<cmath>
using namespace std;

double hypotenuse(double a,double b)
{
   double c=b*b+a*a;
   double result=sqrt(c);
   cout <<sqrt(c)<<endl;

   return result;
}







int main()
{ double k,y,x;
cout <<"Enter two integers:"<<endl;
cin >>k >>y;
x= hypotenuse(k,y);

  cout<<" bian ="<<x;
}
