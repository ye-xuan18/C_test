#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  //头文件
#include <string.h> //头文件

//一、局部变量和全局变量的优先级问题
/*
int num = 10;
局部变量和全局变量，局部变量优先使用
 int main()
{
	int num = 1;
	printf("%d\n", num);
	return 0;
}
*/


//二、写博客的思路
/*
1.整体的思路!
2.排版
3.配图
4.不提建议
5.坚持
6.不要害怕
7.博客的命名很重要 ---日期X
【C语言】分支和循环
【C语言】XXXX
*/


//三、求字符串的长度
/*
C99标准中引用一个概念：变长数组
支持数组创建的时候，用变量指定大小的，但是这个数组不能进行初始化
VS2019  不支持C99中变长数组的
int main()
{
	char arr[] = { 'b','i','t' };
	因为字符型数据里面有\0所以这里是随机值
	printf("%d\n",strlen(arr));
	return 0;
}
*/


//四、求字符串的长度
/*
int main()
{
	printf("%d\n", strlen("c:\test\121"));
	return 0;
}
*/


//五、输入两个数字求两个数字的最大值
/*
函数
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个需要比较的数字\n");
//	scanf("%d %d", &a, &b);
//	int p = Max(a, b);
//	printf("%d\n", p);
//	return 0;
//}
*/

//六、计算编程
/*
int sum(int a)
{
	int c = 0;
	static int b = 3;
	c += 1;
	b += 2;
	return (a + b + c);
}
int main()
{

	int i;
	int a = 2;
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", sum(a));
	}
}
*/


//七、输入一个小飞机
/*
int main()
{
	printf("     **     \n");
	printf("     **     \n");
	printf("************\n");
	printf("************\n");
	printf("    *  *    \n");
	printf("    *  *    \n");
	return 0;
}
*/

//八、输入一个M，如果被5整除输出“YES”，否则就输出“No”

//int main()
//{
//	int m = 0;
//	printf("请输入一个整数\n");
//	scanf("%d\n", &m);
//	if (m%5 == 0)
//		printf("YES");
//	else
//		printf("No");
//	return 0;
//}


