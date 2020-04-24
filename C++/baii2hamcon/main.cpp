#include <iostream>
#include<math.h>

using namespace std;
int snt(int64_t i)
{
    if (i<2) return 0;
    else if (i>2)
    { if (i%2==0) return 0;

    for (int j=3; j<=sqrt((double)i); j++)
    {
        if (i%j==0) return 0;
    }

    }
    return 1;

}
int kiemtratang(int i)
{
  int p=i;
  int top=0; int a[100000];
  while(p>0)
  {
      int r=p%10;
      top++;
      a[top]=r;
      p=p/10;
    }
    for(int i=1;i<=top-1;i++) if (a[i]>a[i+1]) return 0;
    return 1;
}
int ktras(int i)
{  int s=0;
    while(i>0)
    {
        int r=i%10;
        s=s+r;
        i=i/10;
    }
    return snt(s);
}

int main()
{
    for(int i=1000000;i<=9999999;i++)
        if(snt(i)&&ktras(i)&&kiemtratang(i)) cout<<i<<" ";
    return 0;
}
