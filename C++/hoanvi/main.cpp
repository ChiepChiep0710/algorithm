#include<iostream>
using namespace std;
int x[100000]; int n; bool c[100000];
int print_result()
{
    for(int i=1;i<=n;i++) { cout<<x[i] ;}
    cout<<endl ;
    return 0;
}
int tri(int i)
{
    for(int j=1;j<=n;j++)
        if (c[j])
    {

        x[i]=j;
        if (i==n) print_result();
        else
        {
            c[j]=false;
            tri(i+1);
            c[j]=true;
         }
    }
    return 0;
}
int main()
{

    cin>>n;
    for (int i=1;i<=n;i++) c[i]=true;
    tri(1);
    return 0;
}
