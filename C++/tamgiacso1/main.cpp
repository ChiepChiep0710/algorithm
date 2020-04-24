#include <iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    n--;
    char a[100][100];
     for(int i=0;i<=2*n;i++)
        for(int j=0;j<=2*n;j++) a[i][j]=' ';

    for(int i=0 ; i<=2*n;i++)
    {

        int c=abs(n-i);
        for (int j=c;j<=2*n-c;j++)
            a[i][j]='*';
        for (int j=0;j<c;j++) a[i][j]='~';
    }
    for(int i=0;i<=2*n;i++)
    {
        for(int j=0;j<=2*n;j++)  printf("%c",a[i][j]);
        printf("/n");
    }
    return 0;
}
