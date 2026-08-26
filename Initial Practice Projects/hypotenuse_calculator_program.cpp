#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double hypotenuse, height, base;
    cout << "Enter height of the triangle:  ";
    cin >> height;
    cout << "Enter base of the triangle:  ";
    cin >> base;

    hypotenuse = sqrt(pow(height, 2) + pow(base, 2));
    cout << "The Hypotenuse of the right triangle through pythagorean theorem is: " << hypotenuse << '\n';

    return 0;
}