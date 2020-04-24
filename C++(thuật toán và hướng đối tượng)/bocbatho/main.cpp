#include<stdio.h>
#include<math.h>

int main(){
	int m, n, dem=0;
	scanf("%d%d", &m, &n);


	  for(int i=m; i<=n; i++)
	  {
		int x=sqrt(i);
		if(x*x==i) dem++;
       }


   printf("%d \n",dem);


	  for(int i=m; i<=n; i++)
	  {
		int x=sqrt(i);
		if(x*x==i) printf("%d ",i);

	   }

   	return 0;
}
