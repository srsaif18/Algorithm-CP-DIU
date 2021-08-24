#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int A[], int n) {
    int i, j, flag = 0;

    for(i = 0; i < n - 1; i++) {
        flag = 0;

        for(j = 0; j < n - i - 1; j++) {
            if(A[j] > A[j + 1]) {
                swap(A[j], A[j + 1]);
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

    for(int i = 1; i <= testCase; i++) {
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++) {
            cin >> A[i];
        }

        bubbleSort(A, n);

        cout << "Case " << i << ": " << A[n - 1] << endl;
        
    }

    return 0;
}