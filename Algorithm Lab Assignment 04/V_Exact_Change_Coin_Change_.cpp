#include <bits/stdc++.h>
using namespace std;

#define inf 1000000

int dp[20100];
int coin[110];

int main() {
    int t;

    cin >> t;

    while (t--) {
        int money, n;

        cin >> money >> n;

        for (int i = 0; i < n; i++)
            cin >> coin[i];
        
        memset(dp, inf, sizeof(dp));

        dp[0] = 0;

        for (int i = 0; i < n; i++)
            for (int j = money; j > -1; j--)
                dp[j + coin[i]] = min(dp[j] + 1, dp[j + coin[i]]);
            
        

        for (int i = money; i <= 30100; i++)
            if (dp[i] < 10000) {
                cout << i << " " << dp[i] << endl;
                break;
            }
        
    }

    return 0;
}