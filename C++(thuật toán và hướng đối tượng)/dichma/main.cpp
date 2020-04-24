#include <iostream>
#include<string.h>
using namespace std;
char doichuso(char c, int i)
{
    if (i>10) i=i%10;
    char tmp;
    if (i>'9'-c) tmp=47+(i-('9'-c));
    else tmp=c+i;
    return tmp;
}
char doichuthuong(char c, int i)
{
    if (i>26) i=i%26;
    char tmp;
    if (i>'z'-c) tmp=96+(i-('z'-c));
    else  tmp=c+i;
    return tmp;
}
char doichuhoa(char c, int i)
{
    if (i>26) i=i%26;
    char tmp;
    if (i>'Z'-c) tmp=64+(i-('Z'-c));
    else  tmp=c+i;
    return tmp;
}
int main()
{
    string s,res="";
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if (s[i]>='a'&&s[i]<='z') res=res+doichuthuong(s[i],i);
         else if (s[i]>='0'&&s[i]<='9') res=res+doichuso(s[i],i);
        else   if (s[i]>='A'&&s[i]<='Z') res=res+doichuhoa(s[i],i);
        else res=res+s[i];

    }
    cout<<res;
    return 0;
}

