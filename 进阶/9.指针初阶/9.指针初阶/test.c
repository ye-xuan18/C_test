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

//int main()
//{
//	int a = 100;  //a占4个字节
//	int* pa = &a;  //拿到的是a的4个字节中第一个字节的地址
//	*pa = 20;
//	return 0;
//}
//int main()
//{
//	int a = 3, b, * p;
//	p = &a;
//	b = *p + 2;
//	printf("%d,%d\n", a, b);
//	return 0;
//}
// 
//int main()
//{
//	int a = 511,*b = &a;
//	printf("%d\n", *b);
//	return 0;
//}
//int main()
//{
//	int* p1, * p2, * p, a = 5, b = 8;
//	p1 = &a, p2 = &b;
//	if (a < b)
//	{
//		p = p1;
//		p1 = p2;
//		p2 = p;
//	}
//	printf("%d %d\n", *p1, *p2);
//	printf("%d %d", a, b);
//	return 0;
//}
//int main()
//{
//	int i, x[3][3] = { 9,8,7,6,5,4,3,2,1 }, * p = &x[1][1];
//	for (i=0;i<4;i+=2)
//	{
//		printf("%d\n", p[i]);
//	}
//	return 0;
//}