

#include<bits/stdc++.h>
using namespace std;
int main()
{
	unordered_set<int> s;
	int i,k,f,n,rem;
	cin>>n>>k;  int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	f=0;
	for(i=0;i<n;i++)
	{
		rem=k-a[i];
		if(s.find(rem)!=s.end())
			{   cout<<"True"<<endl;  f=1;
				break;
			}
			s.insert(a[i]);

	}
	if(f==0)
		cout<<"False"<<endl;
}
