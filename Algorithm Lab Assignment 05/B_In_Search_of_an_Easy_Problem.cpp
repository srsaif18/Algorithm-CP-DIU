#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, flag = 0;

    cin >> n;

    int Arr[n];

    for(int i = 0; i < n; i++) {
        cin >> Arr[i];

        if(Arr[i] == 1) {
            flag++;
        }
    }

    if(flag == 0) {
        cout << "EASY" << endl;
    } else {
        cout << "HARD" << endl;
    }

    return 0;   
}