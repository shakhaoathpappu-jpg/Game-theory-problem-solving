#include<bits/stdc++.h>
using namespace std;
const int c=500005;

int n, q, t[c], pref[c], pref2[c];

void solve() 
{
    cin >> n >> q;
    for(int i=1; i<=n; i++) {
        int ert; cin >> ert;
        int cnt=0, s=ert%2, osszdb=0;
        while(ert>1) {
            cnt++;
            if (ert%2) osszdb++;
            ert/=2;
        }
        if(osszdb>1 || (osszdb==1 && !s)) {
            cnt++;
        }
        pref[i]=pref[i-1]+cnt;
        pref2[i]=pref2[i-1];
        if (s && osszdb==1) {
            pref2[i]++;
        }
    }
    while(q--) 
    {
        int l, r; cin >> l >> r;
        int alap=pref[r]-pref[l-1], spec=pref2[r]-pref2[l-1];
        //cout << alap << " " << spec << "\n";
        cout << alap+spec/2 << "\n";
    }

}
int main(){
    int w; cin >> w;
    while(w--) {
        solve();
    }
}
