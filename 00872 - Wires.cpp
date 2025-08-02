#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    vector<long long> l(n);
    long long mini = 0;

    for (int i = 0; i < n; i++) {
        cin >> l[i];
        mini = max(mini, l[i]);
    }

    long long left = 1, right = mini;
    long long cvb = 0;

    while (left <= right) {
        long long mid = (left + right) / 2;
        long long cem = 0;
        for (int i = 0; i < n; i++) {
            cem += l[i] / mid;
        }

        if (cem >= k) {
            cvb = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << cvb << endl;
}
