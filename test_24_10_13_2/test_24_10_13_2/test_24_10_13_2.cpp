//�ɼ�����

#define	_CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	float ch, ma, en;
	float hig, low, ave;

	printf("�������ĳɼ���");
	scanf("%f", &ch);
	printf("������ѧ�ɼ���");
	scanf("%f", &ma);
	printf("����Ӣ��ɼ���");
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

	printf("\n��߷֣�");
	if (hig == ch)
		printf("���� %.2f\n", ch);
	else if (hig == ma)
		printf("��ѧ %.2f\n", ma);
	else
		printf("Ӣ�� %.2f\n", en);

	printf("��ͷ֣�");
	if (low == ch)
		printf("���� %.2f\n", ch);
	else if (low == ma)
		printf("��ѧ %.2f\n", ma);
	else
		printf("Ӣ�� %.2f\n", en);

	printf("ƽ���֣�%.2f\n", ave);

	if (ave >= 90)
		printf("�ȼ�����\n");
	else if (ave >= 80)
		printf("�ȼ�����\n");
	else if (ave >= 60)
		printf("�ȼ�����\n");
	else
		printf("�ȼ�����\n");

	return 0;
}