# clearn
c语言学习  

## 判断质数  
```  
#include<stdio.h>
int zhishu(int);
int main()
{
	int a;
	int p;
	printf("请输入一个数字\n");
	scanf_s("%d", &a);
	p = zhishu(a);
	if (p)
		printf("此数字是质数\n");
	else
		printf("此数字不是质数\n");
	return 0;
}
int zhishu(int a)
{
	int i;
	int flag = 0;
	for (i = 2;i < a / 2;i++)
	{
		if (a % i == 0)
		{
			flag = 0;
			break;
		}
		else flag = 1;
	}
	if (flag == 0)
		return 0;
	else return 1;
}  
```  
  
## 判断20个数中大于11的数的和及均值  
```
#include<stdio.h>

int main()
{
	int a[20], i, sum = 0;
	int cnt = -1;
	float ave;
	printf("ÇëÊäÈë20¸öÕûÊý\n");
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
```
