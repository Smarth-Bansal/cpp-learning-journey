#include <iostream>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // Edge cases where no beautiful permutation exists
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    // Print all even numbers first
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }

    // Print all odd numbers next
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }

    cout << "\n";
    return 0;
}