
#include <stdio.h>
#include <time.h>

int main(void)
{
	/*//������ ź�ٰ� ����. �л� / �Ϲ��� ���� (�Ϲ��� : 20��)

	int age = 15;
	if (age >= 20)
		printf("�Ϲ��� �Դϴ�.");
	else
		printf("�л��Դϴ�.");*/

	//���� 0 ���� 1 �� 2
	/*srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
	{
		printf("����\n");
	}
	else if (i == 1)
	{
		printf("����\n");
	}
	else if (i == 2)
	{
		printf("��\n");
	}
	else
	{
		printf("�����\n");
	}*/

	/*int age = 25;
	switch (age)
	{
		case 1:printf("�����Դϴ�.");
		case 2:printf("�����Դϴ�.");
		case 3:printf("�����Դϴ�.");
		case 4:printf("�����Դϴ�.");
		case 5:printf("��ġ�����Դϴ�.");
		case 6:printf("��ġ�����Դϴ�.");
		case 7:printf("��ġ�����Դϴ�.");
		default:printf("�ʵ��л� �̻��ΰ�����\n");
	}*/

	// Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1~100 ������ ���� 
	printf("���� : %d\n", num);

	int answer = 0; // ����
 	int chance = 5; // ��ȸ

	while (1)
	{
		printf("���� ��ȸ %d ��\n", chance--);
		printf("���ڸ� ���������� (1-100) : ");
		scanf_s("%d", answer, sizeof(4));

		if (answer > num)
		{
			printf("DOWN �� \n\n");
		}
		else if (answer < num)
		{
			printf("UP ��\n\n");
		}
		else if (answer == num)
		{
			printf("�����Դϴ� ! \n\n");
			break;
		}
		else
		{
			printf("�� �� ���� ������ �߻��߾��!\n");
		}

		if (chance == 0)
		{
			printf("��� ��ȸ�� �� ����ϼ̳׿�. �ƽ��� �����߽��ϴ٤Ф� \n");
		}
	}
	return 0;
}