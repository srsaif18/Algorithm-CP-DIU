#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    while (cin >> n && n) {
        int A[n];

        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }

        sort(A, A + n);

        for (int i = 0; i < n - 1; i++) {
            cout << A[i] << " ";
        }

        cout << A[n - 1] << endl;
    }

    return 0;
}
