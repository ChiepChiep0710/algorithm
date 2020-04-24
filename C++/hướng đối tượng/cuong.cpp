#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
	int i, j, k;
	char ch;
	do
	{
		scanf("%d %d %d",&i, &j, &k);
		if ((k*k == i*i + j*j) && (i<=j && j<=k))
		{
			printf(" \n Bo 3 so Pytago la %d %d %d \n" , i, j, k);
		}
		else printf(" \n Bo 3 so tren khong la bo 3 so Pytago \n");
		printf(" \n Ban co muon tiep tuc khong ? ");
		fflush(stdin);
		scanf("%c",&ch);
	} while ((ch == 'y') || (ch == 'Y'));
}