#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
unsigned int flip()
 {  unsigned int res;

   res=rand()%2;

     return res;
 }
int main()
{  unsigned int facem1=0;
    unsigned int facem2=0;
    int a;

     for (unsigned int roll=1;roll<=100;++roll)
     {
         unsigned int face =1+rand()%2;

         switch(face)
    {

case 1:
        ++facem1;
        break;
     case 2:
        ++facem2;
        break;
     default:
        cout << "Program should never get here!";
     }

}
  a=flip();
  cout <<"Face "<<"Facem"<<endl;
  cout <<"1"<<facem1
  <<"2"<<facem2<<endl;
}

