#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//定义一个函数
Add(int x,int y)
{
	int f = 0;
	f = x * y;
	return f;
}


int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	//int c = a + b;
	//函数方式来写
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}