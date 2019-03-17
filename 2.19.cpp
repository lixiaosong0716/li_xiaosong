#include <iostream>



int main()
{int number1,number2,number3;
std::cout << "Input three different integers: ";
std::cin >>number1>>number2>>number3;
  Sum = number1+number2+number3;
  Average = (number1+number2+number3)/3;
  Product = number1*number2*number3;
std::cout << "Sum is" << Sum <<std::endl;
std::cout<< "Average is" << Average <<std::endl;
std::cout<< "Product is" << Product <<std::endl;
 if(number1<number2,number3<number1)
    std::cout<< "The smallest is" << number3 <<std::endl;
    std::cout<< "The largest is" << number2 <<std::endl;
if(number1<number3,number3<number2)
    std:cout << "The smallest is" << number1 <<std::endl;
    std::cout<< "The largest is" << number2 <<std::endl;
if(number3<number2,number2<number1)
    std::cout<< "The smallest is" << number3 <<std::endl;
    std::cout<< "The largest is" << number1 <<std::endl;

    return 0;
}
