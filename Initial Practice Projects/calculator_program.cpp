#include <iostream>

int main(){

    char op;
    double num1, num2, result;

    std::cout << "====================Calculator==================== \n";

    std::cout << "Enter eirhter (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter number 1: ";
    std::cin >> num1;

    std::cout << "Enter number 2: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << num1 << " + " << num2 << " = " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << num1 << " - " << num2 << " = " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << num1 << " x " << num2 << " = " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << num1 << " ÷ " << num2 << " = " << result << '\n';
            break;
        default:
            std::cout << "Invalid Operator! \n";
    }

    std::cout << "==================================================";

    return 0;
}