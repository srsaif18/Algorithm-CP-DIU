#include <bits/stdc++.h>
using namespace std;

int main() {
    char A[100000];

    int x = 0, i = 1;

    while(cin >> A[i]) {
        if(A[i] == A[i - 1]) {
            i -= 2;
        	x++;
        }

        i++;
    }

        if(x % 2 == 1)
		    cout << "Yes" << endl;
        else 
		    cout << "No" << endl;

    return 0;
}