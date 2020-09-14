
#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int i,k=1,n,ans;
	cin>>n;  int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i]; k=k*a[i];
	}

	for(i=0;i<n;i++)
	{
		ans=k;
		ans= ans/a[i];
		a[i]=ans;

	}
	for(i=0;i<n;i++)
	{ cout<<a[i]<<" ";}
}
