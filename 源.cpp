#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void menue()
{
	printf("***************************\n");
	printf("****  1.play  0.exit   ****\n");
	printf("***************************\n");
}

void game()
{
	int ret, guess;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("������:");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menue();
		printf("��ѡ��:");
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
				printf("ѡ�����\n");
				break;
		}
	} while (input);
	return 0;
}



	//��������Ϸ






	/*�˷��ھ���*/
	/*int i = 0;
	int result = 0;
	for (i = 1; i <= 9; i++)
	{
		int a = 1;
		for (a=1; a <=i; a++)
		{
			result = i * a;
			printf("%d*%d=%-2d ", i, a, result);
		}
		printf("\n");
	}*/


	//��10�������е����ֵ
	/*int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
	int max = arr[0];
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < sz; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	printf("%d\n", max);*/


	//�����ͣ���1/1-1/2+1/3-1/4.....+1/99-1/100
	/*int i = 0;
	double a = 0.0;
	double b = 0.0;
	double sum = 0.0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			a += -1.0 / i;
		}
		else if (i % 2 != 0)
		{
			b += 1.0 / i;
		}
		sum = a + b;
	}
	printf("%lf", sum);*/
	//�Ż�
	//int i = 0;
	//double sum = 0.0;
	//int flag = 1;
	//for (i = 1; i <= 100; i++)
	//{
	//	sum += flag * 1.0 / i;
	//	flag = -flag;
	//}
	//printf("%lf", sum);


	////1-100��9�ĸ���
	//int i = 0;
	//int count = 0;
	//for (i = 1; i <= 100; i++)
	//{
	//	if (i % 10 == 9)
	//		count++;
	//	if (i / 10 == 9)
	//		count++;
	//}
	//printf("%d", count);


	//��������
	/*int a = 0;
	int b = 0;
	for (a = 1, b = 1; a <= 100; a++)
	{
		if (b >= 20) break;
		if (b % 3 == 1)
		{
			b = b + 3;
			continue;
		}
	}
	printf("%d", a);*/