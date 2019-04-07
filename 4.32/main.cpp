#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cout << "Enter three integers: "<<endl;
    cin >>a>> b>>c;
    if(a<b+c|b<a+c|c<a+b)
        cout <<"This is a triangle"<<endl;
    else if(a>b+c|b>a+c|c>a+b)
        cout << "This is not a triangle"<<endl;
        else if(a==b==c)
            cout <<"This is a triangle"<<endl;

} // end main
