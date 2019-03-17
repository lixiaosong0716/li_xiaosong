#include <iostream>



int main()
{int number1;
std::cout << "Enter one integer: ";
std::cin >> number1;
if( 0 == number1%2 )
    std::cout << "The even is "<<number1<<std::endl;
if( 0<number1%2 )
    std::cout << "The odd is "<<number1<<std::endl;

    return 0;
}
