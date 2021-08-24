#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    for(int i = 1; i <= t; ++i) {
        int n;
        
        string str;

        cin >> n >> str;

        int scarecrow = 0;

        for(int j = 0; j < n; ) { 
            if (str[j] == '.')
                 ++scarecrow, j += 3;
            else 
                ++j;
        }

        cout << "Case " << i << ": " << scarecrow << endl;
    }

    return 0;
}