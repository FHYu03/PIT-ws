#include <iostream>

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    for(int i = 0; i < num; i++) {
        std::cout << "x" << std::endl; 
    }

    return 0;
}

