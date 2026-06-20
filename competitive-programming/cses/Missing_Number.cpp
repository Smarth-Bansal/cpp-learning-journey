#include <iostream>

int main() {
    // Fast I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long n;
    std::cin >> n;

    // Calculate the expected sum of 1 to n
    long long expected_sum = (n * (n + 1)) / 2;

    long long actual_sum = 0;
    for (int i = 0; i < n - 1; ++i) {
        long long num;
        std::cin >> num;
        actual_sum += num;
    }

    // The difference is the missing number
    std::cout << expected_sum - actual_sum << "\n";

    return 0;
}