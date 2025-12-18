#include <iostream>
using namespace std;

bool isPowerOfFour(int n) {
    if (n <= 0) return false;   // negative numbers & zero are not powers of 4

    while (n % 4 == 0) {        // while n is divisible by 4
        n = n / 4;              // divide it by 4
    }

    return n == 1;              // if we reach 1 → power of four
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPowerOfFour(n))
        cout << n << " is a power of four.";
    else
        cout << n << " is NOT a power of four.";

    return 0;
}
