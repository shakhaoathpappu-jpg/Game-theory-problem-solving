#include<bits/stdc++.h>
using namespace std;

const int N = 200005;
int n, k;
pair<int, int> a[N];

int main() 
{
  int t; cin >> t;
  while (t--) {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i].first;
    for (int i = 1; i <= n; i++) {
      cin >> a[i].second;
      if (a[i].first > a[i].second) {
        swap(a[i].first, a[i].second);
      }
    }
    sort(a + 1, a + n + 1);
    long long ans = 0;
    int mn = 1 << 30;
    for (int i = 1; i <= n; i++) {
      ans += a[i].second - a[i].first;
      if (i < n) {
        if (a[i].second >= a[i + 1].first) {
          mn = 0;
        } else {
          mn = min(mn, a[i + 1].first - a[i].second);
        }
      }
    }
    cout << ans + 2 * mn << endl;
  }
}