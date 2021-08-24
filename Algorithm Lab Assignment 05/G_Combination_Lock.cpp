// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, a, b;

//     cin >> n;

//     char A[n], B[n];

//     for(int i = 0; i < n; i++) {
//         cin >> A[i];
//     }

//     for(int i = 0; i < n; i++) {
//         cin >> B[i];
//     }

//     int c = 0;

//     for(int i = 0; i < n; i++) {
//         a = max(A[i], B[i]);
//         b = min(A[i], B[i]);

//         if((a - b) <= 5) {
//             c += (a - b);
//         } else {
//             c += 10 - (a - b);
//         }
//     }

//     cout << c << endl;

//     return 0;
// }

#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, k, l = 0;

    scanf("%d", &n);

    char a[1000];
    scanf("%s", a);

    char b[1000];
    scanf("%s", b);

    for (int i = 0; i < n; i++)
    {
        k = abs(a[i] - b[i]);
        if (k > 5)
            k = 10 - k;
        l = l + k;
    }

    printf("%d\n", l);

    return (0);
}