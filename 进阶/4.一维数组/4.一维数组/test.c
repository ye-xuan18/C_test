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
/*һά����
int main()
{

//����
	//������ʹ���±������ʵģ��±��Ǵ�0��ʼ��
	//int arr[8];
	//char ch[5];
	//int n = 0;
	//int arr[8];

 //int a = 10;//��ʼ��
	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};//��ȫ��ʼ��
	//int arr[10] = { 1,2,3,4,5};//����ȫ��ʼ��

	//char ch1[5] = {'b','i','t'};
	//char ch2[] = { 'b','i','t' };
	//char ch3[5] = "bit"; b��i��t��\0��\0
	//char ch4[] = "bit";  b��i��t��\0

	char arr5[] = "bit";
	//[b i t \0]
	char arr6[] = { 'b','i','t' };
	//[b i t]
	printf("%s\n", arr5);
	printf("%s\n", arr6);
	return 0;
}
*/
int main()
{
	int arr1[10] = { 0 };

	arr1[4] = 5;//�±����ò�����

	//����Ĵ�С����ͨ������ĵõ�
	int i = 0;
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr1[0]));
	int sz = sizeof(arr1) / sizeof(arr1[0]);//�����С����
	//����Ĵ�С����ͨ������ĵõ�
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d] = %p\n",i, &arr1[i]);
		//printf("%d\n", arr1[i]);
	}
	//%p���ð��յ�ַ�ĸ�ʽ��ӡ��
	return 0;
}
