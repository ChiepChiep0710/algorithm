#include<iostream>
using namespace std;
int tmp=0,res=100000,n;
int gv[21],cay[11],chua[11];
int update(int a,int b)
{
    
    int t=abs(a-b);
    if(res>t) res=t;
    return 0;
}
int fun(int k)
{
    for(int i=0;i<=1;i++)
    {
        gv[k]=i;
        if(k==n)
        {
            int a1=1,b1=0, kk=0;
          for(int j=1;j<=n;j++) 
          if(gv[j]==1)
          {
              a1=a1*chua[j];
              b1=b1+cay[j];
              kk=1;
             
          }
         if(kk==1) update(a1,b1);
        }
        else fun(k+1);
    }
    return 0;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>chua[i]>>cay[i];
    }
    fun(1);
    cout<<res;
    return 0;
}

