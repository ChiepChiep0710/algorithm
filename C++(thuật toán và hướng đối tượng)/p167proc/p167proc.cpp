#include <iostream>
#include <string.h>
using namespace std;
int a[100][100], d[20], kq[20],n,res=1000;
string s[100];
int dem(string x, string y)
{
	int count=0;
    int nx=x.size();
    int ny=y.size();
    for(int i=0;i<nx;i++) 
    {
    	for(int j=0;j<ny;j++)
    		if (x[i]==y[j]) count++;
    }
    return count;

}
int nhap()
{
	cin>>n;
	for(int i=0;i<n;i++) d[i]=0;
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				  a[i][j]=dem(s[i],s[j]);
	
	return 0;
}
int update(int x)
{
    
   if (res>x) res=x;
   return 0;

}
int dfs(int u,int k,int x)
{
  	if(k==n) update(x);

  	else
  	{
  	    for(int i=0;i<n;i++)
  	    	   if(d[i]==0&&(x+a[u][i]<res))
  	    	   {
  	    	   	d[i]=1;
  	    	   	dfs(i,k+1,x+a[u][i]);
  	    	   	d[i]=0;
  	    	   }
  	}
  	return 0;
}
int xuly()
{
	for(int i=0;i<n;i++)
	{
		d[i]=1;
		dfs(i,1,0);
		d[i]=0;
	}
	cout<<res;
    return 0;
}
int main()
{
	nhap();
	xuly();
	return 0;
}