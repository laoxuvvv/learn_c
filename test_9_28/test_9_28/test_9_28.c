#define	_CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if ((a / 10000 == 0) || (a / 10000 >= 10))
//	{
//		printf("����Ĳ�����λ��");
//	}
//	else if ((a / 10000 == a % 10) && (a / 1000 % 10 == a % 100 / 10))
//	{
//		printf("%d�ǻ�����", a);
//	}
//	else
//	{
//		printf("%d���ǻ�����", a);
//	}
//
//	return 0;
//}



//int main()
//{
//	float height, weight, bmi;
//
//	printf("���������(��)��");
//	scanf("%f", &height);
//	printf("����������(����)��");
//	scanf("%f", &weight);
//
//	bmi = weight / (height * height);
//
//	printf("BMIֵΪ%.2f,����", bmi);
//	if (bmi < 18.5)
//		printf("������\n");
//	else if (bmi < 24.9)
//		printf("��������\n");
//	else if (bmi < 29.9)
//		printf("����\n");
//	else
//		printf("����\n");
//
//	return 0;
//}



int main()
{
	int a = 0;
	int i = 0;
	for (i = 0; i <= 100; i++)
	{
		a = a + i;
	}
	printf("%d", a);













	return 0;
}