#include<iostream>
using namespace std;
int x[100000]; int n;
int print_result()
{
    for(int i=1;i<=n;i++) { cout<<x[i] ;}
    cout<<endl ;
    return 0;
}
int tri(int i)
{
    for(int j=0;j<=1;j++)
    {
        x[i]=j;
        if (i==n) print_result();
        else tri(i+1);
    }
    return 0;
}
int main()
{

    cin>>n;
    tri(1);
    return 0;
}
