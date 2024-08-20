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
