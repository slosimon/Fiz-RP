#include <stdio.h>

int main()
{
	printf("Vnesi uro: ");
	int ura;
	scanf("%d", &ura);
	printf("Vnesi minute: ");
	int minuta;
	scanf("%d", &minuta);
	ura %= 12;
	int kotUra = 30 * (ura * 60 + minuta);
	int kotMinuta = 60 * 6 * minuta;
	int kot = kotUra - kotMinuta;
	kot = (kot > 0) ? kot : -kot;
	kot = (360 * 60 - kot > kot) ? kot : 360 * 60 - kot;
	printf("Manjsi kot med kazalcema je %d stopinj in %d minut", kot / 60, kot % 60);
	return 0;
}  
