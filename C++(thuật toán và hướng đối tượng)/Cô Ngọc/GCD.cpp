#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
string s1,s2;
int docfile()
{
    ifstream fi("inputgcd.txt",ios::in);
    if(!fi)
    {
        cout<<"error";
        return -1;
    }
    fi>>s1>>s2;
    return 0;

}
int ghifile(string s)
{
    ofstream fo("outputgcd.txt",ios::out);
    fo<<s;
    return 0;
}
int comparee(string a, string b)
{
if (a.length() < b.length()) return -1;
if(a.length()>b.length()) return 1;
else if (a.length()==b.length())
    {
        for (int i=0;i<=a.length();i++)
            {
                if (a[i]<b[i]) return -1;
                if(a[i]>b[i]) return 1;
            }

    }
return 0;
}
string sub(string a,string b)
{
    string ans="";
    int m=0;
    if (comparee(a,b)==-1) {swap(a,b); m=1;}
    while (a.length()<b.length()) a="0"+a;
    while (b.length()<a.length()) b="0"+b;
    int c=0,k=0;
    for (int i=a.length()-1;i>=0;i--)
    {
        if (c>0) k=1;
        else k=0;
        int t=(a[i]-48)-(b[i]-48)-k;
        if (t<0)
        {
            t=(a[i]-48)-(b[i]-48)+10-k;
            c=1;
        }
        else if (t>0)
        {
            t=(a[i]-48)-(b[i]-48)-k;
            c=0;
        }
        ans=(char)(t+48)+ans;
    }
    int d=0;
    for (int i=0;i<=ans.length()-1;i++)
    {
        if (ans[i]=='0') d++;
        else break;
    }
    ans.erase(0,d);
    if (m==1) ans="-"+ans;
    return ans;
}
string gcd(string a, string b)
{
    while(comparee(a,b)!=0)
    {
        if (comparee(a,b)==1) a=sub(a,b);
        else b=sub(b,a);
    }
    return a;
}
int main()
{
   cin>>s1>>s2;
   cout<<endl;
   cout<<gcd(s1,s2);
   //cout<<comparee("11","11");
   return 0;
}
