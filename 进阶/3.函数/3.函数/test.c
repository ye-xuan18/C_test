#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

//库函数使用
/*
strcpy--拷贝函数
strcpy(s1,s2)----意思是将s2的值拷贝到s1中
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello World";
	printf("%d\n", strlen(strcpy(arr1, arr2)));
	return 0;
}

strcpy函数的使用
 
memset函数的使用
memset(arr, 'x', 5);  
memset(更改的源数据, 更改内容, 更改几位数据);
int main()
{
	char arr[] = "Hello 198cm身高的叶轩";
	memset(arr, 'x', 5);
	printf("%s\n", arr);
	return 0;
}
练习
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "YeXuan";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
*/

//自定义函数使用
/*
* ret_type fun_name(paral, *)
{
	statement;//语句项
}
ret_type 返回类型
fun_name 函数名
paral    函数参数

get_max(int x, int y)
{
	int z = 0;
	if (x > y)
		z = x;
	else
		z = y;
	return z;//返回z-返回最大值
}
int main()
{
	int a = 10;
	int b = 20;
	//函数的调用
	int max = get_max(a, b);
	printf("max=%d\n", max);
	return 0;
}
*/
//函数返回类型的地方写出:void，表示这个函数不返回任何值，也不需要返回
//写出
/*
void swap(int* pa, int* pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}

int main()
{
	int a = 10;
	int b = 20;
	//写一个函数--交换2个整形变量的值
	printf("交换前:a=%d b=%d\n", a, b);
	swap(&a,&b);
	printf("交换后:a=%d b=%d\n", a, b);
	return 0;
}

*/

//int is_prime(int a)
//{
//	2->n-1 之间的数字
//	int j = 0;
//	for (j = 2; j < a; j++)
//	{
//		if (a % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	100——200之间的素数
//	int i = 0;
//	int sum = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			sum++;
//			printf("%d", i);
//		}
//	}
//	printf(" 总数是%d ", sum);
//	return 0;
//}

int main()
{

	float f_tall;
	float m_tall;
	float s_tall;
	printf("请输入父亲身高和母亲身高");
	scanf("%f %f", &f_tall, &m_tall);
	s_tall = 59.699 + 0.419 * f_tall + 0.265 * m_tall;
	printf("%f\n", s_tall);
	return 0;
}
