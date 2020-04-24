#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int tmp;
    for(int i=0;i<n-1;i++)
    {
        int minn=i;
        for(int j=i+1;j<n;j++)
            if(a[minn]>a[j]) minn=j;
        if (minn!=i)
        {
            tmp=a[minn];
            a[minn]=a[i];
            a[i]=tmp;
        }
        for(int j=0;j<n;j++) printf("%d ",a[j]);
        printf("\n");
    }
    return 0;
}
