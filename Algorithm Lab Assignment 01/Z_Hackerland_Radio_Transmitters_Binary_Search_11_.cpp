#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, j, counter = 0, x, k, n;

    cin >> n >> k;

    int ar[n];

    for (i = 0; i < n; i++)
        cin >> ar[i];

    sort(ar, ar + n);

    i = 0;

    while (i < n) {
        j = i + 1;

        while ((ar[i] + k >= ar[j]) && (j < n)) {
            j++;
        }

        x = j;
        j--;

        while (ar[j] + k >= ar[x] && (x < n)) {
            x++;
        }

        counter++;
        i = x;
    }

    cout << counter;

    return 0;
}