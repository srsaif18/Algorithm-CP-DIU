#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, L;

    cin >> N;

    while (N--)
    {
        cin >> L;

        int A[L];

        int count = 0;

        for (int i = 0; i < L; i++) {
            cin >> A[i];
        }

        for (int i = 0; i < L; i++) {
            for (int j = L - 1; j > i; j--) {
                if (A[j] < A[j - 1])
                {
                    swap(A[j], A[j - 1]);
                    count++;
                }
            }
        }

        cout << "Optimal train swapping takes " << count << " swaps." << endl;
    }

    return 0;
}