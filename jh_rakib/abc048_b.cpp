#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a, b, x;
  scanf("%lld%lld%lld", &a, &b, &x);

  long long ans = 0;
  if (a % x == 0) ans++;
  cout <<"++ " << ans << endl;
  ans += b / x;
  cout << "+= " << b / x << endl;
  ans -= a / x;
  cout << "-= " << a / x << endl;

  printf("%lld\n", ans);
  return 0;
}