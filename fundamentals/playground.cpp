#include <iostream>  int factorial (int input) {     if(input <= 0) {
        return input*input;
    }
}

int main() {

    std::cout << "Input here" <<std::endl;
    int input;
    std::cin >> input;
    int y = factorial(input);
    std::cout << y << std::endl;

    return 0;
}
