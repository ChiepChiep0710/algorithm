#include <iostream>
#include<string.h>
using namespace std;
string chuyenxau(int n)
{
    string s="";
    while(n>0)
    {
        int p=n%10;
         s=s+char(p+48);
         n=n/10;
    }
    string s1="";
    for(int i=s.size()-1;i>=0;i--) s1=s1+s[i];
    return s1;
}
string taom(int n)
{
    string s="";
    for(int i=1;i<=n;i++) s=s+chuyenxau(i);
    return s;
}
int main()
{
    cout << taom(1000000);
    return 0;
}
