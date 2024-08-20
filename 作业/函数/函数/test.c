#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<assert.h>
#include<ctype.h>
#include<errno.h>
#include<float.h>
#include<limits.h>
#include<locale.h>
#include<time.h>
#include<stdlib.h>
#include<wchar.h>
#include<wctype.h>
#include<stdbool.h>

//九九乘法表
//函数
/*
void print_table(int n)
{
	int i = 0;
	//行数
	for (i = 1; i < n; i++)
	{
		//打印一行
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", i, j, i * j);
		}
		printf("\n");
	}
}
*/
//循环模式
/*
int main()
/{
	int n = 0;
	int l = 0;
	int h = 0;
	scanf("%d",&n);
	////函数
	//print_table(n);
	////函数的起名比较关键，名字最好可以体现函数的功能
	int i = 0;
	//行数
	for (i = 1; i < n; i++)
	{
		//打印一行
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
*/




