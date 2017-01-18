#include <stdio.h>

int main(void)
{
	int k = 0, m = 20, n = 40, r = 25;
	k = (++m) - ((--n) - r);
	printf("Итого k = %d\n", k);
}