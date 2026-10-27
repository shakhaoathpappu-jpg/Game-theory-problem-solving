#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<ll> a(n), b(n);
        set<pair<ll, int>> s;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        for(int i = 0; i < n; i++) {
            s.insert({a[i] + b[i], i});
        }
        ll ans = 0;
        for(int i = 0; i < n; i++) {
            auto [sum, pos] = *s.rbegin();
            s.erase(prev(s.end()));

            if(i % 2 == 1) ans -= b[pos] - 1;
            else ans += a[pos] - 1;
        }
        cout << ans << endl;
    }
}