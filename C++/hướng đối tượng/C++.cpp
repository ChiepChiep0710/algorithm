#include<iostream>
using namespace std;
struct
{
    int  *heso;
    int   bac;
}dthuc;
int main()
{
    int y,x;
    cin>>x>>y;
    doicho(&x,&y);
    cout<<x<<" "<<y;
}