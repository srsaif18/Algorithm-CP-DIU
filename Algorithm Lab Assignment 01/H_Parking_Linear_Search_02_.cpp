#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int Arr[], int n) {
    int i, j, flag = 0;

    for(i = 0; i < n - 1; i++) {
        flag = 0;

        for(j = 0; j < n - i - 1; j++) {
            if(Arr[j] > Arr[j + 1]) {
                swap(Arr[j], Arr[j + 1]);
                flag = 1;
            }
        }
        if(flag = 0) 
            break;
    }
}

int main() {
    int testCase, n;

    cin >> testCase;

    while(testCase--) {
        cin >> n;
        int Arr[n];
        for(int i = 0; i < n; i++) {
            cin >> Arr[i];
        }

        bubbleSort(Arr, n);

        int distance = Arr[n - 1] - Arr[0];

        cout << 2 * distance << endl;
    }

    return 0;
}