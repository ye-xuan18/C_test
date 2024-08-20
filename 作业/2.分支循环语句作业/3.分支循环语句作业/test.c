#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//一个=是赋值  2个=是判断是否相等
//if语句中0表示假，非0表示真
//F10 逐过程
//F11 逐语句


/*
一、第一道题
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

/*二、第二道题
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
* 三、第三道题
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

/*四、写代码将三个整数按从大到小输出
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	//输入
	scanf("%d%d%d", &a, &b, &c);
	//调整顺序
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
	//输出 -大到小
	printf("%d\n", a, b, c);

	return 0;
}
*/

/*五、写一个代码打印1——100之间所有3的倍数的数字
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
		//判断:i是否为3的倍数
		if (i % 3 == 0)
		{
			printf("%d\n", i);
		}

	return 0;
}
*/

/*六、给定2个数字 求这两个数字的最大公约数
第一种方法
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
			printf("最大公约数就是:%d\n", max);
			break;
		}
		max--;
	}
	return 0;
}

第二种方法
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
	printf("最大公约数:%d\n", n);
	return 0;
}
*/

/*
七、打印1000——2000年之间的闰年
int main()
{

	int y = 0;
	int sum = 0;
	for (y = 1000; y <= 2000; y++)
	{
		//判断y是不是闰年
		//1.被4整除，不能被100整除是闰年
		//2.能被400整除是闰年
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

/*七、写一个代码打印100-200之间的素数
素数 -- 质数
//只能被1和它本身整除

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		//2->i-1之间的数字去除i，看能不能整除
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
