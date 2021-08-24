#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, min, max;

    cin >> n;

    int A[n];

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cin >> m;

    int B[m];

    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }
        
    for (int i = 0; i < m; i++) {
        min = lower_bound(A, A + n, B[i]) - A - 1;
        max = upper_bound(A, A + n, B[i]) - A;

        if (min > 0 && max >= n) {
            cout << A[min] << " X" << endl;
        } else if (min >= 0 && min < n && max >= 0 && min < n) {
            cout << A[min] << " " << A[max] << endl;
        } else if (min < 0 && max < n) {
            cout << "X " << A[max] << endl;
        } else {
            cout << "X X" << endl;
        }
    }

    return 0;
}