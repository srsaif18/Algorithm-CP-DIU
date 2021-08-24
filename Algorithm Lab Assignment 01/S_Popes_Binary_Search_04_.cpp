#include <bits/stdc++.h>
using namespace std;

int main() {
    int y;

    while (cin >> y) {
        y--;

        int p;

        cin >> p;

        int a[p];

        for (int i = 0; i < p; i++)
            cin >> a[i];

        int count = 0;
        int j;
        int first;
        int last;
        int max = 0;

        for (int i = 0; i < p; i++) {
            j = i;
            count = 0;
            while (a[j] <= a[i] + y) {
                j++;
                count++;
            }

            if (count > max) {
                max = count;
                first = a[i];
                last = a[j - 1];
            }
        }

        cout << max << " " << first << " " << last << endl;
    }

    return 0;
}