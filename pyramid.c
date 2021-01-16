#include <stdio.h>

int main_pyramid(void)
{
	//printf("Hello World\n");

	/*++ 쁠쁠 연산자 
	int a = 10;
	printf("a는 %d\n", a);
	a++; 
	printf("a는 %d\n", a); 

	return 0;*/

	/*for (int i = 2; i < 10; i++)
	{
		printf("%d단 계산\n", i);
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

	//피라미드를 쌓아라 프로젝트 
	
	int floor;
	printf("몇 층으로 쌓겠느냐?");
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