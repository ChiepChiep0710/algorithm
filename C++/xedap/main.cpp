#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
    string a;
    cin >> a;
    int n=a.length();
    int64_t k,m=0,s=0,b;
    for(int i=n-1; i>=0; i--)
    {
        b= (int) a[i]-48;
        k= pow(2,m) * b;
        s+=k;
        m++;
    }

    int c[10000],t=0,h;
    while(s>=8)
    {
        h=s%8;
        c[t]=h;
        t++;
        s/=8;
    }
    c[t]=s;
    for(int i=t; i>=0; i--) cout <<c[i];

}
