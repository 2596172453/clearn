#include<stdio.h>
int main()
{
	char ch, chm;
	printf("������һ��Сд��ĸ\n");
	scanf_s("%c", &ch);
	chm = ch - 32;
	printf("%c�Ĵ�д��ĸΪ%c\n", ch, chm);
	return 0;
}