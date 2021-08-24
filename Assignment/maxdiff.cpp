#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    int n, m;

    while (t--)
    {
        cin >> n >> m;

        int A[n];

        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        int max = 0, min = 0;

        for (int i = m; i < n; i++)
        {
            max += A[i];
        }

        for (int i = 0; i < n - m; i++)
        {
            min += A[i];
        }

        cout << max - min << endl;
    }

    return 0;
}