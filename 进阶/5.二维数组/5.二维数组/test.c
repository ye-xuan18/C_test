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

//��ά����
//int main()
//{
//	//��ά����Ĵ���:�������� �������� �� ��
//	//int arr1[3][4];
//	//char arr2[3][10];
//	return 0;
//}


//int main()
//{
//	//��ά����ĳ�ʼ��:������ͬʱ����ֵ
//	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	//int arr[3][4] = { 1,2,3,4 }; //����ȫ��ʼ�� -���油0
//	//int arr[3][4] = { {1,2},{3,4},{5,6} };
//	//int arr[3][4] = { {1,2},{3,4},{5,6} };//��ʼ���п���ʡ�� �����о��Բ���ʡ��
//	return 0;
//}
	
//int main()
//{
//	//�����ά����
//	//int arr[][4] = { {1,2},{3,4},{5,6} };
//	//int i = 0;
//	//int j = 0;
//
//	// ��
//	//for (i = 0; i < 3; i++)
//	//{
//	//��
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	return 0;
//	}
	
//	int arr[][9] = { {0,1},{2,3},{4,5},{6,7},{8,9},{10,11},{12,13},{14,15} };
//	int a = 0;
//	int b = 0;
//	for (a = 0; a < 8; a++)
//	{
//		for (b = 0; b < 9; b++)
//		{
//			//printf("%d ", arr[a][b]);
//			printf("&arr[%d][%d]=%p\n", a, b, &arr[a][b]);
//		}
//	}

//����
//void sort(int arr[],int sz)//�β�arr������ָ��
//{
//	//ȷ������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������Ĺ���
//		int j = 0;
//		for (j = 0; j < sz - 1- i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//
//			}
//		}
//	}
//}
//int main()
//{
//	//������Ϊ��������
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//����Ϊ����  --ð������
//	// //��������Ԫ�ظ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//sort�Ƕ���ĺ�����
//	sort(arr,sz);
//	return 0;
//}
	

//��������ʲô?
//��������������Ԫ�صĵ�ַ
//��������������
//1.sizeof(������)-��������ʾ�������� -���������������Ĵ�С��λ���ֽ�
//2.������-��������ʾ�������� -ȡ��������������ĵ�ַ
int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);//����������Ԫ�صĵ�ַ
	return 0;
}
	
