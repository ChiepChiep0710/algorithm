#include <stdio.h>
#include <stdlib.h>
#include<string.h>
char chuanhoa(char c)
{
    if (c>'a'&&c<'z') return c;
     if(c>'A'&&c<'Z') c=c-('A'-'a');
    return c;
}
int main()

{
    char ss[1000];
      char *pa,*a[1000];
      gets(ss); int ka=0;
      pa=strtok(ss," ");
       while(pa!=NULL)
    {
        //strcpy(pb[kb],pb);
        a[ka]=pa;
        ka++;
        pa= strtok(NULL, " ");
    }
    char c1=chuanhoa(a[0][0]);
    char  c2=chuanhoa(a[1][0]);
    strlwr(a[2]);

       char s2[1000]="@ptit.edu.vn";
 //   char *s1=s;

  //  strcat(s,a[2]);
    //strcat(s1,s2);
   // s1=strcat(strcat(s,a[2]),s2);
   printf("%c%c%s%s",c1,c2,a[2],s2);

}
