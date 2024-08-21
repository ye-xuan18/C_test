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
//算数操作符  ————————>  +、-、*、\、%

//除法  /
//int main()
//{
//	//%d打印整形（eg：10）
//	//%f打印浮点型（eg：10.0）
//	//int a = 9 / 6;
//	//printf("%d\n", a);
//	//float b = 6 / 5;
//	//printf("%f\n", b);
//	//若打印出来为double在数据后面加上f可以使它变成float类型
//	//float c = 6.0f / 5.0f;
//	//printf("%f\n", c);
//	return 0;
//}
//取模 %  --取模必须保证取模的数据是整形
//int main()
//{
//	//int a = 7 % 3;
//	//printf("%d\n", a);
//	//报错  取模两边必须都是整数
//	/*int a = 7.0 % 3;
//	printf("%d\n", a);*/
//	return 0;
//}

//移位操作符  ————————> <<(左移)  、>>(右移)

//int main()
//{
//	//int a = 2;
//	////把a的二进制位置向左移动一位
//	//int b = a << 1;
//	//printf("b=%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 10 ;
//	//把a的二进制位置向右移动一位
//	int b = a >> 1;
//	printf("b=%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//把a的二进制位置向右移动一位
//	int b = a >> 1;
//	//当前的右移操作符使用的：算数右移
//	printf("b=%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
// //标准的未定义代码  ————> 废代码
//	int b = a >> -10;
//	printf("b=%d\n", b);
//	return 0;
//}

//位操作符    ————————>  &(与)、|(或)、^(非)

//注：3种位操作符必须是整数
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//&  --按(2进制)位与
//	int c = a & b;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001
//	printf("c = % d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//I  --  按(2进制)位或
//	int c = a | b;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000111
//	printf("c=%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//^ - 按(2进制)位异或
//	//对应的二进制位异或
//	//规则:相同位0，相异为1
//	int c = a ^ b;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000110
//	//6
//	printf("c=%d\n", c);
//	return 0;
//}

//赋值操作符  ————————> =、+=、-=、/=、>>=、<<=、%= 

//int main()
//{
//	int a = 10;
//	a = 100;
//	a = a + 100;//1
//	a += 100;//2
//	a = a >> 3;
//	a >>= 3;
//	return 0;
//}
//=  ——————> 赋值
//== ——————> 判断

//单目操作符  ————————> !、-、+、&、sizeof、~、++、--、* 、(类型）

//int main()
//{
//	int flag = 5;
//	printf("%d\n", !flag);//假
//	//flag为真 打印hehe
//	//if (flag)
//	//{
//	//	printf("hehe\n");
//	//}
//	////flag为假，打印haha
//	//if (!flag)
//	//{
//	//	printf("haha\n");
//	//}
//	//return 0;
//}
//int main()
//{
//	int a = 10;
//	char arr[10] = { 0 };
//	printf("%d\n", sizeof(a)); //计算a所占空间的大小，单位是字节
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	//sizeof是一个操作符，不是函数
//
//	return 0;
//}
//int main()
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	//10000000000000000000000000000001 --原码
//	//11111111111111111111111111111110 --反码
//	//11111111111111111111111111111111 --补码
//	//~ 按位取反
//	int b = -a;
//	printf("%d\n", b);
//	return 0;
//}
int  main()
{
	int a = 10;
	printf("%d\n", a--);
	printf("%d\n", a);
	//int b = a++;//后置++  先使用再++
	//int b = ++a;//前置++，先++再使用

	//int b = a--;//后置--，先使用再--
	int b = --a;//前置--，先--再使用
	//printf("%d\n", a);
	//printf("%d\n", b);
	return 0;
}