#include <stdio.h>

int main_pyramid(void)
{
	//printf("Hello World\n");

	/*++ �ܻ� ������ 
	int a = 10;
	printf("a�� %d\n", a);
	a++; 
	printf("a�� %d\n", a); 

	return 0;*/

	/*for (int i = 2; i < 10; i++)
	{
		printf("%d�� ���\n", i);
		for (int j = 1; j < 10; j++)
		{
			printf("  %d x %d = %d\n", i, j, i * j);
		}
	}
	return 0;*/

	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5 - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	//�Ƕ�̵带 �׾ƶ� ������Ʈ 
	
	int floor;
	printf("�� ������ �װڴ���?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++)
	{
		for (int j = i; j < floor - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}

} 