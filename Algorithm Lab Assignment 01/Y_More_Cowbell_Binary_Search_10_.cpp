#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int _max = a[n - 1];

    for (int i = 0; i < n - k; i++)
        _max = max(_max, a[i] + a[2 * (n - k) - i - 1]);

    cout << _max;

    return 0;
}