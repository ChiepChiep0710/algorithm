#include <iostream>
using namespace std;
typedef struct
{
    int64_t x;
    int64_t y;
}toado;
bool cmp(toado a, toado b)
{
    if ((a.x!=b.x)&&(a.y!=b.y)) return true;
    else return false;
}





int main()
{
    bool b[3];
    toado a[3]; toado ans; toado d;
    int z;
        for (int i=0;i<3;i++) {cin>>a[i].x>>a[i].y; b[i]=true;}
    for(int i=0;i<3;i++)
        for (int j=i+1;j<3;j++)
    {
        if (cmp(a[i],a[j])) {b[i]=false; b[j]=false;  break;}
    }
    d.x=0; d.y=0;
    for (int i=0;i<3;i++)
        if (!(b[i]))
    {
        d.x=a[i].x+d.x;
        d.y= a[i].y+d.y;
    }
    for  (int i=0;i<3;i++) if (b[i]) z=i;
    ans.x=d.x-a[z].x;
    ans.y=d.y-a[z].y;
    cout<<ans.x<<" "<<ans.y;

    return 0;
}
