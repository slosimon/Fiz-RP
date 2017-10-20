#include <stdio.h>

int main()
{
	int st1, min1, sec1, st2, min2, sec2;
	printf("Vnesi prvi kot:\n      stopinje: ");
	scanf("%d", &st1);
	printf("        minute: ");
	scanf("%d", &min1);
	printf("       sekunde: ");
	scanf("%d", &sec1);
	printf("Vnesi drugi kot:\n      stopinje: ");
	scanf("%d", &st2);
	printf("        minute: ");
	scanf("%d", &min2);
	printf("       sekunde: ");
	scanf("%d", &sec2);
	int st, min, sec;
	st = st1 + st2;
	min = min1 + min2;
	sec = sec1 + sec2;
	min += sec / 60;
	sec %= 60;
	st += min / 60;
	min %= 60;
	printf("Vsota obeh kotov je %d stopinj, %d minut in %d sekund.\n", st, min, sec);
	return 0;
}
