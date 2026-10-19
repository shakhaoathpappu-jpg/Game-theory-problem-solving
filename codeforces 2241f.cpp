#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        vector<int> f(n);
        for(int i = 0; i < n; i++) {
            f[i] = (s[i] == '1');
            if(i > 0) f[i] += f[i - 1];
        }
        auto get_sum = [&](int l, int r) -> int {
            if(l > r) return 0;
            return f[r] - (l > 0 ? f[l - 1] : 0);
        };
        int l = 0, r = n - 1;
        string ans = "Bob";
        while(l <= r) {
            if(s[r] == '1') r--;
            else if(s[l] == '0') l++;
            else {
                if(get_sum(l, r) % 2 == 1) {
                    ans = "Alice";
                    break;
                }
                else {
                    int nr = r;
                    while(nr >= l && s[nr] == '0') nr--;
                    nr++;
                    int c0 = r - nr + 1;
                    if(c0 % 2 == 1) {
                        ans = "Alice";
                        break;
                    }
                    else r = nr - 1;
                }
            }
        }
        cout << ans << endl;
    }
}