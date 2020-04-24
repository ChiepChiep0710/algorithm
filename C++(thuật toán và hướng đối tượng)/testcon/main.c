#include <stdio.h>
#include <stdlib.h>


int main()
{
   long long n;
   scanf("%lld",&n);
   int i=1; long long s=1;
    while(i<=n)
    {
        s=(s*2)%1000000009;
        i++;
    }

   printf("%lld",s);

}
