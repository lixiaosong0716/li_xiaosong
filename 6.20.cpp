#include <iostream>

using namespace std;

int multiple(int x,int y)
{
    return (y%x);
}






int main()
{ int a, b,c;
   cout <<"Enter two integers: "<<endl;
   cin >>a >>b;

   c = multiple(a,b);
if (c )
   cout<<" false = "<<b;
   else
   cout <<" true = "<<b;
}
