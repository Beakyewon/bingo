#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void bingo_start()
void initiate_bingo() // 빙고 테이블을 초기에 만들어줌 

 
int main()
{

	int menu;
	while (1)
	{
		printf("1. 게임시작.\n");
		printf("2. 게임종료.\n");
		scanf("%d", &menu);
		
		switch (menu)
		{
			case1:
				bingo_start();
				break;
			default;
				return 0;
		}
	}

	return 0; 
}

//빙고시작 함수. 게임이 끝날때 까지 수 입력, 빙고체크, 빙고판 출력 반복.
void bingo_start()
{
	int bingo[N][N];
	int user_count;
	
	while(1)
	{
		user_count = count_bingo(bingo);
		print_bingo(bingo, user_count);
	
		if(user_count>= M)
			break;
		inputnum(bingo);
		
	}
	return 0;	
}



