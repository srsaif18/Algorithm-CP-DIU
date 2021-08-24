#include <bits/stdc++.h>
using namespace std;

int A[1000000];

int main() {
    int n, m, size, x;

    cin >> n;

    int k = 0;

    for (int i = 0; i < n; i++) {
        cin >> size;
        
        while (size--)
            A[k++] = i + 1;
    }

    cin >> m;

    while (m--) {
        cin >> x;
        cout << A[x - 1] << endl;
    }

    return 0;
}