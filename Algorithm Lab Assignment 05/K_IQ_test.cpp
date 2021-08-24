// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, e = 0, o = 0;

//     cin >> n;

//     int A[n];

//     for(int i = 0; i < n; i++) {
//         cin >> A[i];
//     }

//     for(int i = 0; i < n; i++) {
//         if(A[i] % 2 == 0) {
//             e++;
//         } else {
//             o++;
//         }
//     }

//     if(e < o) {
//         for(int i = 0 ; i < n; i++) {
//             if(A[i] % 2 == 0) {
//                 cout << i + 1 << endl;
//                 break;
//             }
//         }
//     } else {
//         for(int i = 0; i < n; i++) {
//             if(A[i] % 2 != 0) {
//                 cout << i + 1 << endl;
//                 break;
//             }
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int n, a[105], i = 0, j = 0, p, q, x;

int main(void)
{
    scanf("%d", &n);

    for (x = 1; x <= n; x++)
    {
        scanf("%d", &a[x]);

        if (a[x] % 2)
            i++, p = x;
        else
            j++, q = x;
    }

    printf("%d", i < j ? p : q);

    return (0);
}
