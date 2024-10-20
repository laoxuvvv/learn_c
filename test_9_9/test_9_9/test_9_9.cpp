#define	_CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

//int main()
//{
//	char c = 'a';
//	short s = 0xbeef;
//	int i = 100000;
//	long l = 100000000L;
//	long long ll = 600000000LL;
//	printf("A char is %lu bytes\n", sizeof(c));
//	printf("A short is %lu bytes\n", sizeof(s));
//	printf("An int is %lu bytes\n", sizeof(i));
//	printf("A long is %lu bytes\n", sizeof(l));
//	printf("A long long is %lu bytes\n", sizeof(ll));
//
//	return 0;
//}



//int main()
//{
//	float x = 10000 / 3.0;
//	double y = 10000 / 3.0;
//	printf("%f", x);
//	cout << endl;
//	printf("%lf", y);
//
//	return 0;
//}



//int main()
//{
//	int n = rand();
//	printf("%d", n);
//
//	cout << endl;
//
//	int x = time(0);
//	printf("%d", x);
//
//	cout << endl;
//
//	//int y = srand(time(0));
//	//printf("%d", y);
//
//	int z = rand(time(0)) % 100;
//	printf("%d", z);
//
//	return 0;
//}



//int main()
//{
//	//int x;
//	//scanf("%d", &x);
//	//printf("%d", x);
//
//	//int y = 0;
//	//y = getchar();
//	//putchar(y);
//
//	return 0;
//}



int main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	int result = 0;

	scanf("%d%d%d", &x, &y, &z);
	result = x * y * z;
	printf("%d", result);

	return 0;
}