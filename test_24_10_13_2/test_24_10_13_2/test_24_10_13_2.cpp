//成绩评级

#define	_CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	float ch, ma, en;
	float hig, low, ave;

	printf("输入语文成绩：");
	scanf("%f", &ch);
	printf("输入数学成绩：");
	scanf("%f", &ma);
	printf("输入英语成绩：");
	scanf("%f", &en);

	hig = ch;
	if (ma > hig)
		hig = ma;
	if (en > hig)
		hig = en;

	low = ch;
	if (ma < low)
		low = ma;
	if (en < low)
		low = en;

	ave = (ch + ma + en) / 3.0;

	printf("\n最高分：");
	if (hig == ch)
		printf("语文 %.2f\n", ch);
	else if (hig == ma)
		printf("数学 %.2f\n", ma);
	else
		printf("英语 %.2f\n", en);

	printf("最低分：");
	if (low == ch)
		printf("语文 %.2f\n", ch);
	else if (low == ma)
		printf("数学 %.2f\n", ma);
	else
		printf("英语 %.2f\n", en);

	printf("平均分：%.2f\n", ave);

	if (ave >= 90)
		printf("等级：优\n");
	else if (ave >= 80)
		printf("等级：良\n");
	else if (ave >= 60)
		printf("等级：中\n");
	else
		printf("等级：差\n");

	return 0;
}