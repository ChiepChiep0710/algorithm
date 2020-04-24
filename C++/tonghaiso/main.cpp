#include <iostream>

using namespace std;

int main()
{
    int n,k,d=0,t=0;
    int s[10000];
    cin>>n>>k;
     for(int i=1;i<=n;i++) cin>>s[i];
     for(int i=1;i<=n;i++) {
            if(s[i]==1) d++;
            if(s[i]==-1) t++;
     }
     int maxs=0,res=0;
     for(int b=0;b<k;b++)
     {
         int dd=d,tt=t;
        for(int i=1;i<=n;i++)
            if (i%k==b)
     {
         if (s[i]==1) dd--;
         else tt--;
     }
     maxs=abs(tt-dd);
     if(maxs>res) res=maxs;
     }
     cout<<res;

     return 0;
}
