#include<iostream>
using namespace std;
int x[100000];
int print_result()
{
    for(int i=1;i<=n;i++) cout<<x[i];
}
int try(int i);
{
    for(int j=0;j<=1;j++)
    {
        x[i]=j;
        if (i==n) print_result();
        else try(i+1);
    }
}
int main()
{
    int n;
    cin>>n;
    try(1);
    return 0;
}
