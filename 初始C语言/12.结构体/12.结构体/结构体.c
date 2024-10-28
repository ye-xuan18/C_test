#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//结构体可以让C语言创建新的类型出来

//创建一个学生
//struct stu {
//	char name[20];
//	int age;
//	double score;
//};
//
//创建一本书的类型
//struct book
//{
//	char name[20];
//	float price;
//	char id[30];
//};

//int main()
//{
//	struct stu s = {"叶轩",20,85.5};//结构体的创建和初始化
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
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
	struct Person Name = { "叶轩","男",209.9,54.5,2,729,19 };
	printf("我叫%s,性别%s,拥有%lfcm的身高,体重只有%lf公斤,年级%d,高考分数%d,年纪%d岁\n", Name.name, Name.sex, Name.high, Name.weight, Name.grade, Name.score, Name.age);
	return 0;
}
}