#include<stdio.h>
int main()
{
	char ch;
	int a;
	printf("���������ĳɼ�\n");
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
	case'A':printf("���ĳɼ�Ϊ���㣡\n");break;
	case'B':printf("���ĳɼ�Ϊ���ã�\n");break;
	case'C':printf("���ĳɼ�Ϊ�еȣ�\n");break;
	case'D':printf("���ĳɼ�Ϊ����\n");break;
	case'E':printf("���ĳɼ�Ϊ������\n");break;
	default:printf("��������ȷ�ĳɼ�\n");break;
	}
	return 0;
}