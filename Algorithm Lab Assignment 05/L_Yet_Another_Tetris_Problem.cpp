#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--) {
        int n;

        cin >> n;

        int A[n];

        for(int i = 0; i < n; i++) {
            cin >> A[i];
        }

        int even = 0;
        int odd = 0;

        for(int i = 0; i < n; i++) {
            if(A[i] % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }

        if(even == n || odd == n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}