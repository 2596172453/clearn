#include <stdio.h>
int main()
{
	int n = 0, i = 0, j = 1;
	printf("������һ����:\n");
	scanf_s("%d", &n);
	for (i = 1;i <= n;i++)
	{
		j = j * i;
	}
	printf("%d!=%d\n", n, j);
	return 0;
}