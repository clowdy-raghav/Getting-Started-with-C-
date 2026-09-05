#include<iostream>

// basic operators such as + - * / %
// ++ and +=1 adds one to the assigning value while += is used to add any number to the assigning value itslef. 
// same for -- -= *= /=

int main(){

    int ans;
    int num; 
    double value;

    ans = 6%4;
    num = 10/3; // since the variable is int, this will result in integer division, hence num will be 3. 
    value = 10.0/3; // here the variable and assignment is double so the division will be double and result will be 3.33

    std::cout << ans << '\n' << num << '\n' << value << '\n';

    std::cout << 1 - 5 + 4*6 - (5+8) + 9/3 << '\n'; // we can overrule BODMAS by giving operator preference using parenthesis.
    // the answer shouldve been 26 but by using operator preference the answer will be 10.
    return 0;
}