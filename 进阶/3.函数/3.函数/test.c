#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

//�⺯��ʹ��
/*
strcpy--��������
strcpy(s1,s2)----��˼�ǽ�s2��ֵ������s1��
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello World";
	printf("%d\n", strlen(strcpy(arr1, arr2)));
	return 0;
}

strcpy������ʹ��
 
memset������ʹ��
memset(arr, 'x', 5);  
memset(���ĵ�Դ����, ��������, ���ļ�λ����);
int main()
{
	char arr[] = "Hello 198cm��ߵ�Ҷ��";
	memset(arr, 'x', 5);
	printf("%s\n", arr);
	return 0;
}
��ϰ
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "YeXuan";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
*/

//�Զ��庯��ʹ��
/*
* ret_type fun_name(paral, *)
{
	statement;//�����
}
ret_type ��������
fun_name ������
paral    ��������

get_max(int x, int y)
{
	int z = 0;
	if (x > y)
		z = x;
	else
		z = y;
	return z;//����z-�������ֵ
}
int main()
{
	int a = 10;
	int b = 20;
	//�����ĵ���
	int max = get_max(a, b);
	printf("max=%d\n", max);
	return 0;
}
*/
//�����������͵ĵط�д��:void����ʾ��������������κ�ֵ��Ҳ����Ҫ����
//д��
/*
void swap(int* pa, int* pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}

int main()
{
	int a = 10;
	int b = 20;
	//дһ������--����2�����α�����ֵ
	printf("����ǰ:a=%d b=%d\n", a, b);
	swap(&a,&b);
	printf("������:a=%d b=%d\n", a, b);
	return 0;
}

*/

//int is_prime(int a)
//{
//	2->n-1 ֮�������
//	int j = 0;
//	for (j = 2; j < a; j++)
//	{
//		if (a % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	100����200֮�������
//	int i = 0;
//	int sum = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			sum++;
//			printf("%d", i);
//		}
//	}
//	printf(" ������%d ", sum);
//	return 0;
//}

int main()
{

	float f_tall;
	float m_tall;
	float s_tall;
	printf("�����븸����ߺ�ĸ�����");
	scanf("%f %f", &f_tall, &m_tall);
	s_tall = 59.699 + 0.419 * f_tall + 0.265 * m_tall;
	printf("%f\n", s_tall);
	return 0;
}
