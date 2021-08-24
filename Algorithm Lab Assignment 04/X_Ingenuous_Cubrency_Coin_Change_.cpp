#include <bits/stdc++.h>
using namespace std;

long long dp[10100];
int coins[30];

int main() {
    for (int i = 1; i < 22; i++)
        coins[i] = i * i * i;

    dp[0] = 1;

    for (int i = 1; i < 22; i++) {
        for (int j = coins[i]; j < 10100; j++)
            if (dp[j - coins[i]])
                dp[j] += dp[j - coins[i]];
    }

    int n;

    while (cin >> n)
        cout << dp[n] << endl;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// long long dp[10010];

// void coinChange()
// {
//     for (int i = 1; i < 22; i++)
//     {
//         int iCube = i * i * i;
//         for (int j = iCube; j < 10010; j++)
//         {
//             dp[j] = dp[j - iCube] + dp[j];
//         }
//     }
// }

// int main()
// {
//     for (int i = 1; i < 10010; i++)
//         dp[i] = 0;

//     dp[0] = 1;

//     coinChange();

//     int change;

//     while (cin >> change)
//     {
//         cout << dp[change] << endl;
//     }

//     return 0;
// }

