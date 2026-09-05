#include<iostream>

int main(){
    // if statements = do something if a condition is true.
    //                 if not, then dont do it.

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 120){
        std::cout << "You are too old to enter!";
    }

    else if(age >= 18){
        std::cout << "Welcome tp the site!";
    }

    else if(age < 0){
        std::cout << "You need to exist to enter the site!";
    }

    else{
        std::cout << "Sorry, You need to be 18 years or oldr to enter!";
    }

    return 0;
}