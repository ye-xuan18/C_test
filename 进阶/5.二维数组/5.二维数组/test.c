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

//二维数组
//int main()
//{
//	//二维数组的创建:数据类型 数组名称 行 列
//	//int arr1[3][4];
//	//char arr2[3][10];
//	return 0;
//}


//int main()
//{
//	//二维数组的初始化:创建的同时给赋值
//	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	//int arr[3][4] = { 1,2,3,4 }; //不完全初始化 -后面补0
//	//int arr[3][4] = { {1,2},{3,4},{5,6} };
//	//int arr[3][4] = { {1,2},{3,4},{5,6} };//初始化行可以省略 但是列绝对不能省略
//	return 0;
//}
	
//int main()
//{
//	//输出二维数组
//	//int arr[][4] = { {1,2},{3,4},{5,6} };
//	//int i = 0;
//	//int j = 0;
//
//	// 行
//	//for (i = 0; i < 3; i++)
//	//{
//	//列
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	return 0;
//	}
	
//	int arr[][9] = { {0,1},{2,3},{4,5},{6,7},{8,9},{10,11},{12,13},{14,15} };
//	int a = 0;
//	int b = 0;
//	for (a = 0; a < 8; a++)
//	{
//		for (b = 0; b < 9; b++)
//		{
//			//printf("%d ", arr[a][b]);
//			printf("&arr[%d][%d]=%p\n", a, b, &arr[a][b]);
//		}
//	}

//函数
//void sort(int arr[],int sz)//形参arr本质是指针
//{
//	//确定趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz - 1- i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//
//			}
//		}
//	}
//}
//int main()
//{
//	//数组作为函数参数
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//排序为升序  --冒泡排序
//	// //计算数组元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//sort是定义的函数；
//	sort(arr,sz);
//	return 0;
//}
	

//数组名是什么?
//数组名是数组首元素的地址
//但是有两个例外
//1.sizeof(数组名)-数组名表示整个数组 -计算的是整个数组的大小单位是字节
//2.数组名-数组名表示整个数组 -取出的是整个数组的地址
int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);//数组名是首元素的地址
	return 0;
}
	
