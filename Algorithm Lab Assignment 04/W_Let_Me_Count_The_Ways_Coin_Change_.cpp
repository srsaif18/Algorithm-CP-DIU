#include <bits/stdc++.h>
using namespace std;

long long ways[30010];
int coins[] = {1, 5, 10, 25, 50};

int main() {
    ways[0] = 1;

    for (int c = 0; c < 5; ++c) {
        for (int i = coins[c]; i < 30010; ++i) {
            ways[i] += ways[i - coins[c]];
        }
    }

    int cents;

    while (cin >> cents) {
        if (ways[cents] == 1)
            cout << "There is only 1 way to produce " << cents << " cents change." << endl;
        else
            cout << "There are " << ways[cents] << " ways to produce " << cents << " cents change." << endl;
    }

    return 0;
}