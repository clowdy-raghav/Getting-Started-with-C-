#include <iostream>
// while taking user input, if the input contain space vaules, it ignores everything after the space
// to fix that, we use getline() function. 
int main(){

    int age;   
    std::string name;

    std::cout << "What is your age?: ";
    std::cin >> age;

    std::cout << "What is your full name?: ";
    std::getline(std::cin >> std::ws, name); // the std::ws is used when any input is taken earlier than getline function by using cin. ws = white spaces

    std::cout << "Your name is " << name << " and you are " << age << " years old! \n";

    return 0;
}