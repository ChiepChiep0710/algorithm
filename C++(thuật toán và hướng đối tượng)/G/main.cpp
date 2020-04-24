#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    char a[100][100];
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for (int j=1; j<=n; j++)
		if (j-1!=n/2-i+1&&i+n/2!=j&&i!=j+n/2&&j-n/2!=n-i+1) printf(" ");
		else printf("*");
		printf("\n");
    }

    return 0;
}
