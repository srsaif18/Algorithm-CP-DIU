#include <bits/stdc++.h>
using namespace std;

int weight[1010], m_load[1010], f[6666];

int main() {
    int n;

    while (cin >> n) {
        if(n == 0)
            break;

        for (int i = 1; i <= n; ++i)
            cin >> weight[i] >> m_load[i];

        int ans = 0;

        for (int i = 1; i <= 6000; ++i)
            f[i] = -6666;
        
        for (int i = n; i >= 1; --i)
            for (int j = 6000; j >= weight[i]; --j)
            {
                if (f[j] < f[j - weight[i]] + 1 && m_load[i] >= j - weight[i])
                    f[j] = f[j - weight[i]] + 1;

                if (ans < f[j])
                    ans = f[j];
            }
        
        cout << ans << endl;
    }

    return 0;
}