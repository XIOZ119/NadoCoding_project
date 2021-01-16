
#include <stdio.h>
#include <time.h>

int main_condition(void)
{
	/*//버스를 탄다고 가정. 학생 / 일반인 구분 (일반인 : 20세)

	int age = 15;
	if (age >= 20)
		printf("일반인 입니다.");
	else
		printf("학생입니다.");*/

	//가위 0 바위 1 보 2
	/*srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
	{
		printf("가위\n");
	}
	else if (i == 1)
	{
		printf("바위\n");
	}
	else if (i == 2)
	{
		printf("보\n");
	}
	else
	{
		printf("몰라요\n");
	}*/

	/*int age = 25;
	switch (age)
	{
		case 1:printf("유아입니다.");
		case 2:printf("유아입니다.");
		case 3:printf("유아입니다.");
		case 4:printf("유아입니다.");
		case 5:printf("유치원생입니다.");
		case 6:printf("유치원생입니다.");
		case 7:printf("유치원생입니다.");
		default:printf("초등학생 이상인가봐요\n");
	}*/

	// Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1~100 사이의 숫자 
	printf("숫자 : %d\n", num);

	int answer = 0; // 정답
 	int chance = 5; // 기회

	while (1)
	{
		printf("남은 기회 %d 번\n", chance--);
		printf("숫자를 맞혀보세요 (1-100) : ");
		scanf_s("%d", answer, sizeof(4));

		if (answer > num)
		{
			printf("DOWN ↓ \n\n");
		}
		else if (answer < num)
		{
			printf("UP ↑\n\n");
		}
		else if (answer == num)
		{
			printf("정답입니다 ! \n\n");
			break;
		}
		else
		{
			printf("알 수 없는 오류가 발생했어요!\n");
		}

		if (chance == 0)
		{
			printf("모든 기회를 다 사용하셨네요. 아쉽게 실패했습니다ㅠㅠ \n");
		}
	}
	return 0;
}