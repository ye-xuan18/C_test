#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  //ͷ�ļ�
#include <string.h> //ͷ�ļ�

//һ���ֲ�������ȫ�ֱ��������ȼ�����
/*
int num = 10;
�ֲ�������ȫ�ֱ������ֲ���������ʹ��
 int main()
{
	int num = 1;
	printf("%d\n", num);
	return 0;
}
*/


//����д���͵�˼·
/*
1.�����˼·!
2.�Ű�
3.��ͼ
4.���Ὠ��
5.���
6.��Ҫ����
7.���͵���������Ҫ ---����X
��C���ԡ���֧��ѭ��
��C���ԡ�XXXX
*/


//�������ַ����ĳ���
/*
C99��׼������һ������䳤����
֧�����鴴����ʱ���ñ���ָ����С�ģ�����������鲻�ܽ��г�ʼ��
VS2019  ��֧��C99�б䳤�����
int main()
{
	char arr[] = { 'b','i','t' };
	��Ϊ�ַ�������������\0�������������ֵ
	printf("%d\n",strlen(arr));
	return 0;
}
*/


//�ġ����ַ����ĳ���
/*
int main()
{
	printf("%d\n", strlen("c:\test\121"));
	return 0;
}
*/


//�塢���������������������ֵ����ֵ
/*
����
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������������Ҫ�Ƚϵ�����\n");
//	scanf("%d %d", &a, &b);
//	int p = Max(a, b);
//	printf("%d\n", p);
//	return 0;
//}
*/

//����������
/*
int sum(int a)
{
	int c = 0;
	static int b = 3;
	c += 1;
	b += 2;
	return (a + b + c);
}
int main()
{

	int i;
	int a = 2;
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", sum(a));
	}
}
*/


//�ߡ�����һ��С�ɻ�
/*
int main()
{
	printf("     **     \n");
	printf("     **     \n");
	printf("************\n");
	printf("************\n");
	printf("    *  *    \n");
	printf("    *  *    \n");
	return 0;
}
*/

//�ˡ�����һ��M�������5���������YES��������������No��

//int main()
//{
//	int m = 0;
//	printf("������һ������\n");
//	scanf("%d\n", &m);
//	if (m%5 == 0)
//		printf("YES");
//	else
//		printf("No");
//	return 0;
//}


