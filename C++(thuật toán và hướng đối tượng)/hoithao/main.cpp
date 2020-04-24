#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int m=0,f=0;
    for(int i=0;i<s.size();i++)
    {
        if (s[i]=='A') m++;
        else f++;
    }
    if (m==f) cout<<"YES";
    else cout<<"NO";
    return 0;
}
