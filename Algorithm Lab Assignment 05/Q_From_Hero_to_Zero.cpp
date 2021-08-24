#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--) {
        long long int n, k, r, ans;

        cin >> n >> k;

        ans = 0;

        while(n) {
            if(n % k == 0) {
                n /= k;
                ans++;
            } else {
                r = n % k;
                ans += r;
                n -= r;
            }
        }

        cout << ans << endl;
    }

    return 0;
}