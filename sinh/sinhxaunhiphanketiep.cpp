#include<iostream>
#include<string.h>
using namespace std;
void nextstring(string s)
{
    int i=s.size()-1;
    while(i>=0&&s[i]!='0') {s[i]='0';i--;}
    if(i>=0) s[i]='1';
    cout<<s<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        nextstring(s);
    }
    return 0;
}