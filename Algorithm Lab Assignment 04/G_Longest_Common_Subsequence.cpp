#include <iostream>
using namespace std;

int arr[2000][2000];

int main() {
    string s1, s2;
    int l1, l2;

    while (getline(cin, s1)) {
        getline(cin, s2);

        l1 = s1.size();
        l2 = s2.size();

        for (int i = 1; i <= l1; i++)
            for (int j = 1; j <= l2; j++) {
                if (s1[i - 1] == s2[j - 1])
                    arr[i][j] = arr[i - 1][j - 1] + 1;
                else
                    arr[i][j] = max(arr[i][j - 1], arr[i - 1][j]);
            }

        cout << arr[l1][l2] << endl;
    }

    return 0;
}
