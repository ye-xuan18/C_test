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
#include "game.h"

void menu()
{
	printf("****************************\n");
	printf("******   1.play        *****\n");
	printf("******   0.exit        *****\n");
	printf("****************************\n");
}

void game()
{
	//�洢����  ��ά����
	char board[ROW][COL];
	//��ʼ������ -��ʼ���ո�
	InitBoard(board, ROW, COL);
	//��ӡһ������ - �����Ǵ�ӡ���������
	DisplayBoard(board,ROW,COL);
	char ret = 0;//������Ϸ״̬
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ�ñ���
		char ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ����Ϸ
			if (ret != 'C')
		{
			break;
		}
		if (ret = '*')
		{
			printf("���Ӯ��\n");

		}
		else if (ret == '#')
		{
			printf("����Ӯ��\n");
		}
		else
		{
			printf("ƽ��\n");
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}
