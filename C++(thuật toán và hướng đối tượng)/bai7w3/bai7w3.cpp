#include<iostream>
#include<math.h>
using namespace std;

int ktra(int a)
{
    int kq=0;
    while (a)
    {
     kq=kq*10+a%10;
     a=a/10;
    }
    return kq;
}
int main()
{
    int n;
    cin>>n;
    if (n==ktra(n)) cout<<"yes";
    else cout<<"no";
}
