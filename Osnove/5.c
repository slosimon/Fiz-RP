#include <stdio.h>
#include <math.h>

int main()
{
	double rad;
	printf("Vnesi kot v radianih: ");
	scanf("%lf", &rad);
	int st, min;
	min = rad * 180 * 60 / M_PI;
	st = min / 60;
	min %= 60;
	printf("%.3lf radianov = %d stopinj, %d minut.", rad, st, min);
	return 0;
}
