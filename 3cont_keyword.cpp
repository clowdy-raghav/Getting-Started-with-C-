#include <iostream>

int main() {
    // The const kwywords specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // (read-only)

    const double PI = 3.14159; // now if someone else our we set another vairiable with the name "pi", the value would change wihtout us knowing
    double radius = 25; // the const keywords prevents mixing of variables. Common namiing convention for this keyword is uppercase
    double circumference = 2*PI*radius;

    std::cout << circumference << "meters";
    return 0;

}