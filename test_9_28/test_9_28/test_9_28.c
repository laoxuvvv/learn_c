#define	_CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if ((a / 10000 == 0) || (a / 10000 >= 10))
//	{
//		printf("输入的不是五位数");
//	}
//	else if ((a / 10000 == a % 10) && (a / 1000 % 10 == a % 100 / 10))
//	{
//		printf("%d是回文数", a);
//	}
//	else
//	{
//		printf("%d不是回文数", a);
//	}
//
//	return 0;
//}



//int main()
//{
//	float height, weight, bmi;
//
//	printf("请输入身高(米)：");
//	scanf("%f", &height);
//	printf("请输入体重(公斤)：");
//	scanf("%f", &weight);
//
//	bmi = weight / (height * height);
//
//	printf("BMI值为%.2f,属于", bmi);
//	if (bmi < 18.5)
//		printf("低体重\n");
//	else if (bmi < 24.9)
//		printf("正常体重\n");
//	else if (bmi < 29.9)
//		printf("超重\n");
//	else
//		printf("肥胖\n");
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