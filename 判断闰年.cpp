#include<stdio.h>
int main()
{
	int a = 0;
	printf("请输入一个年份\n");
	scanf_s("%d", &a);
	if (a > 0)
	{
		if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
			printf("%d是闰年\n", a);
		else
			printf("%d不是闰年\n", a);
	}
	else
		printf("请输入正确年份\n");
	return 0;
}