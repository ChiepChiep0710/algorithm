#include <iostream>
#include <cstdio>
#include <string>
#include <math.h>

using namespace std;

string a,b;

string sum(string a,string b)
{
    string ans="";
    while (a.length() < b.length()) a="0"+a;
    while (b.length() < a.length()) b="0"+b;
    int c=0;
    for (int i=a.length()-1;i>=0;i--)
    {
        int k=0;
        if (c>0) k=1;
        int t=(a[i]-48)+(b[i]-48);
        c=t/10;
        t=t%10+k;
        ans=char(t+48)+ans;
    }
    if (c>0) ans="1"+ans;
    return ans;
}
string sub(string a,string b)
{
    string ans="";
    int m=0;
    if (a.length() < b.length())
    {
        swap(a,b);
        m=1;
    }
    else if (a.length()==b.length())
    {
        for (int i=0;i<=a.length();i++)
        {
            if (a[i]<b[i])
             {
                 m=1;
                 swap(a,b);
                 break;
             }
        }
    }
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
string spmul(int i,string c)
{
    c="";
      int nho=0,k=0;
      for (int j=a.length()-1;j>=1;j--)
      {
          int s=0;
          if (nho>0) s=nho/10;
          int t=(a[j]-48)*(b[i]-48)+s;
          nho=t;
          k=nho/10;
          t=t%10;
          c=(char)(t+48)+c;
      }
      nho=(a[0]-48)*(b[i]-48)+k;
      while (nho>0)
      {
          c=(char)(nho%10+48)+c;
          nho=nho/10;
      }
     return c;
}
int main()
{
    int k=1;
    freopen("BIGNUM.inp","r",stdin);
    freopen("BIGNUM.out","w",stdout);
    cin>>a>>b;
    cout<<sum(a,b)<<endl;
   if (a==b) cout<<"0";
   else cout<<sub(a,b)<<endl;
    string ans="";
    if (a.length()<b.length()) swap(a,b);
    for (int i=b.length()-1;i>=0;i--)
    {
        string c;
        c=spmul(i,c);
        for (int i=1;i<=k;i++)
        {
            c=c+"0";
        }
        k++;
        ans=sum(ans,c);
    }
    ans.erase(ans.length()-1,1);
    cout<<ans;
}
