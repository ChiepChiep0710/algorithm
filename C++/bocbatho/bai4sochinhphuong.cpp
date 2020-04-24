#include<stdio.h>
#include<math.h>

int main(){
	int m, n, x, dem=0;
	scanf("%d%d", &m, &n);
	for(int j=m; j<=n; j++){
	
	  for(int i=m; i<=n; i++){
		x=sqrt(i);
		if(x*x==i) printf("%d ", i);
		dem++;
	}
	printf("\n%d", dem);
}
	return 0;
}
