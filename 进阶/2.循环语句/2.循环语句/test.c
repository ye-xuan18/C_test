#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
//ѭ�����

/*
whileѭ���﷨�ṹ
while(���ʽ)
      ѭ����䣻
��whileѭ���У�break�������õ���ֹѭ��
��whileѭ���У�continue������������ѭ��continue����Ĵ��� ֱ��ȥ�жϲ��� ���Ƿ������һ��ѭ��


forѭ���﷨�ṹ
for(���ʽ1;���ʽ2;���ʽ3��
//������breakʱ����ζ����������ѭ��
//������continue��������ζ����������ѭ��
//������forѭ�����и���ѭ��������ֵ


do while()ѭ��
do while()ѭ�����﷨�ṹ
do
   ѭ�����;
while(���ʽ);
*/


//
//int main()
//{
//	int i = 1;
//	 
//	for (i=1;i <= 100;i++)
//	{
//		if (i == 50)
//			continue;
//
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 100; a++)
//	{ 
//		if (a == 50)
//			break;
//		printf("%d\n", a);
//	}
//	return 0;
//} 

//int main()
//{
//    int i = 1;
//    do
//    {
//        if (i == 5)
//            continue;
//
//        printf("%d\n", i);
//        i++;
//    } while (i<=10);
//
//    return 0;
//}

/*
* ����n�Ľ׳�
int main()
{
    int i = 0;
    int n = 0;
    int act = 1;
    scanf("%d\n", &n);
    for (i = 1; i <= n; i++)
    {
        act *= i;
    }
    printf("%d\n", act);
    return 0;
}
*/

/*
* ����1�Ľ׳�,2�Ľ׳�~~~~~~��10�Ľ׳�
int main()
{
    int i = 0;
    int n = 0;
    int ret = 1;
    int sum = 0;
    //1��+2��+3�� = 1+2+6=9
    for (n = 1; n <= 3; n++)
    {
        ret = 1;//����n�Ľ׳�ǰ����ret��ʼΪ1
        for (i = 1; i <= n; i++)
        {
            ret *= i;
        }
        sum += ret;
    }

    printf("%d\n", sum);
    return 0;
}
*/

/*��һ�����������в��Ҿ����ĳ������n
int main()
{
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int k = 7;//Ҫ���ҵ�����
    //��arr�������������в���k(?)��ֵ
    int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
    int left = 0;
    int right = sz - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] < k)
        {
            left = mid + 1;
        }
        else if (arr[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            printf("�ҵ���:%d\n", mid);
            break;
        }
    }
    if (left > right)
    {
        printf("�Ҳ���\n");
    }
    return 0;
}
*/

/*welcome to Shandong!!!
* w####################!
* we##################!!
* wel################!!!
* ...
* welcome to Shandong!!!*/

int main()
{
    char arr1[] = "welcome to bit!!!!!!";
    char arr2[] = "####################";
    int left = 0;
    int right = strlen(arr1)-1;
    while (left<=right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n", arr2);
        sleep(1000);
        left++;
        right--;
    }
    return 0;
}
