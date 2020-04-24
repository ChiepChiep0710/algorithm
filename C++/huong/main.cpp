#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

const int maxx=260;

string a,b;

int findchar(int i,int j)
{
    int m=-1;
    for (int q=i+1;q<=a.length()-1;q++)
    {
        if (a[q]==b[j] || a[q]==b[j]-32 || a[q]==b[j]+32)
        {
            m=q;
            break;
        }
    }
    return m;
}

int kiemtra(int i,int j)
{
    int m=0;
    int x=findchar(i,j);
    if ((x-1)==i) m=0;
    else
    {
        for (int k=i+1;k<=x-1;k++)
        {
            if (a[k]>='A' && a[k]<='Z')
            {
                m=1;
                break;
            }
        }
    }
    return m;
}

int check(string a,string b)
{
    int k=0;
    if (a.length()<b.length()) swap(a,b);
    if (a==b) return 1;
    else if (findchar(-1,0)>=a.length()-b.length()+1) return 0;
    else
    {
        for (int i=findchar(-1,0);i<=a.length()-b.length();i++)
        {
            int nho=i;
            int j=1;
            while (j<b.length())
            {
                if (findchar(nho,j)>=0 && kiemtra(nho,j)==0)
                 {
                        nho=findchar(nho,j);
                        j++;
                 }
                else break;
            }
            cout<<j<<" ";
          /*  if (j==b.length())
            {
                return 1;
                break;
            } */
        }
    }
    return 0;
}

int main()
{
    //freopen("biendoixau.inp","r",stdin);
    //freopen("biendoixau.out","w",stdout);
    cin>>a>>b;
    if (check(a,b)==1) cout<<"YES";
    else cout<<"NO";
}
