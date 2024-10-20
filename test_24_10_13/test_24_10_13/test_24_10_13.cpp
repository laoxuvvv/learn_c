//猜拳游戏

#define	_CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	printf("***猜拳游戏***\n\n");
	printf("规定如下：\n1--->石头\n2--->剪刀\n3--->布\n");

	int mych;
	int i;

	do
	{
		printf("请出拳（输入数字1-3）：");
		scanf("%d", &mych);

		if (mych < 1 || mych > 3||mych>='a'||mych<='z'||mych>='A'||mych<='Z')
		{
			i = 1;
			printf("\n输入非法，请重新输入！\n");
			printf("---------------------\n\n\n\n");
		}
		else if (mych >= 1 && mych <= 3)
		{
			i = 0;
			printf("\n你选择了：");
			switch (mych)
			{
			case 1:
				printf("石头\n");
				break;
			case 2:
				printf("剪刀\n");
				break;
			case 3:
				printf("布\n");
				break;
			}
		}
	} while (i == 1);

	int comch = rand() % 3 + 1;

	printf("电脑选择了：");
	switch (comch)
	{
	case 1:
		printf("石头\n");
		break;
	case 2:
		printf("剪刀\n");
		break;
	case 3:
		printf("布\n");
		break;
	}

	if (mych == comch)
		printf("\n结果：平局\n");
	else if ((mych == 1 && comch == 2) || (mych == 2 && comch == 3) || (mych == 3 && comch == 1))
		printf("\n结果：你赢了！\n");
	else
		printf("\n结果：你输了。\n");

	return 0;
}