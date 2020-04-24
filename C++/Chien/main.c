#include <stdio.h>

int gt(int n) {
   int f;
   for(f=1;n>1;n--) f*= n;
    return f;
}

int cal(int n,int r) {
   return gt(n)/(gt(n-r)*gt(r));
}

int main() {
   int n, i, j;
   scanf("%d",&n);
   for(i = 0; i <= n; i++) {
      for(j = 1; j <= n-i; j++)printf("*");

      for(j = 0; j <= i; j++)
         printf("%d ", cal(i, j));

      printf("\n");
   }
   return 0;
}
