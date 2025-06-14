// Problem: Eolymp 27 - Cycle shifts
// Link: https://basecamp.eolymp.com/en/problems/27

#include <bits/stdc++.h>
using namespace std;

// Verilmiş ikilik ədədi dövri sürüşdürərək ən böyüyünü tapır
int maxCyclicShift(int n) {
    string bin = bitset<32>(n).to_string(); // İkilik ədədi string kimi alırıq
    bin = bin.substr(bin.find('1')); // Ən soldakı `1`-dən başlayaraq 0-ları silirik

    int maxVal = n; // Başlanğıcda n-i ən böyük kimi götürürük
    string shifted = bin;

    // Dövri sürüşmələr üçün
    for (int i = 1; i < bin.size(); i++) {
        // İkilik ədədi bir dövri sürüşdür
        rotate(shifted.begin(), shifted.begin() + 1, shifted.end());
        maxVal = max(maxVal, stoi(shifted, 0, 2)); // Dövri sürüşməni onluğa çevir və müqayisə et
    }

    return maxVal;
}

int main() {
    int n;
    cin >> n;
    cout << maxCyclicShift(n) << endl;
    return 0;
}
