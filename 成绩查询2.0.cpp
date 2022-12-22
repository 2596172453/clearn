#include<stdio.h>
int main()
{
	char ch;
	int a;
	printf("请输入您的成绩\n");
	scanf_s("%d", &a);
	if (a >= 90)
		ch = 'A';
	else
		if (a >= 80)
			ch = 'B';
		else
			if (a >= 70)
				ch = 'C';
			else
				if (a >= 60)
					ch = 'D';
				else
					ch = 'E';
	switch (ch)
	{
	case'A':printf("您的成绩为优秀！\n");break;
	case'B':printf("您的成绩为良好！\n");break;
	case'C':printf("您的成绩为中等！\n");break;
	case'D':printf("您的成绩为及格！\n");break;
	case'E':printf("您的成绩为不及格！\n");break;
	default:printf("请输入正确的成绩\n");break;
	}
	return 0;
}