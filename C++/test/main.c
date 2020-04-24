#include<stdio.h>
#include<math.h>
double duong(int a[], int n){
	int t=0, dem1=0;
		for(int i=0; i<n; i++){
		 if(a[i]>0){
				t+=a[i];
				dem1++;
			}
		}
	double h=(double)t/dem1;
	return h;
}
double am(int a[], int n){
	int s=0, dem=0;
		for(int i=0; i<n; i++){
			if(a[i]<0){
				s+=a[i];
				dem++;
			}
		}
		double h=(double)s/dem;
		return h;
}
int snt(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

main(){
	int n;
	scanf("%d",&n);
	int a[n];

	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int  k=0, d=0, q=0;
	int b[10000], c[10000];
	for(int i=0; i<n; i++){
		if(a[i]>0){
			b[k]=a[i];
			k++;
		}
		if(a[i]<0){
			c[d]=a[i];
			d++;
		}
		if(a[i]==0){
			q++;
		}
	}
	if(q==n){
		printf("Khong co so am ");
		printf("Khong co so duong");
	}
	else if(k!=0 && d==0){
		printf("Khong co so am ");
		printf("%.2lf", duong(b,k));
	}
	else if(d!=0 && k==0)
    {


    printf(" Khong co so duong ");
    double x=am(c,d);
    printf("%.2lf", x);


	}
	else{

		 double x=am(c,d);
          printf("%.2lf", x);
		printf(" %.2lf", duong(b,k));
	}
	printf("\n");
	for(int i=0; i<n; i++){

		if(a[i]>1 && snt(a[i])==1)
		printf("%d ",a[i] );
	}
}
