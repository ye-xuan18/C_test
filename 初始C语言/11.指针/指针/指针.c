#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//	int a = 100;  //a���ڴ���Ҫ����ռ��  - 4���ֽ�
//	printf("%p\n", &a); //%pר��������ӡ��ַ��
//	int * pa = &a; //pa��������ŵ�ַ�ģ���C��������pa��ָ�����
//	
//	//  * ˵�� pa��ָ�����
//	//int  ˵��paִ�еĶ�����int���͵�
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
//	*pa = 20;//�����ò��� * pa����ͨ��pa����ĵ�ַ�ҵ�a
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