// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int a, b, ans = 0;

//     cin >> a >> b;

//     while (a != b) {

//         if (a > b) {
//             b++;
//             ans++;
//         } else {
//             if (b % 2 == 0)
//             {
//                 b /= 2;
//                 ans++;
//             } else {
//                 b++;
//                 ans++;
//             }
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }

#include <stdio.h>

int n, m, i;

int main(void)
{
    scanf("%d %d", &n, &m);

    while (m > n)
    {
        (m % 2) ? m++ : (m /= 2);
        i++;
    }
    printf("%d", n - m + i);

    return (0);
}