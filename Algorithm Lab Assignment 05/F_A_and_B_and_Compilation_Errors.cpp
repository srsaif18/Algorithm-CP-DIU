#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, x = 0, y = 0, z = 0;

    cin >> n;
   
    for(int i = 0; i < n; i++) {
        cin >> a;
        x += a;
    }

    for(int i = 0; i < n - 1; i++) {
        cin >> a;
        y += a;
    }

    for(int i = 0; i < n - 2; i++) {
        cin >> a;
        z += a;
    }

    cout << x - y << "\n" << y - z << endl;

    return 0;
}