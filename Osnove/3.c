#include <stdio.h>

int main()
{
	printf("Vnesi trimestno naravno stevilo: ");
	int vhod;
	scanf("%d", &vhod);
	printf("Obrat stevila %d je %d\n", vhod, 100 * (vhod % 10) + 10 * ((vhod / 10) % 10) + (vhod / 100));
	return 0;
}
