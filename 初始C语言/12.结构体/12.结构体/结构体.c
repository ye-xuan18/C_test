#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ṹ�������C���Դ����µ����ͳ���

//����һ��ѧ��
//struct stu {
//	char name[20];
//	int age;
//	double score;
//};
//
//����һ���������
//struct book
//{
//	char name[20];
//	float price;
//	char id[30];
//};

//int main()
//{
//	struct stu s = {"Ҷ��",20,85.5};//�ṹ��Ĵ����ͳ�ʼ��
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����
//
//	struct stu* ps = &s;
//	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);
//	return 0;
//}

struct Person
{
	char name[10];
	char sex[10];
	float high;
	float weight;
	int grade;
	int score;
	int age;
};

int main()
{
	struct Person Name = { "Ҷ��","��",209.9,54.5,2,729,19 };
	printf("�ҽ�%s,�Ա�%s,ӵ��%lfcm�����,����ֻ��%lf����,�꼶%d,�߿�����%d,���%d��\n", Name.name, Name.sex, Name.high, Name.weight, Name.grade, Name.score, Name.age);
	return 0;
}
}