#include <iostream>

using namespace std;

double fahrenheit(double x)
{
    return(x*9/5+32);
}

int main()
{double a,b;
cout<<"Enter a celsuis"<<endl;
cin>>a;
b=fahrenheit(a);
cout<<b;

}
