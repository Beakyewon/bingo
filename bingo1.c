#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void bingo_start()
void initiate_bingo() // ���� ���̺��� �ʱ⿡ ������� 

 
int main()
{

	int menu;
	while (1)
	{
		printf("1. ���ӽ���.\n");
		printf("2. ��������.\n");
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

//������� �Լ�. ������ ������ ���� �� �Է�, ����üũ, ������ ��� �ݺ�.
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



