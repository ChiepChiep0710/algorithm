#include <iostream>

using namespace std;

int main()
{
    int a,b,m[1000][1000];
     cin>>a>>b;
     for(int i=0;i<a;i++)
         for (int j=0;j<b;j++) cin>>m[i][j];

     for(int j=0;j<b;j++)
     {
         for(int i=0;i<a;i++) cout<<a[i][j]>>" ";
         cout<<endl;
     }

    return 0;
}
