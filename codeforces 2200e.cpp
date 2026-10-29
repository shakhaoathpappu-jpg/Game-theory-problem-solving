#include<bits/stdc++.h>
using namespace std;

int get_p(int x) 
{
    if (x == 1) return 1;
    int p = -1;
    for(int d = 2; d * d <= x; ++d) {
        if(x % d == 0) {
            p = d;
            while (x % d == 0) x /= d;
            break; 
        }
    }
    if(x > 1 && p != -1) return -1;
    return p == -1 ? x : p; 
}

void solve() 
{
    int n; cin >> n;
    vector<int> a(n);
    bool sorted_a = true;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(i > 0 && a[i - 1] > a[i]) sorted_a = false;
    }
    if(sorted_a) {
        cout << "Bob\n";
        return;
    }
    vector<int> p(n);
    bool sorted_p = true;
    for(int i = 0; i < n; i++) {
        p[i] = get_p(a[i]);
        if(p[i] == -1) {
            cout << "Alice\n";
            return;
        }
        if (i > 0 && p[i - 1] > p[i]) sorted_p = false;
    }
    if(sorted_p) cout << "Bob\n";
    else cout << "Alice\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}