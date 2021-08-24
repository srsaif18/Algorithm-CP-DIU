#include <bits/stdc++.h>
using namespace std;

int rev(int n, int temp) {
	if (n == 0)
		return temp;

	temp = (temp * 10) + (n % 10);

	return rev(n / 10, temp);
}

int main() {

	int n, testCase;

	cin >> testCase;

	for (int i = 1; i <= testCase; i++) {

		cin >> n;

		int temp = rev(n, 0);

		if (temp == n)
			cout << "Case " << i << ": "
				 << "Yes" << endl;
		else
			cout << "Case " << i << ": "
				 << "No" << endl;
	}

	return 0;
}
