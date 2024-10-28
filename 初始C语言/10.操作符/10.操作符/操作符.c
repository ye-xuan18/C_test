#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//自增运算
	//int a = 110;
    //int b = a++;   //后置++  先用后++
	//printf("%d\n", b); //110
	//printf("%d\n", a); //111

	//int a = 110;
	//int b = ++a;   //前置++  先++ 后用
	//printf("%d\n", b); //111
	//printf("%d\n", a); //111



	//类型转换
	//强制类型转换
	//int a = (int)3.14;
	//printf("%d\n", a);
		
	//逻辑运算符
	
	//与
	//int a = 3;
	//int b = 0;
	//if (a && b)
	//printf("1");
	//else
	//printf("0");


	//或
	//int a = 0;
	//int b = 1;
	//int c = a || b;
	//printf("%d\n", c);


//	条件操作符（三目操作符)
//	int a = 0;
//	int b = 3;
//	int max = 0;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	max = a > b ? a : b;


	//逗号表达式
	//int a = 0;
	//int b = 3;
	//int c = 5;
	         //a=5      c=1         b=3
	//int d = (a = b + 2, c = a - 4, b = c + 2);
	//逗号表达式是从左到右以此计算
	//printf("%d\n", d);

    //下标引用操作符
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	printf("%d\n", arr[7]);



	//函数调用操作符
	//调用函数的时候，函数名后面的（）就是函数调用操作符

	return 0;
}