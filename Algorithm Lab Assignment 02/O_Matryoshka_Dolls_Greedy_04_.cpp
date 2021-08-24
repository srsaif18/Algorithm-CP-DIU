#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, x;

    cin >> s >> x;

    int ans = 0;

    while(s) 
        s /= x, ans++;

    cout << ans << endl;

    return 0;
}