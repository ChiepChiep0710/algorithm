#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    string s;

    getline(cin,s);
    while (s!="#")
    {
        int n=s.size();
        int a[1000];
         for(int i=0;i<1000;i++) a[i]=0;
        for(int i=0;i<n;i++)
        {
            a[s[i]]++;
        }
        //cout <<n;
        if (a['A']>(n/2)) cout<<"need quorum";
        else
        {
            if (a['Y']>a['N']) cout<<"yes";
            if (a['Y']<a['N']) cout<<"no";
            if (a['Y']==a['N']) cout<<"tie";
        }
        getline(cin,s);

    }
    return 0;
}
