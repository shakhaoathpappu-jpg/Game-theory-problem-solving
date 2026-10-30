#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n, pri[100010];
int cnt[100010], tot;

int main()
{
    cin >> n;
    for(ll i = 2; i * i <= n; i++) {
        if(n % i) continue;
        pri[++tot] = i;
        while(n % i == 0) {
            cnt[tot]++;
            n /= i;
        }
    }
    if(n > 1) {
        pri[++tot] = n;
        cnt[tot] = 1;
    }
    if((tot == 1 && cnt[1] == 2) || (tot == 2 && cnt[1] + cnt[2] == 2)) {
        cout << 2 << endl;
    }
    else {
        cout << 1 << endl;
        if(tot == 0) cout << 0 << endl;
        else if(tot == 1 && cnt[1] == 1) cout << 0 << endl;
        else {
            ll ans = 1;
            if(cnt[1] >= 2) ans = pri[1] * pri[1];
            else ans = pri[1] * pri[2];
            cout << ans << endl;
        }
    }
}