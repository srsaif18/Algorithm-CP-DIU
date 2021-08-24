#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int testCase;

  cin >> testCase;

  while (testCase--) {

    int bunCount, pettyCount, cutletCount;

    cin >> bunCount >> pettyCount >> cutletCount;

    int hBurgerPrice, cBurgerPrice;

    cin >> hBurgerPrice >> cBurgerPrice;

    int profit = 0;

    if (hBurgerPrice > cBurgerPrice) {
      profit += hBurgerPrice * min(bunCount / 2, pettyCount);
      bunCount -= 2 * min(bunCount / 2, pettyCount);
      profit += cBurgerPrice * min(bunCount / 2, cutletCount);
      bunCount -= 2 * min(bunCount / 2, cutletCount);
    } else {
      profit += cBurgerPrice * min(bunCount / 2, cutletCount);
      bunCount -= 2 * min(bunCount / 2, cutletCount);
      profit += hBurgerPrice * min(bunCount / 2, pettyCount);
      bunCount -= 2 * min(bunCount / 2, pettyCount);
    }

    cout << profit << endl;
  }

  return 0;
}