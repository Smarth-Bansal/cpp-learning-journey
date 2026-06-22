#include <iostream>

int runQuestion1();
int runQuestion2();
int runQuestion3();
int runQuestion4();
int runQuestion5();

int main() {

    std::cout << "=== LEARNCPP CHAPTER 5 SUMMARY QUIZ ===\n";
    // When you want to work on or debug a specific question,
    // just uncomment it here and press F5!
    // runQuestion1();
    // runQuestion2();
    // runQuestion3();
    // runQuestion4();
    // runQuestion5();
    return 0;
}

int runQuestion1() {
    std::cout << "Question 1:\n";
    std::cout << "a) Using literals in your program makes it harder to "
                 "understand and modify your code. Symbolic constants make "
                 "your code more readable and easier to maintain.\n";
    std::cout << "b) #define constants do not show up in the debugger and are "
                 "more likely to have naming conflicts.\n";
    return 0;
}

int runQuestion2() {
    std::cout << "Question 2:\n";
    std::cout << "On line 8 The std::uint8_t is tpically a typedef for "
                 "unsigned char, which is an integral type. This will cause "
                 "conflicts therefore normal int should be used instead.\n";
    std::cout << "On line 13 15 17 The appropriate curly brackets are missing "
                 "for if-else statements.\n";
    std::cout
        << "On line 18 '.\\n' should be in double quotes instead of single "
           "quotes as it is a string literal and not a character literal.\n";

    return 0;
}

int runQuestion3() {
    std::cout << "Question 3:\n";
    std::cout
        << "std::string name creates a mutable string object that can be "
           "modified during runtime but it is expensive for copying and "
           "intializing. Whereas on the other hand std::string_view provides a "
           "read only view of the string that is elsewhere located. It is "
           "inexpensible for intializing and copying but can be dangerous if "
           "the original string is modified or destroyed.\n";
    return 0;
}

int runQuestion4() {
    std::cout << "Question 4:\n";
    std::cout << "Enter the Name of Person #1: ";
    std::string name1;
    std::getline(std::cin >> std::ws, name1);
    int age1;
    std::cout << "Enter the Age of Person " << name1 << ": ";
    std::cin >> age1;
    std::cout << "Enter the Name of Person #2: ";
    std::string name2;
    std::getline(std::cin >> std::ws, name2);
    int age2;
    std::cout << "Enter the Age of Person " << name2 << ": ";
    std::cin >> age2;
    if (age1 > age2) {
        std::cout << name1 << " (age " << age1 << ") is older than " << name2
                  << " (age " << age2 << ").\n";
    } else if (age1 < age2) {
        std::cout << name2 << " (age " << age2 << ") is older than " << name1
                  << " (age " << age1 << ").\n";
    } else {
        std::cout << name1 << " (age " << age1 << ") and " << name2 << " (age "
                  << age2 << ") are of the same age.\n";
    }
    return 0;
}
int runQuestion5() {
    std::cout << "Question 5:\n";

    std::cout
        << "A constexpr variable requires a constant expression initializer, "
           "and the call to getAge() isn’t allowed in a constant expression. "
           "Therefore, we can only make the variable const.\n";
    std::cout
        << "My approach of the Question is different from the one author wrote "
           "so my solution is base on the solution provided by the author.\n";
    return 0;
}