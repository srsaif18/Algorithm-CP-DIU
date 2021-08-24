#include<bits/stdc++.h>
using namespace std;
 
double s;
long a[30010] = { 0 },
    c[] = { 5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000 };
 
int main() {
    a[0] = 1;

    for(int i = 0; i < 11; i++)
        for(int j = c[i]; j <= 30000; j++)
            a[j] += a[j - c[i]];

    while(1) {
        cin >> s;

        if(s == 0) break;

        printf("%6.2f%17ld\n", s, a[(int) round(s * 100)]);
        //cout << fixed << setw(6) << setprecision(2) << s << fixed << setprecision(17) << a[(int) round(s * 100)] << endl;
    }

    return 0;
}