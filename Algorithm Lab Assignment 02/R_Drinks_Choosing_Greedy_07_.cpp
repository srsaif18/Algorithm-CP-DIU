#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, q = 0;

    cin >> n >> k;

    int num[k] = {0};

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        num[x]++;
    }

    for (int i = 1; i <= k; ++i) {
        if (num[i] & 1 == 1) {
            q++;
        }
    }

    cout << n - q / 2;

    return 0;
}