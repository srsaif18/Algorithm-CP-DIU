#include <iostream>
using namespace std;

int main() {
    int A[200], b[200], i, k = 0, l, m = 0, n, s = 0;

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> A[i];

        m += A[i];

        if (i == 0 || 2 * A[i] <= A[0]) {
            b[k++] = i + 1;
            s += A[i];
        }
    }

    if (2 * s <= m) {
        cout << "0";
    } else {
        cout << k << endl;

        for (i = 0; i < k; i++) {
            cout << b[i] << " ";
        }
    }

    return 0;
}