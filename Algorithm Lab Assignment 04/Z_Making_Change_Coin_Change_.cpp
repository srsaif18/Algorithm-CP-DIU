#include <bits/stdc++.h>
using namespace std;

#define inf 10000

int minimum[1005];
int av[6];
int coins[] = {5, 10, 20, 50, 100, 200};

int Change(int n, int first) {
    if (n < -500 || n > 500)
        return inf;
    if (n <= 0 && first < 0)
        return minimum[-n];
    else if (first < 0)
        return inf;
    else if (!av[first])
        return Change(n, first - 1);
    else {
        av[first]--;
        int a = Change(n - coins[first], first);
        av[first]++;
        int b = Change(n, first - 1);
        return min(1 + a, b);
    }
}

int main() {
    int r, q, a, b;
    double n;

    for (int i = 0; i < 1005; i++)
        minimum[i] = inf;

    minimum[0] = 0;

    for (int i = 0; i < 6; i++)
        for (int j = coins[i]; j < 1005; j++)
            minimum[j] = min(minimum[j], 1 + minimum[j - coins[i]]);

    for (int i = 0; i < 6; i++) 
        cin >> av[i];

    while (av[0] || av[1] || av[2] || av[3] || av[4] || av[5]) {
   
        cin >> r;
        cin.ignore(1, '.');
        cin >> q;

        r = r * 100 + q;

        cout << fixed << setw(3) << Change(r, 5) << endl;

        for (int i = 0; i < 6; i++) 
            cin >> av[i];
    }

    return 0;
}