#include <iostream>

using namespace std;

bool iseven (int x)
{
    return (x%2);
}




int main()
{ int a;
cout <<"Enter one integer: "<<endl;
cin >>a;

  if (iseven (a))
    cout <<a<<" is false\n\n"<<endl;
  else
    cout <<a<<" is true\n\n"<<endl;;

}
