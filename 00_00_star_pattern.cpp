#include <iostream>


int main() {
    // std::cout << "Hello World" << std::endl;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
        return 0;
}