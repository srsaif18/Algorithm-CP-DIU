#include <bits/stdc++.h>

using namespace std;
int main() {
    int n, budget, x, y, mn, res, book1, book2;

    while (cin >> n) {
        int Arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> Arr[i];
        }

        sort(Arr, Arr + n);

        cin >> budget;

        for (int i = 0, mn = 10000000; i < n; i++) {
            for (int j = i; j < n; j++) {
                x = Arr[i];
                y = Arr[j];
                res = abs(x - y);

                if ((x + y) == budget && res < mn)
                {
                    book1 = x;
                    book2 = y;
                    mn = res;
                }
            }
        }

        cout << "Peter should buy books whose prices are " << book1 << " and " << book2 << "." << endl;
        cout << endl;
    }

    return 0;
}