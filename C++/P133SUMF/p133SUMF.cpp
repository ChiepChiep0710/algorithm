#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int a[3];
int sapxep()
{
    int b;
    for(int i=0;i<3;i++)
     for(int j=0;j<3;j++)
    {
       if(a[i]<a[j])
       {
           b=a[j];
           a[j]=a[i];
           a[i]=b;

       }
    }
    return 0;
}
int main()
{
    for(int i=0;i<3;i++) cin>>a[i];
    sapxep();
    int t=a[2]-a[1]; int f=a[1]-a[0];
    if (t>f) cout<<a[1]+f;
    if (t<f) cout<<a[0]+t;
    if (t==f) cout<<a[2]+t;
    return 0;
}


