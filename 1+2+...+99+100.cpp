#include<stdio.h>

int main()
{
	int a = 0, b = 0;
	for (a = 0; a <= 100; a++)
	{
		b += a;
	}
	printf("%d", b);
	return 0;
}