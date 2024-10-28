#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//分支语句\

/*if语句
单分支语法结构
if(表达式)
    语句
else
    语句

多分支语法结构
if(表达式)
   语句
else if(表达式)
   语句
else
   语句


switch语句
switch(整形表达式)
{
语句项;
}
*/


/*
悬空else
else和离的最近的if匹配
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
	else
			printf("haha\n");
	return 0;
 }
*/

/*
一、未成年人和成年人的判断
int main()
{
	int age = 18;
	if (age >= 18)
		printf("恭喜您是成年人");
	else
		printf("您是未成年人");
	return 0;
}
*/

/*
二、少年、青年、中年、老年、老淫棍的判断
//int main()
//{
//	int age = 89;
//	if (age < 18)
//	{
//		printf("少年人\n");
//	}
//	else if (age > 18 && age < 44)
//	{
//		printf("青年人\n");
//	}
//	else if (age > 45 && age < 59)
//	{
//		printf("中老年人\n");
//	}
//	else if (age > 60 && age < 89)
//	{
//		printf("老年人\n");
//	}
//	else
//	{
//		printf("老寿星来喽\n");
//	}
//		return 0;
//}
*/

//三、判断一个数字是否为奇数
//int  main()
//{
//	int k = 15;
//	if (k % 2 == 1)
//		printf("奇数 ");
//	else
//		printf("偶数 ");
//	return 0;
//}

//四、输出1——100之间的奇数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d ",i);
//	}
//	return 0;
//}

//五、输出1——100之间的偶数
//int main()
//{
//	int num = 0;
//	for (num = 1; num <= 1000; num++)
//	{
//		if (num % 2 == 0)
//			printf("%d ", num);
//	}
//	return 0;
//}

/*
六、周一到周五工作日 周六、日休息日
int main()
{
	int day = 0;
	scanf("%d\n", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("输入错误\n");
		break;
	}
	return 0;
}
*/

/*七

*/
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{//switch允许嵌套使用
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m=%d,n=%d\n", m, n);	
	return 0;
}