#include <iostream>

int main(){
    char ans;
    double temp, result;
    std::cout << "==========Temperature Conversion==========\n";

    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";

    std::cout << "Do you want to convert the temperature into °F or °C ?: ";
    std::cin >> ans;
    ans=toupper(ans);

    switch(ans){
        case 'F':
            std::cout << "Enter the temperature in Celsius: ";
            std::cin >> temp;
            result=(9.0/5.0*temp) + 32.0;
            std::cout << temp << " °C conversion is " << result << " °F !\n"; 
            break;
        case 'C':
            std::cout << "Enter the temperature in Fahrenheit: ";
            std::cin >> temp;
            result=(5.0/9.0)*(temp - 32.0);
            std::cout << temp << " °F conversion is " << result << " °C !\n";
            break;
        default:
            std::cout << "Invalid Response!\n";
            std::cout << "Enter 'F' for Fahrenheit or 'C' for Celsius!\n";
    }
    std::cout << "==========================================\n";
    return 0;
}