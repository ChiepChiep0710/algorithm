#include <stdio.h>
#include<string.h>
typedef struct ct1{
    char ten[100];
    int op;
    int so;
    int gia;
}chitieu;
int dem()
{
    FILE *fp=fopen("B18DCAT087.bin","rb");
    int c=0;
    while(fgetc(fp)!=EOF)
    {
        c++;
        fseek(fp,sizeof(chitieu)*c,SEEK_SET);
    }
    fclose(fp);
    return c;
}
void them(int n)
{
    FILE *fp=fopen("B18DCAT087.bin","ab");
    int c1=0,c2=0;
    int c=dem();
    for(int i=0;i<n;i++)
    {
        chitieu ct;
        ct.so=c+i;
        while((getchar())!='\n');
        scanf("%d",&ct.op);
        if(ct.op==1) c1++;
        if(ct.op==2) c2++;
        while((getchar())!='\n');
        gets(ct.ten);
        scanf("%d",&ct.gia);
        fseek(fp,0,SEEK_END);
        fwrite(&ct,sizeof(chitieu),1,fp);


    }
    fclose(fp);
    printf("%d %d",c1,c2);
}
void sua(int n)
{
    FILE *fp=fopen("B18DCAT087.bin","rb+");
    fseek(fp,sizeof(chitieu)*(n-1),SEEK_SET);
    chitieu s;
    s.so=n;
    while((getchar())!='\n');
    gets(s.ten);
    s.op=2;
    scanf("%d",&s.gia);
    fwrite(&s,sizeof(chitieu),1,fp);
    puts(s.ten);
    fclose(fp);
}
void in()
{
    chitieu s;
    int thu=0,chi=0,save=0;
    FILE *fp=fopen("B18DCAT087.bin","rb");
    int n=dem();
    for(int i=0;i<n;i++)
    {
        fseek(fp,sizeof(chitieu)*i,SEEK_SET);
        fread(&s,sizeof(chitieu),1,fp);
        if (s.op==1) thu=thu+s.gia;
        if(s.op==2) chi=chi+s.gia;
    }
    save=thu-chi;
    printf("%d %d %d",thu,chi,save);
    fclose(fp);

}
int main()
{
 // FILE *fp=fopen("B18DCAT087.bin","wb");
    int n,m;
    scanf("%d",&n);
    switch(n)
    {
    case 1:
            scanf("%d",&m);
            them(m);
            break;
    case 2:
          scanf("%d",&m);
          sua(m);
          break;
    case 3:
             in();
             break;
    }
  //  fclose(fp);
    return 0;
}




