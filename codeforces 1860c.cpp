#include<bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
const int N = 300005;
int n, p[N];
pii bit[N];

void add(int x, pii val)
{
    for(int i = x; i <= n; i += i & -i) {
        bit[i].first += val.first;
        bit[i].second += val.second;
    }
}

pii get(int x)
{
    pii res = {0, 0};
    for(int i = x; i > 0; i -= i & -i) {
        res.first += bit[i].first;
        res.second += bit[i].second;
    }
    return res;
}

int main()
{
    int t; cin >> t;
    while(t--) {
        cin >> n;
        fill(bit, bit + n + 1, make_pair(0, 0));
        int ans = 0;
        for(int i = 0; i < n; i++) {
            cin >> p[i];
            pii got = get(p[i] - 1);
            int los = (got.first > 0 && got.second == 0);
            ans += los;
            add(p[i], {1, los});
        }
        cout << ans << endl;
    }
}