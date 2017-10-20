#include <stdio.h>

int main()
{
	printf("Vnesi prvo celo stevilo: \n");
	int st1;
	scanf("%d", &st1);
	printf("Vnesi drugo celo stevilo: \n");
	int st2;
	scanf("%d", &st2);
	printf("%d + %d = %d\n", st1, st2, st1 + st2);
	printf("%d - %d = %d\n", st1, st2, st1 - st2);
	printf("%d * %d = %d\n", st1, st2, st1 * st2);
	printf("%d / %d = %d\n", st1, st2, st1 / st2);
	printf("%d %% %d = %d\n", st1, st2, st1 % st2);
	return 0;
}
