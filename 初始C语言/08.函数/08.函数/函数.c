#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����һ������
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
	//������ʽ��д
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}