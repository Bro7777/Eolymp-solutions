// Problem: Eolymp 85 - Spiral
// Link: https://basecamp.eolymp.com/en/problems/85

#include <iostream>
#include <vector>

std::pair<int, int> findNumbers(int n, int i, int j) {
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));
    int num = 1;
    int left = 0, right = n - 1, top = 0, bottom = n - 1;

    while (num <= n * n) {
        for (int k = left; k <= right; ++k) {
            matrix[top][k] = num++;
        }
        top++;

        for (int k = top; k <= bottom; ++k) {
            matrix[k][right] = num++;
        }
        right--;

        for (int k = right; k >= left; --k) {
            matrix[bottom][k] = num++;
        }
        bottom--;

        for (int k = bottom; k >= top; --k) {
            matrix[k][left] = num++;
        }
        left++;
    }

    // Verilmiş koordinatlardakı ədədləri tapmaq
    return std::make_pair(matrix[i - 1][j - 1], matrix[j - 1][i - 1]);
}

int main() {
    int n, i, j;
    std::cin >> n >> i >> j;

    std::pair<int, int> result = findNumbers(n, i, j);
    std::cout << result.first << std::endl;

    return 0;
}
