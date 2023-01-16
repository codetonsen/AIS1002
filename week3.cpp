//
// Created by Magnus on 1/16/2023.
//

#include <iostream>
#include <array>
#include <vector>
int main(int argc, char** argv) {

    //std::array<int, 3> myarray{1,2,3};
    std::vector<int> myarray;
    myarray.emplace_back(1);
    myarray.emplace_back(2);
    myarray.emplace_back(3);
    for (int i : myarray) {
        std::cout << i << std::endl;
    }



    std::cout << argc << std::endl;

    std::cout << argv[0] << std::endl;

    std::string name = argv[1];

    std::cout << "Name=" << name << std::endl;
    std::cout << "Hello, " << name << std::endl;
    return 0;
}