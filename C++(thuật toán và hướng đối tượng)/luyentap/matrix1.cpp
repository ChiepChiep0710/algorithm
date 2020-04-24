/*
    1  2  3  4  5        6  1  2  3  4
    6  7  8  9  10       11 12 7  8  5
    11 12 13 14 15  =>   16 17 18 9  10
    16 17 18 19 20       21 22 13 14 15 
    21 22 23 24 25       26 23 24 19 20
    26 27 28 29 30       27 28 29 30 25   */
#include<iostream>
using namespace std;
int a[100][100];
int xuly(int m, int n)
{
    int b[100][100];
   int  t=min(m/2+m%2,n/2+n%2);
   //cout<<t;
    for(int i=1;i<=t;i++)
    {
         for(int j=i+1;j<=m-i+1;j++) b[i][j]=a[i][j-1];
         for(int j=i+1;j<=n-i+1;j++) b[j][m-i+1]=a[j-1][m-i+1];
         for(int j=m-i;j>=i;j--) b[n-i+1][j]=a[n-i+1][j+1];
         for(int j=n-i;j>=i;j--) b[j][i]=a[j+1][i];
    }
    for(int j=1;j<=n;j++)
    {
       for(int k=1;k<=m;k++) cout<<b[j][k]<<" ";
       cout<<endl;
    }
}
int main()
{
    int m,n;
    cin>>m>>n;

    for(int i=1;i<=n;i++)
     for(int j=1;j<=m;j++) cin>>a[i][j];
     xuly(m,n);
     return 0;
}