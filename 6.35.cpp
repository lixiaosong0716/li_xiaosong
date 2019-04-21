#include <iostream>

using namespace std;

int integerpower(int x,int y)
{int result;

    for(;y<=1;--y)
  {

        result*=x;

    }  cout <<result<<endl;
    return 0;
}



int main()
{ int a ,b,c;
 cout<<"Enter two integers:"<<endl;
 cin >>a>>b;
 c=integerpower(a,b);
  cout <<c<<endl;

    return 0;
}
