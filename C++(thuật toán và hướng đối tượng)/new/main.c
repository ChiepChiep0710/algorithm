#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int sntg(int x)
{
    int tg=0;
    while(x>0)
        {
            int d=x%10;
            tg=d+tg;
            x=x/10;
        }
    return tg;
}

int main()
{
   int n,m;
   scanf("%d",&n);

   m=sntg(n);
   while(m>=10)
    {
        int k=m;
         m=sntg(k);
    }

    printf("%d",m);



return 0;
}
