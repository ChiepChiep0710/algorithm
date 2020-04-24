#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n; cin>>n; int  a[100001]; long long sum[100001];
		for(int i=1;i<=n;i++){ cin>>a[i];}
		if(n>=3){
		sum[0]=0; sum[1]=a[1];sum[2]=a[2];
		for(int i=3;i<=n;i++) sum[i]=max(sum[i-2],sum[i-3]) +a[i];
		long long maxx=-1;
		for(int i=1;i<=n;i++) if (sum[i]>maxx) maxx=sum[i];
		cout<<maxx<<endl;}
		else
		{
		   long long maxx=-1;
		  for(int i=1;i<=n;i++) if (maxx<a[i])  maxx=a[i];
		  cout<<maxx<<endl;
		}
	}
}
		
	  
