#include <iostream>
#include <cmath> // many math functions are found within cmath header file.

int main(){

    double x = 4.13;
    double y = 13;
    double z, p, q, r;

    // z = std::min(x, y); // min() and max() functions are used to get minimum and maximum values
    // z = pow(2, y); and functions like sqrt().

    z = abs(-56.98); // used to get absolute values.
    p = round(9.51); // used to round to closest digit.
    q = ceil(x); // used to round up.
    r = floor(x); // used to round down.
    std::cout << z << std::endl;
    std::cout << p << std::endl;
    std::cout << q << std::endl;
    std::cout << r << std::endl;

    return 0;
}

// https://www.cplusplus.com/reference/cmath/ for more math functions.