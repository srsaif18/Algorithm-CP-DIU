#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, o = 0, e = 0, c = 0, sum = 0, d = 0;

    cin >> n;

    int A[n];

    for (int i = 0; i < n; i++) {
        cin >> A[i];

        if (A[i] % 2)
            o++;
        else
            e++;
    }

    if (o > e)
        d++;

    sort(A, A + n);

    for (int i = 0; i < n && c < abs(o - e) - 1; i++)
        if (A[i] % 2 == d) {
            c++;
            sum += A[i];
        }

    cout << sum << endl;

    return 0;
}
