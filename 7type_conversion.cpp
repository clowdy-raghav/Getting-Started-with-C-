#include <iostream>

int main(){

    // double x = (int) 77.2986;
    // char x = 100; will result in 'd' as character value of 4 is d
    // std::cout << (char) 99 << std::endl;

    int correct_ans = 9;
    int total_ques = 10;
    double result = correct_ans/(double)total_ques * 100;

    std::cout << result << "%\n";

    return 0;
}