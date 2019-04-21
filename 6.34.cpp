#include <iostream>
#include<iomanip>
#include<random>
#include<ctime>
using namespace std;

int main()
{ int x;
int a;
    cout << "I have a number between 1 and 1000.\nCan you guess my number ?\nPlease type your first guess." << endl;
    default_random_engine engine(static_cast<unsigned int(time(0)));
    uniform_int_distribution<unsigned int>randomInt(1,1000);
    cout<<setw(10)<<randomInt(engine);
    a=randomInt(engine);
    if(x==a)
        cout<<"Excellent ! You guessed the number!\nWould you like to play again (y or n )"<<endl;
   else if (x<a)
        cout <<"Too low. Try again."<<endl;
   else if(x>a)
    cout<<"Too high. Try again."<<endl;
    return 0;
}
