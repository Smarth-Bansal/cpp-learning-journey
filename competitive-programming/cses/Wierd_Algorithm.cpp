#include <iostream>

long wierdAlgorithm(long n) {
    if (n % 2 == 0) {
        return n / 2;

    } else {
        return 3 * n + 1;
    }
}
int main() {
    long input{};
    std::cin >> input;
    if (input != 1) {
        while (input != 1) {
            std::cout << input << " ";
            input = wierdAlgorithm(input);
        }
    }
    std::cout << 1 << std::endl;
    return 0;
}