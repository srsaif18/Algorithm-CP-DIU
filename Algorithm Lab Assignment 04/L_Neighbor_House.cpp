// #include <bits/stdc++.h>
// using namespace std;

// int a[1010][4];

// int main() {
//     int t, N, cnt = 0;

// 	cin >> t;

// 	while(t--) {
//         cin >> N;

// 		for(int j = 0; j < N; j++)
// 			cin >>  a[j][0] >> a[j][1] >> a[j][2];

// 		for(int j = 1; j < N; j++) {
// 			a[j][0] += min(a[j - 1][1], a[j - 1][2]);
// 			a[j][1] += min(a[j - 1][0], a[j - 1][2]);
// 			a[j][2] += min(a[j - 1][1], a[j - 1][0]);
// 		}

// 		cout << "Case " << ++cnt << ": " << min(a[N - 1][0], min(a[N - 1][1], a[N - 1][2])) << endl;
// 	}

// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int rgb[1020][4];

void input()
{
    int T, n, cnt = 0;

    cin >> T;

    while (T--)
    {
        cin >> n;

        for (int j = 0; j < n; j++)
            cin >> rgb[j][0] >> rgb[j][1] >> rgb[j][2];

        for (int j = 1; j < n; j++)
        {
            rgb[j][0] += min(rgb[j - 1][1], rgb[j - 1][2]);
            rgb[j][1] += min(rgb[j - 1][0], rgb[j - 1][2]);
            rgb[j][2] += min(rgb[j - 1][1], rgb[j - 1][0]);
        }

        cout << "Case " << ++cnt << ": " << min(rgb[n - 1][0], min(rgb[n - 1][1], rgb[n - 1][2])) << endl;
    }
}

int main()
{
    input();

    return 0;
}