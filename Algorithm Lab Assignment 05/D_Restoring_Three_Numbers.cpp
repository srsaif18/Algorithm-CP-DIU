#include <bits/stdc++.h>
using namespace std;

int main() {
    int Arr[4];

    for(int i = 0; i < 4; i++) {
        cin >> Arr[i];
    }

    sort(Arr, Arr + 4);

    cout << Arr[3] - Arr[2] << " " << Arr[3] - Arr[1] << " " << Arr[3] - Arr[0] << endl;

    return 0;
}