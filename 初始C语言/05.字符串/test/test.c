#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdio.h>
#include<math.h>
int main()
{
	//��������   �ַ��������Զ���һ��\0
	char arr1[] = "bit";
	char arr2[] = { 'a','b','c'};
	char arr3[] = { 'a','b','c','\0'};
	//��ӡ�ַ�����%s)
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	//��ӡ�ַ����ĳ��ȣ�strlen)
	printf("%d\n", strlen(arr1)); //3 ������\0Ҳֻ�Ǳ�־�������볤�ȼ���
	printf("%d\n", strlen(arr2)); //15 ��Ϊû�ж���\0  ���Դ�ӡ�������ֵ
	printf("%d\n", strlen(arr3)); //3




	return 0;
}