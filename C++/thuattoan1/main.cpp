/*Bài 1: để giải mã dùng binary tree from code table
Đọc từng bit của bảng mã đọc 0: rẽ trái, 1:rẽ phải, lá thì xuất sau đó về gốc*/



#include <iostream>
#include<vector>
#include<cstdio>
#include<windows.h>

using namespace std;

int main()
{    freopen("thuattoan1.inp","r",stdin);
    freopen("thuattoan.out","w",stdout);
    char a[1024];
    vector <string> b;
    cin<<n;
    memset(a, '0', sizeof(a))
    for (int i=1;i<=n;i++)
    {
        string s; char ch;
        cin<<ch<<s;
        m=1;
        for(int j=0;j<s.size();j++)
        {
            if (s[j]=='0') m=m*2;
            else m=m*2+1;
        }
        a[m]=ch;

    }
    string s1;
    cin>>s1;
    m=1;
    for (int i=0;i<s1.size();i++)
    {
        if (s[i]=='0') m=2*m;
        else m=2*m+1;
        if (a[m]!='0') {cout<<a[m]  ; m=1;}
    }
    return 0;



}
