#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int c1 = 0, c2 = 0;
        for(int i = 1; i <= n; i++) {
            int x; cin >> x;
            if(x == 1) c1++;
            else c2++;
        }
        if(c2 == 0) {
            if(c1 % 2 == 1) cout << "Alice" << endl;
            else cout << "Bob" << endl;
        }
        else {
            if(c1 % 2 == 1) cout << "Bob" << endl;
            else cout << "Alice" << endl;
        }
    }
}