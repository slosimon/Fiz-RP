#include <math.h>
#include <stdio.h>

int main()
{
	double polog, mesecev, obrestna;
	printf("Polog: ");
	scanf("%lf", &polog);
	printf("Stevilo mesecev: ");
	scanf("%lf", &mesecev);
	printf("Mesecna obrestna mera: ");
	scanf("%lf", &obrestna);
	printf("\nEnostavno obrestovanje: %.2lf\nObrestno obrestovanje: %.2lf", polog * (1 + mesecev * obrestna),  polog * pow((1 + obrestna), mesecev));
	return 0;
}
	
