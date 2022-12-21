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
  
  
