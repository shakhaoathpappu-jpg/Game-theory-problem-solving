#include<bits/stdc++.h>
using namespace std;

long long a[1000],b[1000],lim[1000];

int main()
{
	long long n,k,i,s=0; cin>>n>>k;
	for(i=0;i<n;i++)cin>>a[i];
	for(i=0;i<n;i++)
	{
		cin>>b[i];
		lim[i]=a[i]/b[i];
		s+=lim[i];
	}
	if(s<k)
	{
		for(i=0;i<n;i++)cout<<"0 ";
		cout<<'\n';
		return 0;
	}
	for(i=0;i<n;i++)
	{
		s-=lim[i];
		if(s>=k)cout<<"0 ";
		else
		{
			cout<<k-s<<' ';
			s=k;
		}
	}
	cout<<endl;
}