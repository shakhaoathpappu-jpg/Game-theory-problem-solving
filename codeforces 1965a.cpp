#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n + 2, 0);
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            if(x <= n) a[x]++;
        }
        int cnt = 0;
        for(int i = 1; i <= n; i++) {
            cnt += a[i];
            if(a[i] == 0 || cnt == n) {
                if(i % 2 == 1) cout << "Alice" << endl;
                else cout << "Bob" << endl;
                break;
            }
        }
    }
}