#include<bits/stdc++.h>
using namespace std;

using i64 = long long;

int main() 
{
    auto solve = [&]() {
        int n; cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        vector<int> o(n);
        iota(o.begin(), o.end(), 0);
        sort(o.begin(), o.end(), [&](int i, int j) { return a[i] + b[i] > a[j] + b[j]; });
        i64 ans = 0;
        for (int i = 0; i < n; i++) {
            if(i % 2 == 0) {
                ans += a[o[i]] - 1;
            } else ans -= b[o[i]] - 1;
        }
        cout << ans << '\n';
    };
    int t; cin >> t;
    while (t--) {
        solve();
    }
}

