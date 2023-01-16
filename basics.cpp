//
// Created by Codetonsen on 1/15/2023.
//
#include <iostream>

// Task 1:
// Take an input of three numbers seperated by spaces, and print the sum of the three numbers.
void task1(){
    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a >> b >> c;
    int result = a+b+c;
    std::cout << std::to_string(result);
}

int main() {
    std::cout << "MAGNUS" << std::endl;
    task1();
    return 1;
}
