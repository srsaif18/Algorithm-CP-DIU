#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, cases = 0;

    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
            break;

        int B[n], S[m];

        int mn = 0xfffffff;

        for (int i = 0; i < n; i++)
            cin >> B[i], mn = min(mn, B[i]);

        for (int i = 0; i < m; i++)
            cin >> S[i];

        if (n <= m)
            cout << "Case " << ++cases << ": 0" << endl;
        else
            cout << "Case " << ++cases << ": " << n - m << " " << mn << endl;
    }
    
    return 0;
}