#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;

    cin >> t;

    while (t--) {

        int n;

        cin >> n;

        int A[n + 1], B[n + 1], AB[n + 1];

        for (int i = 1; i <= n; i++)
            cin >> A[i], AB[i] = 0;

        for (int i = n - 1; i >= 1; i--)
            for (int j = i; j < n; j++)
                if (A[j] > A[j + 1] && AB[j] == 0)
                    swap(A[j], A[j + 1]), AB[j] = 1;

        for (int i = 1; i <= n; i++)
            cout << A[i] << " ";
    }

    return 0;
}