#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s1[10000],s2[10000];
    int c[1000];

    gets(s1);
    gets(s2);
 //   char *p;
  // char **a = (char**) malloc(100*sizeof(char));
  // char **b = (char**) malloc(100*sizeof(char));
   char *pa;
  // char a[1000][1000],b[1000][1000];
  char *a[1000]; char *b[1000];
    int ka=0;
    pa= strtok(s1, " ");
    while(pa!=NULL)
    {
        a[ka]=pa;
        ka++;
        pa= strtok(NULL, " ");
    }
    int kb=0;
    char *pb;
    pb= strtok(s2, " ");
    while(pb!=NULL)
    {
        //strcpy(pb[kb],pb);
        b[kb]=pb;
        kb++;
        pb= strtok(NULL, " ");
    }
    for(int i=0;i<ka;i++) c[i]=1;
    for(int i=0;i<ka-1;i++)
        if(c[i]==1)
        {
            for(int j=i+1;j<ka;j++)
                if(strcmp(a[i],a[j])==1) c[j]=0;

        }

    for(int i=0;i<ka;i++)
    if (c[i]==1)
    {
        int check=1;
        for(int j=0;j<kb;j++)
        if (strcmp(a[i],b[j])==0) check=0;
        if (check==1) printf("%s ",a[i]);
    }
   // for(int i=0;i<ka;i++) printf("%d",c[i]);


}
