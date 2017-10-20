#include <stdio.h>

int main()
{
	printf("Vnesi osnovno davcno stevilko: ");
	int davcna;
	scanf("%d", &davcna);
	int osnovna = davcna;
	int vsota = 0;
	vsota += davcna % 10 * 2;
	davcna /= 10;
	vsota += davcna % 10 * 3;
	davcna /= 10;
	vsota += davcna % 10 * 4;
	davcna /= 10;
	vsota += davcna % 10 * 5;
	davcna /= 10;
	vsota += davcna % 10 * 6;
	davcna /= 10;
	vsota += davcna % 10 * 7;
	davcna /= 10;
	vsota += davcna % 10 * 8;
	davcna /= 10;
	if (vsota % 11 == 0)
	{
		printf("Davcna stevilka je izkljucena.\n");
	}
	else
	{
		printf("Polna davcna stevilka je %d%d.\n", osnovna, (11 - vsota % 11) % 10);
	}
	return 0;
}
