#include <bits/stdc++.h>
using namespace std;

int points[100000];

int main() {
    int test, c, n, i, l, q;

    long long int h;

    scanf("%d", &test);

    for (c = 1; c <= test; c++) {
        scanf("%d %d", &n, &q);

        for (i = 0; i < n; i++)
            scanf("%d", points + i);

        printf("Case %d:\n", c);

        while (q--) {
            scanf("%d %lld", &l, &h);

            l = lower_bound(points, points + n, l) - points;
            h = upper_bound(points + l, points + n, h) - points;

            printf("%d\n", h - l);
        }
    }

    return 0;
}