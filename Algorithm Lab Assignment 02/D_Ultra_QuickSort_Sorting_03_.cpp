#include <bits/stdc++.h>
using namespace std;

int a[500010], b[500010];

long long ans;

void merge_sort(int *A, int x, int y, int *T) {
    if (y - x > 1) {
        int m = x + (y - x) / 2;

        int p = x, q = m, i = x;

        merge_sort(A, x, m, T);
        merge_sort(A, m, y, T);

        while (p < m || q < y) {
            if (q >= y || (p < m && A[p] <= A[q]))
                T[i++] = A[p++];
            else
                T[i++] = A[q++], ans += m - p;
        }

        for (int i = x; i < y; i++)
            A[i] = T[i];
    }
}

int main() {
    int n;

    while (cin >> n && n) {
        ans = 0;

        for (int i = 0; i < n; i++)
            cin >> a[i];

        merge_sort(a, 0, n, b);

        cout << ans << endl;
    }

    return 0;
}