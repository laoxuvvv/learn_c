#define	_CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	scanf("%d %d", &a, &b);
//
//	int c = Add(a, b);
//
//	printf("%d", c);
//
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	scanf("%d %d", &a, &b);
//
//	int c = a > b ? a : b;
//
//	printf("%d", c);
//
//	return 0;
//}



int main()
{
	int year = 0;
	printf("std£º");
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0)
		printf("on");
	else
		printf("off");

	return 0;
}