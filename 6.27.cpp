#include <iostream>

using namespace std;
double smallest(double a,double b,double c)
{
    if(a<b&&b<c)
   {


    return a;
   }
    else if (b<a&&a<c)
    {


    return b;
    }
    else
    {

        return c;
    }
} // end function if else

int main()

{ double m ,n ,k ,l;
cout<<"Enter three integers: "<<endl;
cin >>m>>n>>k;
l=smallest(m,n,k);
cout<<"The smallest value is " << l << endl;






}
