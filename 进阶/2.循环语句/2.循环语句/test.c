#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
//循环语句

/*
while循环语法结构
while(表达式)
      循环语句；
在while循环中，break用于永久的终止循环
在while循环中，continue用于跳出本次循环continue后面的代码 直接去判断部分 看是否进行下一次循环


for循环语法结构
for(表达式1;表达式2;表达式3）
//当出现break时则意味着跳出整个循环
//当出现continue出现则意味着跳出本次循环
//不可在for循环体中更改循环变量的值


do while()循环
do while()循环的语法结构
do
   循环语句;
while(表达式);
*/


//
//int main()
//{
//	int i = 1;
//	 
//	for (i=1;i <= 100;i++)
//	{
//		if (i == 50)
//			continue;
//
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 100; a++)
//	{ 
//		if (a == 50)
//			break;
//		printf("%d\n", a);
//	}
//	return 0;
//} 

//int main()
//{
//    int i = 1;
//    do
//    {
//        if (i == 5)
//            continue;
//
//        printf("%d\n", i);
//        i++;
//    } while (i<=10);
//
//    return 0;
//}

/*
* 计算n的阶乘
int main()
{
    int i = 0;
    int n = 0;
    int act = 1;
    scanf("%d\n", &n);
    for (i = 1; i <= n; i++)
    {
        act *= i;
    }
    printf("%d\n", act);
    return 0;
}
*/

/*
* 计算1的阶乘,2的阶乘~~~~~~到10的阶乘
int main()
{
    int i = 0;
    int n = 0;
    int ret = 1;
    int sum = 0;
    //1！+2！+3！ = 1+2+6=9
    for (n = 1; n <= 3; n++)
    {
        ret = 1;//计算n的阶乘前，把ret初始为1
        for (i = 1; i <= n; i++)
        {
            ret *= i;
        }
        sum += ret;
    }

    printf("%d\n", sum);
    return 0;
}
*/

/*在一个有序数组中查找具体的某个数字n
int main()
{
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int k = 7;//要查找的数字
    //在arr这个有序的数组中查找k(?)的值
    int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
    int left = 0;
    int right = sz - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] < k)
        {
            left = mid + 1;
        }
        else if (arr[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            printf("找到了:%d\n", mid);
            break;
        }
    }
    if (left > right)
    {
        printf("找不到\n");
    }
    return 0;
}
*/

/*welcome to Shandong!!!
* w####################!
* we##################!!
* wel################!!!
* ...
* welcome to Shandong!!!*/

int main()
{
    char arr1[] = "welcome to bit!!!!!!";
    char arr2[] = "####################";
    int left = 0;
    int right = strlen(arr1)-1;
    while (left<=right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n", arr2);
        sleep(1000);
        left++;
        right--;
    }
    return 0;
}
