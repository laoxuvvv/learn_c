//��ȭ��Ϸ

#define	_CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	printf("***��ȭ��Ϸ***\n\n");
	printf("�涨���£�\n1--->ʯͷ\n2--->����\n3--->��\n");

	int mych;
	int i;

	do
	{
		printf("���ȭ����������1-3����");
		scanf("%d", &mych);

		if (mych < 1 || mych > 3||mych>='a'||mych<='z'||mych>='A'||mych<='Z')
		{
			i = 1;
			printf("\n����Ƿ������������룡\n");
			printf("---------------------\n\n\n\n");
		}
		else if (mych >= 1 && mych <= 3)
		{
			i = 0;
			printf("\n��ѡ���ˣ�");
			switch (mych)
			{
			case 1:
				printf("ʯͷ\n");
				break;
			case 2:
				printf("����\n");
				break;
			case 3:
				printf("��\n");
				break;
			}
		}
	} while (i == 1);

	int comch = rand() % 3 + 1;

	printf("����ѡ���ˣ�");
	switch (comch)
	{
	case 1:
		printf("ʯͷ\n");
		break;
	case 2:
		printf("����\n");
		break;
	case 3:
		printf("��\n");
		break;
	}

	if (mych == comch)
		printf("\n�����ƽ��\n");
	else if ((mych == 1 && comch == 2) || (mych == 2 && comch == 3) || (mych == 3 && comch == 1))
		printf("\n�������Ӯ�ˣ�\n");
	else
		printf("\n����������ˡ�\n");

	return 0;
}