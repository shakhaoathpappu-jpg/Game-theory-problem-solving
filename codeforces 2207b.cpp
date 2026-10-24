#include<bits/stdc++.h>
using namespace std;
long long a[200000],b[200000];

int main()
{
	int T;
	long long n,m,t,i,j,l,r,mid,s;
	for(cin>>T;T>0;T--)
	{
		cin>>n>>m>>t;
		for(i=0;i<n;i++)cin>>a[i];
		for(i=0;i<m;i++)b[i]=0;
		j=0;
		for(i=1;i<=t;i++)
		{
			sort(b,b+m);
			b[max(0LL,m-1-(n-j))]++;
			if(j<n&&i==a[j])
			{
				sort(b,b+m);
				b[m-1]=0;
				j++;
			}
			sort(b,b+m);
		}
		sort(b,b+m);
		cout<<b[m-1]<<endl;
	}
}