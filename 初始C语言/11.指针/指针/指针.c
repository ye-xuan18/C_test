#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//	int a = 100;  //a在内存中要分配空间的  - 4个字节
//	printf("%p\n", &a); //%p专门用来打印地址的
//	int * pa = &a; //pa是用来存放地址的，在C语言里面pa叫指针变量
//	
//	//  * 说明 pa是指针变量
//	//int  说明pa执行的对象是int类型的
//
//	char ch = 'w';
//	char * pc = &ch;
//
//	return 0;
//}
//int main()
//{
//
//	int* pa = &pa;
//	
//	return 0;
//}

//int main()
//{
//
//	int a = 10;
//
//	int* pa = &a;
//
//	*pa = 20;//解引用操作 * pa就是通过pa里面的地址找到a
//	printf("%d\n", a);
//
//	return 0;
//}

int main()
 {
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(double *));
	return 0;
}