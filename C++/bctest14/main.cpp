#include<iostream>
using namespace std;
int a[101];
int xuly(int n)
{
   int x;
   int maxx=-1;
   int minn=100;
   for (int i=0;i<n;i++)
   {
       cin>>x;
       if (x>maxx) maxx=x;
       if (x<minn) minn=x;
   }
   return (maxx-minn)*2;
   return 0;
}
int main()
{
    int t,p;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       cin>>p;
       a[i]=xuly(p);

    }
    for(int i=0;i<t;i++) cout<<a[i]<<endl;
    return 0;
}
