#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        vector<int> deg(n + 1, 0);
        for(int i = 1; i < n; i++) {
            int u, v; cin >> u >> v;
            deg[u]++;
            deg[v]++;
        }
        if(deg[x] <= 1) cout << "Ayush" << endl;
        else {
            if(n % 2 == 1) cout << "Ashish" << endl;
            else cout << "Ayush" << endl;
        }
    }
}