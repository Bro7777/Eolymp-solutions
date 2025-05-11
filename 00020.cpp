
// Problem: Eolymp 20 - How many times to repeat?
// Link: https://basecamp.eolymp.com/en/problems/20

#include <iostream>

int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;  // Son basamağı topla
        n /= 10;        // Son basamağı kaldır
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;

    int count = 0;
    while (n > 0) {
        int digits_sum = sum_of_digits(n);
        n -= digits_sum;
        count++;
    }

    std::cout << count << std::endl;
    return 0;
}
