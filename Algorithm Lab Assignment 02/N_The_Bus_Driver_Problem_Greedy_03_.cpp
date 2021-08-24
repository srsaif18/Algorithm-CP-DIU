#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d, r;

    while (1) {
        int sum = 0;

        cin >> n >> d >> r;

        if (n == 0 && d == 0 && r == 0)
            break;

        int A[n], B[n];

        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        sort(A, A + n);

        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
        }

        sort(B, B + n, greater<int>());

        for (int i = 0; i < n; i++)
        {
            if (A[i] + B[i] > d)
                sum += (A[i] + B[i] - d) * r;
        }

        cout << sum << endl;
    }

    return 0;
}