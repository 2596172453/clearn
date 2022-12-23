#include<stdio.h>
int main()
{
	char ch, chm;
	printf("请输入一个小写字母\n");
	scanf_s("%c", &ch);
	chm = ch - 32;
	printf("%c的大写字母为%c\n", ch, chm);
	return 0;
}