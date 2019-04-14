#include <iostream>

using namespace std;
double celsius(double x)
{
    return(5*(x-32)/9);
}
int main()
{double a,b;
cout<<"Enter a fahrenheit"<<endl;
cin>>a;
b=celsius(a);
cout<<b;

}
