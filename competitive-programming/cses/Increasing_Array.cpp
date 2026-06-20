#include <iostream>

int main() {
    // Optimize standard I/O operations for competitive programming
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    long long moves = 0;
    long long prev;

    // Read the absolute first element
    std::cin >> prev;

    // Process the remaining n - 1 elements on the fly
    for (int i = 1; i < n; i++) {
        long long curr;
        std::cin >> curr;

        if (prev > curr) {
            moves += (prev - curr);
            // 'prev' stays the same because we effectively "increased" curr to
            // equal prev
        } else {
            // 'curr' is greater or equal, so it becomes the new baseline 'prev'
            prev = curr;
        }
    }

    std::cout << moves << "\n";

    return 0;
}