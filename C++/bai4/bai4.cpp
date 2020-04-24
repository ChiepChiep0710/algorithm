#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float s=0;
    for (int i=1; i<=n; i++) s=s+(float)1/i;
   int s1 =s*10*10*10*10*10;
    int p=(int)s1%10;
    s1=s1/10;
    if (p>=5) s= s1+1;
    else s=s1;;
    cout<<s1/pow(10,4);
    return 0;

}
