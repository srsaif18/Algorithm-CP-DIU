#include <bits/stdc++.h>
using namespace std;

struct pizza
{
    string name;
    int points;
};

int n;

pizza suggestions[1001];

bool compare(pizza a, pizza b)
{
    if (a.points > b.points)
        return true;
    else
        return false;
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> suggestions[i].name >> suggestions[i].points;
    }

    sort(suggestions, suggestions + n, compare);

    cout << suggestions[0].name << endl;

    return 0;
}