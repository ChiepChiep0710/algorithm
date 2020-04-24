#include<stdio.h>
#include<math.h>

void lamtrondb(double x)
{
	  double k=x*pow(10,9+1);

		long  m=(long )k%10;
		if (m>=5)
		{
			k=(long)k/10+1;
			double x1=k/(pow(10,9));
			printf("%lf \n",x1);
		}
		else
		{
			k=k/10;
			double x1=k/(pow(10,9));
			printf("%lf \n",x1);
		}
}
void lamtronfl(float x)
{
	  float k=x*pow(10,3+1);

		long  m=(long )k%10;
		if (m>=5)
		{
			k=(long )k/10+1;
			float x1=k/(pow(10,3));
			printf("%lf \n",x1);
		}
		else
		{
			k=k/10;
			double x1=k/(pow(10,3));
			printf("%lf \n",x1);
		}
}
int main()
{
    int a; long  b; char c; float d; double e;
    scanf("%d",&a);
    scanf("%ld",&b);
    scanf("%c",&c);
    scanf("%f",&d);
    scanf("%lf",&e);
    printf("%d \n",a);
    printf("%ld \n",b);
    printf("%c \n",c);
    lamtronfl(d);
    lamtrondb(e);

}
