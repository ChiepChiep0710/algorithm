#include<stdio.h>

main(){
	long long n,i;
	scanf("%lld", &n);
	i=2;
	while(n!=1){
		if(n%i==0){
		    printf("%lld", i);
		if(n/i!=1) printf(" x ");
		    n/=i;
        }
        else
            i++;

    }

}
