#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//һ��=�Ǹ�ֵ  2��=���ж��Ƿ����
//if�����0��ʾ�٣���0��ʾ��
//F10 �����
//F11 �����


/*
һ����һ����
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (i = 5)
			printf("%d\n", i);
	}
	return 0;
}
*/

/*�����ڶ�����
int func(int a)
{
	int b;
	switch (a)
	{
	case 1:b = 30;
	case 2:b = 20;
	case 3:b = 16;
	default:b = 0;
	}
	return b;
}
int main()
{
	printf("%d\n", func(1));

	return 0;
}
*/

/*
* ������������
int main()
{
	int x = 3;
	int y = 3;
	switch (x % 2)
	{
	case 1:
		switch (y)
		{
		case 0:
			printf("first");
		case 1:
			printf("second");
			break;
		default:printf("hello");
		}
	case 2:
		printf("third");
	}
	return 0;
}
*/

/*�ġ�д���뽫�����������Ӵ�С���
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	//����
	scanf("%d%d%d", &a, &b, &c);
	//����˳��
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	//��� -��С
	printf("%d\n", a, b, c);

	return 0;
}
*/

/*�塢дһ�������ӡ1����100֮������3�ı���������
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
		//�ж�:i�Ƿ�Ϊ3�ı���
		if (i % 3 == 0)
		{
			printf("%d\n", i);
		}

	return 0;
}
*/

/*��������2������ �����������ֵ����Լ��
��һ�ַ���
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int max = 0;
	if (a < b)
		max = b;
	else
		max = a;
	while(1)
	{
		if (a % max == 0 && b % max == 0)
		{
			printf("���Լ������:%d\n", max);
			break;
		}
		max--;
	}
	return 0;
}

�ڶ��ַ���
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int t = 0;
	while (t = m % n)
	{
		m = n;
		n = t;
	}
	printf("���Լ��:%d\n", n);
	return 0;
}
*/

/*
�ߡ���ӡ1000����2000��֮�������
int main()
{

	int y = 0;
	int sum = 0;
	for (y = 1000; y <= 2000; y++)
	{
		//�ж�y�ǲ�������
		//1.��4���������ܱ�100����������
		//2.�ܱ�400����������
		if (y % 4 == 0)
		{
			if (y % 100 != 0)
			{
				printf("%d ", y);
				sum++;
			}
		}
		if (y % 400 == 0)
		{
			printf("%d ", y);
			sum++;
		}
	}
	printf("\nsum= %d\n", sum);
	return 0;
}
}
*/

/*�ߡ�дһ�������ӡ100-200֮�������
���� -- ����
//ֻ�ܱ�1������������

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		//2->i-1֮�������ȥ��i�����ܲ�������
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		//
		if (i == j)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
*/
