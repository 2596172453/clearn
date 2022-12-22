#include<stdio.h>

int main()
{
	char ch;
	printf("请输入您的成绩评级\n");
	scanf_s("%c", &ch);
	switch (ch)
	{
		case'A':printf("您的成绩在90分以上！\n");break;
		case'B':printf("您的成绩在80~90分之间！\n");break;
		case'C':printf("您的成绩在70~80分之间！\n");break;
		case'D':printf("您的成绩在60~70分之间！\n");break;
		case'E':printf("您的成绩在60分以下！\n");break;
		default:printf("请输入正确的成绩评级\n");break;
	}
	return 0;
}
