#include <iostream>
#include<math.h>
using namespace std;
double kc(double x, double y)
{
    return sqrt(x*x+y*y);
}
int main()
{
    int t;
    cin>>t;
    int a=0,b=0;
    int ox,oy,ux,uy;
    while (t--)
    {
        cin>>ox>>oy>>ux>>uy;
        a=a+(kc(ox,oy)<=kc(ux,uy));
        b=b+(kc(ox,oy)>=kc(ux,uy));
    }
    if (a>b) cout<<"Oppa";
    else cout<<"Unnie";
    return 0;

}
