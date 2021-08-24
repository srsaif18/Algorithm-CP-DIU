#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k, counter = 0;

    cin >> n >> k;

    int Arr[n];

    for(int j = 0; j < n; j++) {
        cin >> Arr[j];
    }

    for(int j = 0; j < n; j++) {
        if(Arr[j] > 0 && Arr[j] >= Arr[k - 1])
            counter++;
    }

    cout << counter << endl;

    return 0;

}