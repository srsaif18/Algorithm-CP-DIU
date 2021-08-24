// #include <bits/stdc++.h>
// using namespace std;

// struct can {
//     int dur;
//     int pos;
// };

// int n;

// can Ar[1001];

// bool compare(can a, can b) {
//     if(a.dur > b.dur) return true;
//     else return false;
// }

// int main() {
//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         cin >> Ar[i].dur;
//         Ar[i].pos = i + 1;
//     }

//     sort(Ar, Ar + n, compare);

//     int total = 0;

//     for(int i = 0; i < n; i++) {
//         total += Ar[i].dur * i + 1;
//     }

//     cout << total << endl;

//     for(int i = 0; i < n; i++) {
//         cout << Ar[i].pos << " ";
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <ctype.h>

#define N 1010

int n, ans, a[N], b[N];
char used[N];

int main(void)
{
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", a + i);

    for (int i = 0; i < n; i++)
    {
        int k = -1;

        for (int j = 0; j < n; j++)
        {
            if (!used[j] && (k == -1 || a[k] < a[j]))
                k = j;
        }

        used[k] = 1;
        b[i] = k + 1;
        ans += a[k] * i + 1;
    }

    printf("%d\n", ans);

    for (int i = 0; i < n; i++)
        printf("%d ", b[i]);

    return (0);
}