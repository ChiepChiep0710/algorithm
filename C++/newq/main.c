#include <stdio.h>
#include <math.h>

int main () {
	int n;
	scanf ("%d", &n);


	while (n > 0)
        {
            long long x, y;
	scanf ("%lld %lld", &x, &y);

		while (x > 0)
		{
			long long i = x % 16;
			if (0 <= i && i <= 9)
				printf ("%lld", i);
			if (i == 10)
				printf ("A");
			if (i == 11)
				printf ("B");
			if (i == 12)
				printf ("C");
			if (i == 13)
				printf ("D");
			if (i ==14)
				printf ("E");
			if (i == 15)
				printf ("F");
			x /= 16;

		}
		printf ("\n");
		while (y > 0)
        {


			long long j = y % 16;
			if (0 <= j && j <= 9)
				printf ("%lld", j);
			if (j == 10)
				printf ("A");
			if (j == 11)
				printf ("B");
			if (j == 12)
				printf ("C");
			if (j == 13)
				printf ("D");
			if (j ==14)
				printf ("E");
			if (j == 15)
				printf ("F");
		y /= 16;

		}
		printf ("\n");


	n--;
	}

}
