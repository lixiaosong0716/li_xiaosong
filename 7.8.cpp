#include <iostream>
#include<array>
#include<iomanip>
using namespace std;

int main()
{
     array <int,6>alphabet;
     for(size_t i=0;i<alphabet.size();++i)
     alphabet[i]=0;
     cout<<"Element"<<setw(13)<<"Value"<<endl;
     for(size_t j=0;j<alphabet.size();++j)
        cout<<setw(13)<<j<<setw(13)<<alphabet[j]<<endl;
}
