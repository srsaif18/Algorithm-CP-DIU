#include <bits/stdc++.h>
using namespace std;

int P[100005];
int S[100005];

int mergesort(int *a, int *b, int l, int r) {
    if (l == r)
        return 0;

    int mid = (l + r) >> 1;

    int L = mergesort(b, a, l, mid);

    int R = mergesort(b, a, mid + 1, r);

    int p = l, q = mid + 1, sum = L + R, s = l;

    while (p <= mid || q <= r) {
        if (q > r || (p <= mid && a[p] <= a[q]))
            b[s++] = a[p++];
        else {
            b[s++] = a[q++];
            sum += mid - p + 1;
        }
    }

    return sum;
}

int main() {
    int N;

    while (cin >> N && N) {
        for (int i = 1; i <= N; ++i) {
            cin >> P[i];
            S[i] = P[i];
        }

        if (mergesort(P, S, 1, N) % 2)
            cout << "Marcelo" << endl;
        else
            cout << "Carlos" << endl;
    }

    return 0;
}
