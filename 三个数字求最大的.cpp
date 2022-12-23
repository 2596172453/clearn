#include <stdio.h>
int main()
{
	int x, y, z, max;
	printf("请输入三个数字\n");
	scanf_s("%d%d%d", &x, &y, &z);
	max = (x > y ? x : y);
	max = max > z ? max : z;
	printf("%d", max);
	return 0;
}