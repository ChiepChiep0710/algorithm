#include<stdio.h>
#include<math.h>
main(){
	int n;
	scanf("%d", &n);
	int ok=0;
	if(n<2) printf("0");
	else if(n>2)
	{

		for(int i=2; i<=sqrt(n); i++)
		{
          if(n%i==0) ok=1;

		}
	}
	if (ok==0) printf("1");
	else printf("0");
}
