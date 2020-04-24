#include <iostream>
#include<math.h>
using namespace std;
int snt[100000],sntt[100000],top=0;
int a[101][101];
void sangnt()
{
    long i,j;
    for (i=1; i<=100000; i++)
        snt[i]=1;
    snt[1]=0;
    i=2;
    while (i<=sqrt(100000))
    {
        while (snt[i]==0) i++;
        for (j=2; j<=100000/i; j++)
            snt[i*j]=0;
        i++;
    }
}
int sinhmang(int n)
{
    top=0;
    for(int i=2;i<=1000000;i++)
        if (snt[i])
    {
        top++;
        sntt[top]=i;
        if (top==n*n) return 0;
    }
     return 0;
}


int xuly(int n)
{

    int l=1,r=n,u=1,d=n;
    int dem=0;
    do
    {
        for(int i=l;i<=r;i++)
        {
            dem++;
            a[u][i]=sntt[dem];
        }
        u++;
        for(int i=u;i<=d;i++)
        {
            dem++;
            a[i][r]=sntt[dem];
        }
        r--;
        for(int i=r;i>=l;i--)
        {
            dem++;
            a[d][i]=sntt[dem];
        }
        d--;
        for (int i=d;i>=u;i--)
        {
            dem++;
            a[i][l]=sntt[dem];
        }
        l++;


    }
    while(dem<n*n);
    return 0;
}
int main()
{

    int t;
    sangnt();
    cin>>t;
     for(int k=1;k<=t;k++)
     {
         int n;
         cin>>n;
         sinhmang(n);
         xuly(n);
         cout<<"Test "<<k<<":"<<endl;
         for(int i=1;i<=n;i++)
         {
             for(int j=1;j<=n;j++) cout<<a[i][j]<<" ";
             cout<<endl;
         }


     }
    return 0;
}
