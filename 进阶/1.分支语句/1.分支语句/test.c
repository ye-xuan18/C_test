#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//��֧���\

/*if���
����֧�﷨�ṹ
if(���ʽ)
    ���
else
    ���

���֧�﷨�ṹ
if(���ʽ)
   ���
else if(���ʽ)
   ���
else
   ���


switch���
switch(���α��ʽ)
{
�����;
}
*/


/*
����else
else����������ifƥ��
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
	else
			printf("haha\n");
	return 0;
 }
*/

/*
һ��δ�����˺ͳ����˵��ж�
int main()
{
	int age = 18;
	if (age >= 18)
		printf("��ϲ���ǳ�����");
	else
		printf("����δ������");
	return 0;
}
*/

/*
�������ꡢ���ꡢ���ꡢ���ꡢ���������ж�
//int main()
//{
//	int age = 89;
//	if (age < 18)
//	{
//		printf("������\n");
//	}
//	else if (age > 18 && age < 44)
//	{
//		printf("������\n");
//	}
//	else if (age > 45 && age < 59)
//	{
//		printf("��������\n");
//	}
//	else if (age > 60 && age < 89)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("���������\n");
//	}
//		return 0;
//}
*/

//�����ж�һ�������Ƿ�Ϊ����
//int  main()
//{
//	int k = 15;
//	if (k % 2 == 1)
//		printf("���� ");
//	else
//		printf("ż�� ");
//	return 0;
//}

//�ġ����1����100֮�������
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d ",i);
//	}
//	return 0;
//}

//�塢���1����100֮���ż��
//int main()
//{
//	int num = 0;
//	for (num = 1; num <= 1000; num++)
//	{
//		if (num % 2 == 0)
//			printf("%d ", num);
//	}
//	return 0;
//}

/*
������һ�����幤���� ����������Ϣ��
int main()
{
	int day = 0;
	scanf("%d\n", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		printf("�������\n");
		break;
	}
	return 0;
}
*/

/*��

*/
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{//switch����Ƕ��ʹ��
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m=%d,n=%d\n", m, n);	
	return 0;
}