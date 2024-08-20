#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdio.h>
#include<math.h>
int main()
{
	//定义数组   字符串后面自动带一个\0
	char arr1[] = "bit";
	char arr2[] = { 'a','b','c'};
	char arr3[] = { 'a','b','c','\0'};
	//打印字符串（%s)
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	//打印字符串的长度（strlen)
	printf("%d\n", strlen(arr1)); //3 就算有\0也只是标志，不参与长度计算
	printf("%d\n", strlen(arr2)); //15 因为没有定义\0  所以打印的是随机值
	printf("%d\n", strlen(arr3)); //3




	return 0;
}