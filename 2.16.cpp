#include <iostream>



int main()
{int number1,number2,sum,difference,product,quotitent;
 std::cin >> number1 >> number2;
 std::cout << "Enter two integers: ";
 sum=number1+number2;
 difference=number1-number2;
 product=number1*number2;
 quotitent=number1/number2;

    std::cout << sum << difference << product << quotitent << std::endl;
    return 0;
}
