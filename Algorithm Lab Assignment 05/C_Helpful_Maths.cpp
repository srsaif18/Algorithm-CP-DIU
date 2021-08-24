#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;

	char Arr[100];

	cin >> str;

	int j = 0;

	for (int i = 0;i < str.size();i++) {
		if (str[i] != '+') {
			Arr[j] = str[i];
			j++;
		}
	}
	
	sort(Arr, Arr + j);

	for (int i = 0; i < j; i++) {
		if (i == j - 1) 
			cout << Arr[i] << endl;
		else 
			cout << Arr[i] << "+";
	}

	return 0;
}