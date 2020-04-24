#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int a[200][200], m, n, j, i, gt, d, hang, cot;
	d = 0;
	gt = 1;
	hang = n - 1;
	cot = n - 1;
	int c, b, e=c+1, f=b+1;
	scanf ("%d\n", &m);

	while (m != 0 ) {
		scanf ("%d %d %d\n", &n, &c, &b);
		while (d <= n/2) {

			for (i=d; i <= cot; i++) a[d][i] = gt++;
			for (i=d+1; i <= hang; i++) a[cot][i] = gt++;
			for (i=cot-1; i >= d; i--) a[hang][i] = gt++;
			for (i=hang-1; i > d; i--) a[i][d] = gt++;
			d++;
			hang--;
			cot--;
		}


		for (i=0; i<n; i++) {
			for (j=0; j<n; j++) {

				printf ("%d", a[e][f]);
			}

		}
			printf ("\n");
		m--;


	}

}
