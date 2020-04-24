#include<iostream>
#include <string.h>
using namespace std;
int main()
{
    string s="";
    for(int i=0;i<22;i++)
    {
        int x; char t= 'a'-1;
        cin>>x;
        char tt=t+x;
        s=s+tt;
    }
    cout<<endl;
    cout<<s;
    return 0;
}