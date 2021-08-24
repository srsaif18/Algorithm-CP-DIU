#include <bits/stdc++.h>
using namespace std;

long long int counter = 0;

void merge(int *A, int *B, int s, int e) {
    if (s >= e)
        return;

    merge(A, B, s, (s + e) / 2);

    merge(A, B, ((s + e) / 2) + 1, e);

    int i = s, j = ((s + e) / 2) + 1, n = s;

    while (i <= (s + e) / 2 && j <= e)
        if (A[i] <= A[j] && i <= (s + e) / 2)
            B[n++] = A[i++];
        else {
            B[n++] = A[j++];
            counter += (s + e) / 2 + 1 - i;
        }

    while (i <= (s + e) / 2)
        B[n++] = A[i++];

    while (j <= e)
        B[n++] = A[j++];

    for (i = s; i <= e; i++)
        A[i] = B[i];

    return;
}

int main() {
    int t, n, A[200005], B[200005];

    cin >> t;

    while (t--) {
        cin >> n;

        counter = 0;

        for (int i = 0; i < n; i++)
            cin >> A[i];

        merge(A, B, 0, n - 1);

        cout << counter << endl;
    }

    return 0;
}