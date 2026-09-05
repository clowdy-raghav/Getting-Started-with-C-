#include <iostream>

int main()
{
    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;

    //int grade = 9;
    //grade >= 60 ? std::cout << "You Pass!" : std::cout << "You Fail!";

    int number;
    std::cout << "Enter the number: ";
    std::cin >> number;

    //number%2 ? std::cout << "Odd!" : std::cout << "Even!"; // since 0 is false and 1 is true, we dont need ==0 or ==1 here
    std::cout << (number%2 ? "Odd!" : "even"); // another way of using ternary operator

    return 0;
}