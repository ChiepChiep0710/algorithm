#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int a[102][102];
 int maxx(int x , int y , int z )
{
    return max(x,max(y,z));
}
int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
       for(int j=1;j<=n;j++) cin>>a[i][j];
    int f[102][102];
   for(int i=1;i<=m;i++) f[i][1]=a[i][1];
   for(int i=0;i<=n;i++) f[0][i]=-99999999;
   for(int i=0;i<=n;i++) f[m+1][i]=-99999999;
    for(int j=2;j<=n;j++)
       for(int i=1;i<=m;i++)
       {
           f[i][j]=maxx(f[i-1][j-1],f[i][j-1],f[i+1][j-1])+a[i][j];
       }
    int res=-100000;
  /* for(int i=1;i<=m;i++)
    {
       for(int j=1;j<=n;j++) cout<<f[i][j]<<" "; cout<<endl;
    }*/
    for(int i=1;i<=m;i++)
    {
         if(f[i][n]>res) res=f[i][n];
    }
    cout<<res;




    return 0;
}
