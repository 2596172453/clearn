#include<stdio.h>

int main()
{
	int a[20], i, sum = 0;
	int cnt = -1;
	float ave;
	printf("请输入20个整数\n");
	for (i = 0;i < 20;i++)
	{
		scanf_s("%d", &a[i]);
		if (a[i] > 11)
		{
			sum = sum + a[i];
			cnt++;
		}
	}

	ave = sum / cnt;

	printf("sum=%d\n", sum);
	printf("ave=%f\n", ave);
	return 0;
}