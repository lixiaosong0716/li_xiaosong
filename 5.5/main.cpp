#include <iostream>

using namespace std;

int main()
{ int number=1;
int a=0;
int sum=0;
cout << "Enter some integers: "<<endl;
cin >>number;
for (unsigned int i=1;i<=number ; i++ )
   {cin >> a ;
       sum+=a;

   }cout << sum <<endl;
    // end for
    return 0;
}
