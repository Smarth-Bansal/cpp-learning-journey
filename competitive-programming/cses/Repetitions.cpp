#include <algorithm>
#include <iostream>
#include <string>

int main() {
    // Fast I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string a;
    std::cin >> a;

    if (a.empty()) {
        std::cout << 0 << "\n";
        return 0;
    }

    int Max = 1;
    int curr = 1;

    // Start from the second character
    for (size_t i = 1; i < a.length(); ++i) {
        if (a[i] == a[i - 1]) {
            // If it matches the previous character, grow the current streak
            curr++;
        } else {
            // If it's a new character, reset the streak to 1
            curr = 1;
        }

        // Keep track of the highest streak seen so far
        Max = std::max(Max, curr);
    }

    std::cout << Max << "\n";

    return 0;
}