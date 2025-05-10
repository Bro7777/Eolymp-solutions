// Problem: Eolymp 2 - Digits
// Link: https://basecamp.eolymp.com/en/problems/2

#include <iostream>

int main() {
    unsigned int n;
    std::cin >> n;

    int digit_count = 0;

    if (n == 0) {
        digit_count = 1;
    } else {
        while (n > 0) {
            n /= 10;
            digit_count++;
        }
    }

    std::cout << digit_count << std::endl;

    return 0;
}
