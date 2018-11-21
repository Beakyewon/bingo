#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void initiate_bingo(int bingo[N][N]); // 빙고 테이블을 초기에 만들어줌 
void print_bingo(int bingo[N][N]);    // 빙고 테이블에 현재상황 출력
int get_number_byMe();     //내가 빙고번호 입력 선택 
int get_number_byCom();    //컴퓨터가 임의로 빙고 번호 선택 
void process_bingo(int bingo[N][N], int num);       // 선택된 숫자를 입력받아서 빙고 테이블 칸을 채움 
int count_bingo(int bingo[N][N]);       // 빙고 테이블이 채운 가로/세로/대각선 줄 수를 계산해서 반환 


int main()
{
	int user_bingo[N][N];
	int com_bingo[N][N];
	int num;                   // USER가 입력한수   
	int user_count, com_count; //각각의 빙고수
	int bingo_count=0;  // 빙고 턴 돌아간 횟수 
	
	initiate_bingo(usrt_bingo); //빙고판 초기화 
	
	
	while(1) {
		printf("\t\t[USER]\n\n");
			print_bingo(user_bingo);
			num = get_number_byMe();
			process_bingo(user_bingo, num);
			process_bingo(com_bingo, num);
			
		printf("\t\t[COMPUTER]\n\n");
			print_bingo(com_bingo);
			num = get_number_byCom();
			process_bingo(com_bingo, num);
			process_bingo(user_bingo, num);
			
			bingo_count++;
			
		user_count=	count_bingo(user_bingo);
		com_count= count_bingo(com_bingo);
		if((user_count== M ))
		{
			printf("\t USER 승리\n");
			printf("\t %d번만에 승리했어요!!", bingo_count);
			break;
		}
		if((com_bingo == M ))
		{
			printf("\t COMPUTER 승리\n");
			printf("\t %d번만에 승리했어요!!", bingo_count);
			break;
		}
	}
}





