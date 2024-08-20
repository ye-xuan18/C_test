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
/*一维数组
int main()
{

//数组
	//数组是使用下标来访问的，下标是从0开始的
	//int arr[8];
	//char ch[5];
	//int n = 0;
	//int arr[8];

 //int a = 10;//初始化
	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};//完全初始化
	//int arr[10] = { 1,2,3,4,5};//不完全初始化

	//char ch1[5] = {'b','i','t'};
	//char ch2[] = { 'b','i','t' };
	//char ch3[5] = "bit"; b、i、t、\0、\0
	//char ch4[] = "bit";  b、i、t、\0

	char arr5[] = "bit";
	//[b i t \0]
	char arr6[] = { 'b','i','t' };
	//[b i t]
	printf("%s\n", arr5);
	printf("%s\n", arr6);
	return 0;
}
*/
int main()
{
	int arr1[10] = { 0 };

	arr1[4] = 5;//下标引用操作符

	//数组的大小可以通过计算的得到
	int i = 0;
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr1[0]));
	int sz = sizeof(arr1) / sizeof(arr1[0]);//数组大小计算
	//数组的大小可以通过计算的得到
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d] = %p\n",i, &arr1[i]);
		//printf("%d\n", arr1[i]);
	}
	//%p是用按照地址的格式打印的
	return 0;
}
