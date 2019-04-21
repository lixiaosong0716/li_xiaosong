#include <iostream>

using namespace std;
double qualityPoints(double x)
{
 if(90<=x&&x<=100)
    cout <<"4"<<endl;
 else if(80<=x&&x<=89)
    cout <<"3"<<endl;
    else if(70<=x&&x<=79)
        cout << "2"<<endl;
    else if (60<=x&&x<=69)
        cout <<"1"<<endl;
    else if (x<60)
        cout <<"0"<<endl;
}


int main()
{ double a;
  cout<<"Enter a qualityPoint: "<<endl;
  cin >>a;
  qualityPoints(a);

}
