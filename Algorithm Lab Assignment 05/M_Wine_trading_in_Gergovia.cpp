#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    while(cin >> n) {
        if(n == 0) break;

        long long sum = 0, ans = 0, x;

        while(n--) {
            cin >> x;

            sum += x;
        
            if(sum < 0)
                ans -= sum;
            else
                ans += sum;
        }

        cout << ans << endl;
    }

    return 0;
}