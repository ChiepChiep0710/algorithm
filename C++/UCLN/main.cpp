#include<iostream>
using namespace std;
int gcd(int64_t x,int64_t y)
{
   if (y==0) return x;
   return gcd(y,x%y);
}
int main()
{
    int64_t a,b;
    int n=0;
    int64_t a1[10000],b1[100000];
    cin>>a>>b;
    while  (!((a==0)&&(b==0)))
    {
        n++;
        a1[n]=a; b1[n]=b;
        cin>>a>>b;

    }
    for (int i=1;i<=n;i++)
    {
        int64_t uc=gcd(a1[i],b1[i]);
        cout<<uc<<" ";
        int64_t bc=a1[i]*b1[i];
        cout<<bc/uc<<endl;
    }
}

