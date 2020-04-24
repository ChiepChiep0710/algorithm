#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x=a+b+c;
    int y=2*(a+b);
    int z=2*(b+c);
    int t=2*(c+a);
    cout<<min(x,min(y,min(z,t)));
    return 0;
}
