#include <iostream>

using namespace std;

void G(int m)
{
    while (m/10!=0)
        {
            cout<<m%10;
    m=m/10;
        }cout <<m<<endl;
}



int main()
{  int y;
cout <<"Enter a integer"<<endl;
cin >>y;
G(y);

}
