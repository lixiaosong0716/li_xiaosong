#include <iostream>

using namespace std;

int main()
{
   int a,b,c;
   cin>>a,b,c;
if( a*a==b*b+c*c)
   cout <<"This is a right angle: "<<endl;
   else if(a*a+b*b==c*c)
    cout<<"This is a right angle: "<<endl;
  else if(b*b==a*a+c*c)
    cout<<"This is a right angle: "<<endl;
else cout << "They are not a right angle: "<<endl;

} // end main
