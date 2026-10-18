#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n, t; cin >> n >> t;
    vector<vector<int>> adj(n);
    for(int i = 1; i < n; i++) {
        int u, v; cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> match(n, -1);
    auto dfs = [&](auto &&self, int x, int p) -> void {
        for(auto y : adj[x]) {
            if(y == p) continue;
            self(self, y, x);
            if(match[x] == -1 && match[y] == -1) {
                match[x] = y;
                match[y] = x;
            }
        }
    };
    dfs(dfs, 0, -1);
    queue<int> q;
    vector<int> vis(n, 0);
    for(int i = 0; i < n; i++) {
        if(match[i] == -1) {
            vis[i] = 1;
            q.push(i);
        }
    }
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        for(auto y : adj[x]) {
            if(match[y] != -1 && !vis[match[y]]) {
                vis[match[y]] = 1;
                q.push(match[y]);
            }
        }
    }
    while(t--) {
        int x; cin >> x;
        x--;
        if(vis[x]) cout << "Hermione" << endl;
        else cout << "Ron" << endl;
    }
}