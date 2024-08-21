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
////算数操作符  ————————>  +、-、*、\、%
//
////除法  /
////int main()
////{
////	//%d打印整形（eg：10）
////	//%f打印浮点型（eg：10.0）
////	//int a = 9 / 6;
////	//printf("%d\n", a);
////	//float b = 6 / 5;
////	//printf("%f\n", b);
////	//若打印出来为double在数据后面加上f可以使它变成float类型
////	//float c = 6.0f / 5.0f;
////	//printf("%f\n", c);
////	return 0;
////}
////取模 %  --取模必须保证取模的数据是整形
////int main()
////{
////	//int a = 7 % 3;
////	//printf("%d\n", a);
////	//报错  取模两边必须都是整数
////	/*int a = 7.0 % 3;
////	printf("%d\n", a);*/
////	return 0;
////}
//
////移位操作符  ————————> <<(左移)  、>>(右移)
//
////int main()
////{
////	//int a = 2;
////	////把a的二进制位置向左移动一位
////	//int b = a << 1;
////	//printf("b=%d\n", b);
////	return 0;
////}
////int main()
////{
////	int a = 10 ;
////	//把a的二进制位置向右移动一位
////	int b = a >> 1;
////	printf("b=%d\n", b);
////	return 0;
////}
////int main()
////{
////	int a = 10;
////	//把a的二进制位置向右移动一位
////	int b = a >> 1;
////	//当前的右移操作符使用的：算数右移
////	printf("b=%d\n", b);
////	return 0;
////}
////int main()
////{
////	int a = 10;
//// //标准的未定义代码  ————> 废代码
////	int b = a >> -10;
////	printf("b=%d\n", b);
////	return 0;
////}
//
////位操作符    ————————>  &(与)、|(或)、^(非)
//
////注：3种位操作符必须是整数
////int main()
////{
////	int a = 3;
////	int b = 5;
////	//&  --按(2进制)位与
////	int c = a & b;
////	//00000000000000000000000000000011
////	//00000000000000000000000000000101
////	//00000000000000000000000000000001
////	printf("c = % d\n", c);
////	return 0;
////}
////int main()
////{
////	int a = 3;
////	int b = 5;
////	//I  --  按(2进制)位或
////	int c = a | b;
////	//00000000000000000000000000000011
////	//00000000000000000000000000000101
////	//00000000000000000000000000000111
////	printf("c=%d\n", c);
////	return 0;
////}
////int main()
////{
////	int a = 3;
////	int b = 5;
////	//^ - 按(2进制)位异或
////	//对应的二进制位异或
////	//规则:相同位0，相异为1
////	int c = a ^ b;
////	//00000000000000000000000000000011
////	//00000000000000000000000000000101
////	//00000000000000000000000000000110
////	//6
////	printf("c=%d\n", c);
////	return 0;
////}
//
////赋值操作符  ————————> =、+=、-=、/=、>>=、<<=、%= 
//
////int main()
////{
////	int a = 10;
////	a = 100;
////	a = a + 100;//1
////	a += 100;//2
////	a = a >> 3;
////	a >>= 3;
////	return 0;
////}
////=  ——————> 赋值
////== ——————> 判断
//
////单目操作符  ————————> !、-、+、&、sizeof、~、++、--、* 、(类型）
//
////int main()
////{
////	int flag = 5;
////	printf("%d\n", !flag);//假
////	//flag为真 打印hehe
////	//if (flag)
////	//{
////	//	printf("hehe\n");
////	//}
////	////flag为假，打印haha
////	//if (!flag)
////	//{
////	//	printf("haha\n");
////	//}
////	//return 0;
////}
////int main()
////{
////	int a = 10;
////	char arr[10] = { 0 };
////	printf("%d\n", sizeof(a)); //计算a所占空间的大小，单位是字节
////	printf("%d\n", sizeof(int));
////	printf("%d\n", sizeof a);
////	//sizeof是一个操作符，不是函数
////
////	return 0;
////}
////int main()
////{
////	short s = 5;
////	int a = 10;
////	printf("%d\n", sizeof(s = a + 2));
////	printf("%d\n", s);
////	return 0;
////}
//
////int main()
////{
////	int a = -1;
////	//10000000000000000000000000000001 --原码
////	//11111111111111111111111111111110 --反码
////	//11111111111111111111111111111111 --补码
////	//~ 按位取反
////	int b = -a;
////	printf("%d\n", b);
////	return 0;
////}
// 
// 
//int  main()
//{
//	int a = 10;
//	printf("%d\n", a--);
//	printf("%d\n", a);
//	//int b = a++;//后置++  先使用再++
//	//int b = ++a;//前置++，先++再使用
//
//	//int b = a--;//后置--，先使用再--
//	int b = --a;//前置--，先--再使用
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	 //&取地址操作符
//	//%p打印地址
//	printf("%p\n", &a);
//	int *pa = &a;//pa是用来存放地址的 - pa就是一个指针变量
//	*pa;// - 解引用操作符 -间接访问操作符
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(int ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//int main()
//{
//	int a = 4;
//	int b = 10;
//	//if(a == b)
//	//if(a != b)
//	//if(a > b)
//	if(a < b)
//	{
//
//	}
//	return 0;
//}赋值  == 判断相等

//=
//比较2个字符串大小不能用==
//int main()
//{
//	int a = 3;
//	int b = 0;
//	if (a && b)
//	return 0;
//}

//&& 一假即假  ||一真即真

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	//i = a++ || ++b || d++;
//	return 0;
//}

// 条件操作符

//int main()
//{
//	int a = 10;
//	int b = 34;
//	if (a > b)
//		b = 1;
//	else
//		b = -1;
//	//三目操作符
//	//如果表达式1为真 输出表达式2 
//	//如果表达式1为假 输出表达式3
//	b = a > 5 ? 1 : -1;
//	//  表达式1 ？表达式2 ：表达式3
//	printf("%d\n", b);
//	return 0;
//}

//逗号表达式

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	//逗号表达式从左往右依次计算，但是整个表达式结果是最后一个表达式的结构 
//	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	             // 0 1 2 3 4 5 6 7 8  9 
//	printf("%d\n", arr[8]); //[]  -- 就是下标引用操作符
//	// []操作数是2个：arr,4
//	//3+5
//	return 0;
//}
//函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}
//void test()
//{}
//int main()
//{
//	int a = 100;
//	int b = 999;
//	函数调用
//	int ret = Add(a, b);
//	printf("%d\n", ret); //() -函数调用操作符
//	test();
//	return 0;
//}

//结构成员访问操作符
//.
//->

//结构体
//int float char short
//double long
//
//书:书名，书号，出版社，作者，定价
//人: 名字 年龄 性别


//struct Book
//{
//	char name[20];
//	char id[20];
//	int price;
//};
//
//int  main()
//{
//	int num = 10;
//	//结构体变量名.成员名
//	struct Book b = { "C语言程序设计","C200401290076",150 };
//	struct Book* pb = &b;
//
//	printf("书名: %s\n", pb->name);
//	printf("书号: %s\n", pb->id);
//	printf("价格: %d美元\n", pb->price);
//
//	printf("书名: %s\n", (*pb).name);
//	printf("书号: %s\n", (*pb).id);
//	printf("价格: %d美元\n",(*pb).price);
//	
//	printf("书名: %s\n", b.name);
//	printf("书号: %s\n", b.id);
//	printf("价格: %d美元\n", b.price);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 10;
//	int c = a + b * 10;
//	printf("%d\n", c);
//	return 0;
//}

//int  main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//000000011 -a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//	char c =  a + b;
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//  //10000010 - c 
//	//发现a和b都是char类型，都没有达到int的大小
//	//这里就会发生整形提升
//	printf("%d\n", c);
//	return 0;
//}

