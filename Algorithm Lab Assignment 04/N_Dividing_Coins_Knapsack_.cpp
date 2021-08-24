#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool dp[30000];
    int coins[200], t, n;

    cin >> t;

    while (t--)
    {
        int n, sum = 0;

        cin >> n;

        for (int i = 0; i < n; i++)
            cin >> (coins[i]), sum += coins[i];

        memset(dp, false, sizeof(dp));

        int mid = (sum / 2);

        dp[0] = 1;

        for (int i = 0; i < n; i++)
            for (int j = mid; j - coins[i] >= 0; j--)
                dp[j] |= dp[j - coins[i]];

        for (int i = sum / 2; i >= 0; i--)
            if (dp[i])
            {
                cout << abs((sum - i) - i) << endl;
                break;
            }
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// bool dp[30000];
// int coins[200];

// void input()
// {
//     int t, n;

//     cin >> t;

//     while (t--)
//     {
//         int n, sum = 0;

//         cin >> n;

//         for (int i = 0; i < n; i++)
//             cin >> (coins[i]), sum += coins[i];

//         memset(dp, false, sizeof(dp));

//         int mid = (sum / 2);

//         dp[0] = 1;

//         for (int i = 0; i < n; i++)
//             for (int j = mid; j - coins[i] >= 0; j--)
//                 dp[j] |= dp[j - coins[i]];

//         for (int i = sum / 2; i >= 0; i--)
//             if (dp[i])
//             {
//                 cout << abs((sum - i) - i) << endl;
//                 break;
//             }
//     }
// }

// int main()
// {
//     input();

//     return 0;
// }