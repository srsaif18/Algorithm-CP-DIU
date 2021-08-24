#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin >> n;

    char A[n];

    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int j = 2;

    for(int i = 0; i < n; ) {
        cout << A[i];
        i += j;
        j++; 
    }

    return 0;
}