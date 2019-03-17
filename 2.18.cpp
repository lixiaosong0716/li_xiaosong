#include <iostream>


int main()
{
    int number1=0,number2=0;
    std::cout<<"Enter two integers: ";
    std::cin >> number1>>number2;
   if(number1>number2)
    std::cout <<number1<< " is large\n" <<std::endl;
   if(number1<number2)
    std::cout<<number2<< " is large" <<std::endl;
   if(number1==number2)
    std::cout << " These numbers are equal: "<<std::endl;


    return 0;
}
