#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n; int min1=100000000;
    for(int i=0; i<=n; i++)
        for (int j=0; j<=n; j++)
        {
            if ((5*i+3*j==n)&&(i+j<min1)) min1=i+j;
        }
   if (min1!=100000000) cout<<min1;
   else cout<<"impossible";
    return 0;
}
