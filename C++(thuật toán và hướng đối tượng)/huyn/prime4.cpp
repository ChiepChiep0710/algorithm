#include<bits/stdc++.h>
using namespace std;
 
int a[10001];
 
void sang(int a[],int n)
{
	for (int i=0;i<=n;i++) a[i]=i;
	a[1]=1;
	for (int i=2;i<=sqrt(n);i++)
		if (a[i]==i)
		{
			for (int j=i*i;j<=n;j+=i)
				if (a[j]==j) a[j]=i;
		}
}
 
void solve(int n)
{
	for (int i=1;i<=n;i++) cout<<a[i]<<" ";
	cout<<"\n";
}
 
main()
{
	int t,n;
	sang(a,10000);
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>n;
		solve(n);
	}
}
