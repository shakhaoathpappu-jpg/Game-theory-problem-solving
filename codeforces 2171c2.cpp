#include<bits/stdc++.h>
using namespace std;
const int c=500005;

int n, a[c], b[c], xo;
void solve() {
    xo=0;
    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> a[i];
        xo^=a[i];
    }
    for (int i=1; i<=n; i++) {
        cin >> b[i];
        xo^=b[i];
    }

    if (!xo) {
        cout << "Tie\n";
        return;
    }
    int msb=1;
    while (2*msb<=xo) {
        msb*=2;
    }
    for (int i=n; i>=1; i--) {
        int ert=(a[i]^b[i]);
        //cout << "fontos " << i << " " << ert << " " << lsb << "\n";
        if (ert & msb) {
            if (i%2) {
                cout << "Ajisai\n";
            } else {
                cout << "Mai\n";
            }
            return;
        }
    }
}
int main() {
	ios_base::sync_with_stdio(false);
    int w;
    cin >> w;
    while (w--) {
        solve();
    }
}
