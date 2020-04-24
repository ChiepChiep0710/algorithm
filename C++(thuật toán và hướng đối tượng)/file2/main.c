#include <stdio.h>
#include <stdlib.h>
#define flush while((getchar()) != '\n')
typedef struct svien
{
  char ten[50];
  int msv;
  float p[3];
} sv;
sv ss[10000];
int dem()
{
    FILE *fp=fopen("B18DCAT087.bin","rb");
    int c=0, temp=fgetc(fp);
    while (temp=fgetc(fp)!=EOF)
    {
        c++;
        fseek(fp,sizeof(sv)*c,SEEK_SET);

    }
    fclose(fp);
    return c;

}
int them(int n)
{
    FILE *fp=fopen("B18DCAT087.bin","ab");
    int c=dem();
    for(int i=1;i<=n;i++)
    {
        sv s;
        s.msv=i+c;
     flush;
     gets(s.ten);
        for(int j=0;j<3;j++) scanf("%f",&s.p[j]);
        fseek(fp,0,SEEK_END);
        fwrite(&s,sizeof(s),1,fp);
    }
    fclose(fp);
    return 0;
}
int sua(int n)
{
     FILE *fp=fopen("B18DCAT087.bin","rb+");
     fseek(fp,sizeof(sv)*(n-1),SEEK_SET);
     sv s;
     s.msv=n;
     flush;
     gets(s.ten);
     for(int i=0;i<3;i++)   scanf("%f",&s.p[i]);
     fwrite(&s,sizeof(sv),1,fp);
     fclose(fp);
     return 0;

}
float sums(int n)
{
    float t=0;
    for(int i=0;i<3;i++) t=t+ss[n].p[i];
    return t;
}
int sx()
{
    int n=dem();
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        if (sums(i)>sums(j))
    {
        sv s=ss[i];
        ss[i]=ss[j];
        ss[j]=s;
    }
    return 0;

}
int in()
{
    FILE *fp=fopen("B18DCAT087.bin","rb");
    int n=dem();
    for(int i=0;i<n;i++)
    {
        fseek(fp,sizeof(sv)*i,SEEK_SET);
        fread(&ss[i],sizeof(sv),1,fp);
    }
    sx();
    for(int i=0;i<n;i++)
    {
        printf("%d %s ",ss[i].msv,ss[i].ten);
        for(int j=0;j<3;j++) printf("%.1f ",ss[i].p[j]);
        printf("\n");
    }
    fclose(fp);
    return 0;
}

int main()
{
//  FILE *fp = fopen("B18DCAT087.bin","wb");
    int n,m;
    scanf("%d",&n);
    switch(n){
case 1:
       scanf("%d",&m);
       them(m);
       printf("%d",m); break;
case 2:
        scanf("%d",&m);
        sua(m);
        printf("%d",m);
        break;
case 3:
        in();
        break;
}
// fclose(fp);
return 0;
}



