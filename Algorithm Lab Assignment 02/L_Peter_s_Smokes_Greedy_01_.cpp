#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, i, j, s, a;

    while (cin >> n >> k) {
        s = n;

        a = k;

        while (1) {
            i = n / a;
            j = n % a;

            s += i;

            n = i + j;

            if (i + j < a)
                break;
        }

        cout << s << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int n, k;

//     while (cin >> n >> k) {
//         cout <<  n + (n - 1) / (k - 1) << endl;
//     }

//     return 0;
// }