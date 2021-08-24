#include <bits/stdc++.h>
using namespace std;

int BintoDec(int x) {
    int res = 0, remainder, counter = 0;

    while(x > 0) {
        remainder = x % 10;
        res = res + remainder * pow(2, counter);
        x = x / 10;
        counter++;
    }

    return res;
}

int main() {
    int t, D[4], B[4];

    char s;

    cin >> t;

    for(int i = 1; i <= t; i++) {
        cin >> D[0] >> s >> D[1] >> s >> D[2] >> s >> D[3];
        cin >> B[0] >> s >> B[1] >> s >> B[2] >> s >> B[3];

        if(D[0] == BintoDec(B[0]) && D[1] == BintoDec(B[1]) && D[2] == BintoDec(B[2]) && D[3] == BintoDec(B[3])) {
            cout << "Case " << i << ": " << "Yes" << endl;
        } else {
            cout << "Case " << i << ": " << "No" << endl;
        }

    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// bool check(int d, int b)
// {
//     int sum = 0, i = 0;

//     while (b > 0)
//     {
//         int mod = b % 10;
//         sum += mod * pow(2, i++);
//         b /= 10;
//     }

//     if (d != sum)
//         return false;
//     return true;
// }

// int main(void)
// {
//     int t, d[4], b[4], cnt = 0;
//     char s;

//     cin >> t;

//     while (t--)
//     {
//         cin >> d[0] >> s >> d[1] >> s >> d[2] >> s >> d[3];
//         cin >> b[0] >> s >> b[1] >> s >> b[2] >> s >> b[3];

//         if (check(d[0], b[0]) && check(d[1], b[1]) && check(d[2], b[2]) && check(d[3], b[3]))
//             cout << "Case " << ++cnt << ": "
//                  << "Yes" << endl;
//         else
//             cout << "Case " << ++cnt << ": "
//                  << "No" << endl;
//     }

//     return (0);
// }