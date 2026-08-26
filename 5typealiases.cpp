#include <iostream>

    // typedef = reserved keyword used to create an additional name
    //           (alias) for another data type. kind of like a nickname.
    //           New identifier for an existing type
    //           Helps with readability and reduces typos

// typedef std::string text_t; // _t is a common naming convention for data types

using text_t = std::string; // "using" keword is more popular than using typedef nowdays.

int main(){

    text_t firstName = "raghav";

    std::cout << firstName << '\n';    

    return 0;
}