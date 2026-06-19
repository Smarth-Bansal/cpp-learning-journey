#include <iostream>

int runQuestion1();
int runQuestion2();
int runQuestion3();

int main() {

    std::cout << "=== LEARNCPP CHAPTER 4 SUMMARY QUIZ ===\n";
    // When you want to work on or debug a specific question,
    // just uncomment it here and press F5!
    // runQuestion1();
    // runQuestion2();
    // runQuestion3();

    return 0;
}

// Question 1:

int runQuestion1() {
    std::cout << "Question 1:\n";
    std::cout << "a) int\n";
    std::cout << "b) bool\n";
    std::cout << "c) double\n";
    std::cout << "d) int\n";
    std::cout << "e) float\n";
    std::cout << "f) std::int32_t\n";
    std::cout << "g) char\n";
    std::cout << "h) std::int16_t\n";
    return 0;
}

// Question 2:

int runQuestion2() {
    std::cout << "Question 2:\n";
    std::cout << "Enter 2 Values space separated: ";
    double value1{}, value2{};
    std::cin >> value1 >> value2;
    std::cout << "Enter +, -, *, or /: ";
    char operation{};
    std::cin >> operation;
    double result{};
    if (operation == '+') {
        result = value1 + value2;
    } else if (operation == '-') {
        result = value1 - value2;
    } else if (operation == '*') {
        result = value1 * value2;
    } else if (operation == '/') {
        result = value1 / value2;
    } else {
        std::cout << "Invalid operation\n";
        return 0;
    }
    std::cout << result << '\n';
    return 0;
}

// Question 3:
void heightAtTime(double height, double time) {
    double g{9.8};
    double heightAtTime = height - (0.5 * g * time * time);
    if (heightAtTime < 0) {
        std::cout << "Height at time " << time
                  << " seconds: " << "the ball is on the ground.\n";
    } else {
        std::cout << "Height at time " << time << " seconds: " << heightAtTime
                  << " meters\n";
    }
}

int runQuestion3() {
    std::cout << "Question 3:\n";
    std::cout << "Enter the height of the tower: ";
    double height{};
    std::cin >> height;
    heightAtTime(height, 0);
    heightAtTime(height, 1);
    heightAtTime(height, 2);
    heightAtTime(height, 3);
    heightAtTime(height, 4);
    heightAtTime(height, 5);
    return 0;
}