#include <iostream>

int main()
{
    double num1, num2;
    char symbols;

    std::cout << "Enter first number";
    std::cin >> num1;

    std::cout << "Enter second number";
    std::cin >> num2;

    std::cout << "Enter symbols";
    std::cin >> symbols;

    switch (symbols)
    {
    case'+': std::cout << "result: " << num1 + num2;
        break;
    case'-': std::cout << "result: " << num1 - num2;
        break;
    case'*': std::cout << "result: " << num1 * num2;
        break;
    case'/': std::cout << "result: " << num1 / num2;
        break;
    }
    return 0;
}

