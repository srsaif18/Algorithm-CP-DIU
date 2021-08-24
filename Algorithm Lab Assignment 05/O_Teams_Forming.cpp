#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;

    cin >> n;

    int Arr[n];

    for(int i = 0; i < n; i++) {
        cin >> Arr[i];
    }

    sort(Arr, Arr + n);

    for(int i = 1; i < n; i += 2) {
        ans += Arr[i] - Arr[i - 1];
    }

    cout << ans << endl;

    return 0;
}

