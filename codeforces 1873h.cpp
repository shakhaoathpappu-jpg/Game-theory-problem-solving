#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> vis1,vis2;
vector<vector<int>> arr;

bool ok;
void dfs(int x,int y){

	for(auto v:arr[x]){
		if(vis1[v]&&v!=y&&vis1[v]<vis2[v]) ok=true;
		if(vis1[v]) continue;
		vis1[v]=vis1[x]+1;
		dfs(v,x);
	}

}

void solve()
{
    int n,a,b; cin >> n >> a >> b;
    vis1.clear();
    vis1.resize(n);
    vis2.clear();
    vis2.resize(n);
    arr.clear();
    arr.resize(n);
    a--;b--;
    for(int i=0; i < n;i++){
        int l,r; cin >> l >> r;
        l--;r--;
        arr[l].push_back(r);
        arr[r].push_back(l);
    }
    ok=false;
    queue<int> q;
    vis2[a]=1;
    q.push(a);
    while (!q.empty())
    {
        int temp=q.front();
        q.pop();

        for(int c:arr[temp]){
            if(vis2[c]) continue;
            q.push(c);
            vis2[c]=vis2[temp]+1;
        }
    }
    vis1[b]=true;
    dfs(b,-1);
    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(); 
    cout.tie();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}