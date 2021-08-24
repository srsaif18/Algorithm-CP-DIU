#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, k;

    while (1) {
        cin >> h >> k;

        if (h == 0) break;

        int A[h];
        int B[k];

        for (int i = 0; i < h; i++) {
            cin >> A[i];
        }

        for (int j = 0; j < k; j++) {
            cin >> B[j];
        }

        int cost = 0;
        bool ok = 1;

        sort(A, A + h);
        sort(B, B + k);

        for (int i = 0, j = 0; i < h && ok; i++) {
            while (j < k && B[j] < A[i])
                j++;

            if (j == k)
                ok = 0;
            else
                cost += B[j++];
        }

        if (!ok)
            cout << "Loowater is doomed!" << endl;
        else
            cout << cost << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int n, m;
// int h[20010], k[20010];

// int main(void)
// {
//     while (cin >> n >> m)
//     {
//         if (n == 0 && m == 0)
//             break;

//         for (int i = 0; i < n; i++)
//             cin >> h[i];

//         for (int i = 0; i < m; i++)
//             cin >> k[i];

//         sort(h, h + n);
//         sort(k, k + m);

//         int ans = 0;
//         int j = 0;

//         for (int i = 0; i < m; i++)
//             if (k[i] >= h[j])
//             {
//                 ans += k[i];

//                 if (++j == n)
//                     break;
//             }

//         if (j < n)
//             cout << "Loowater is doomed!" << endl;
//         else
//             cout << ans << endl;
//     }

//     return (0);
// }