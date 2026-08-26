#include <iostream>

int main(){

/*    int x; //declaration
    x = 10; //assignment
    int y = 6;

    std::cout << x+y; */

    //integer (whole number, truncated if fractional)
    int age = 17;
    int year = 2026;
    int days = 7.5;

    //double(number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;
    
    std::cout << price <<std::endl;

    //char(single character)
    char grade = 'A'; //to store a single character in a variable, single quotes are used
    char initial = 'B';
    char currency = '$';
    std::cout << currency << std::endl;

    //boolean(true or false)
    bool student = true;
    bool power = true;
    bool available = false;

    //string(sequence of text)
    std::string name = "Raghav";
    std::string day = "MOnday";
    std::string food = "pizza";
    std::string address = "yooo-23, bp-uri, alzamia";

    std::cout  << address << std::endl;

    //string literal
std::cout << "Hello " << name << '\n';
std::cout << "You are " << age << " years old.";

    return 0;
}