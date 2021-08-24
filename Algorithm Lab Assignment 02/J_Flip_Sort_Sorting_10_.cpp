#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while (cin >> N)
    {
        int A[N];

        int count = 0;

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        for (int i = 0; i < N; i++) {
            for (int j = N - 1; j > i; j--) {
                if (A[j] < A[j - 1])
                {
                    swap(A[j], A[j - 1]);
                    count++;
                }
            }
        }

        cout << "Minimum exchange operations : " << count << endl;
    }

    return 0;
}