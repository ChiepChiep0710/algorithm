#include <iostream>
#include<math.h>
#include<string.h>

using namespace std;
int cho1[25],cho2[25];

int main()
{
    int a,b,c,d,p,m,g;
    for(int i=0;i<25;i++) {cho1[i]=0; cho2[i]=0;}
    int time1=0,time2=0;
     while (time1<24)
    {
        time1=time1+a;
        if (time1>24) break;
        int t=time1+b; t=min(24,t);
        for (int i=time1;i<t;i++) cho1[i]=1;
    }

    while (time2<24)
    {
        time2=time2+c;
        if (time1>24) break;
        int t=time2+d; t=min(24,t)
        for (int i=time2;i<t;i++) cho2[i]=1;

    }
    if ((cho1[p]=0)&&(cho)
    return 0;
}
