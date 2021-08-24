#include <bits/stdc++.h>
using namespace std;

int p, q, r, s, t, u;

double eq(double x) {
  return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}

double result() {
  double lo = 0, hi = 1;

  while (lo + 0.0000001 < hi) {
    double x = (lo + hi) / 2;

    if (eq(lo) * eq(x) <= 0) {
      hi = x;
    } else {
      lo = x;
    }
  }

  return (lo + hi) / 2 ;
}

int main() {
  while (cin >> p >> q >> r >> s >> t >> u) {
    if (eq(0) * eq(1) > 0) {
      cout << "No solution" << endl;
    } else {
      cout << fixed << setprecision(4) << result() << endl;
    }
  }

  return 0;
}