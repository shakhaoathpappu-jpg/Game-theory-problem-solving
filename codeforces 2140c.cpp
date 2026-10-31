#include<bits/stdc++.h>
using namespace std;
long long inf=2e9;

void solve() {
    int n;
    long long sum=0, ert=0, a=-inf, b=-inf, c=inf, d=inf;
    cin >> n;
    ert=(n-1)/2*2;
    for (int i=1; i<=n; i++) {
        long long x;
        cin >> x;
        sum+=(i%2 ? x : -x);
        x*=2;
        if (i%2==0) {
            a=max(a, x+i);
            b=max(b, x-i);
        } else {
            c=min(c, x+i);
            d=min(d, x-i);
        }
    }
    ert=max({ert, a-c, b-d});
    cout << sum+ert << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
    int w; cin >> w;
    while (w--) {
        solve();
    }
    return 0;
}
