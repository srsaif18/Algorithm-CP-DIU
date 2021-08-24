#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, test = 1;

    cin >> t;

    while(t--) {
        cin >> n;

        int A[100001], i;

        for(i = 1; i <= n; i++)
            cin >> A[i];

        int counter = 0, answer;

        for(i = 1; i <= n; i++) {
            if(A[i]-A[i-1] > counter) {
                counter = A[i]-A[i-1];
            }
        }

        answer = counter;

        for(i = 1; i <= n; i++) {
            if(A[i]-A[i-1] == counter) {
                counter--;
            } else if(A[i]-A[i-1] > counter) {
                answer++;
                break;
            }
        }

        cout << "Case " << test++ << ": " << answer << endl;
    }

    return 0;
}