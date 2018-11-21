#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void initiate_bingo(int bingo[N][N]); // ���� ���̺��� �ʱ⿡ ������� 
void print_bingo(int bingo[N][N]);    // ���� ���̺� �����Ȳ ���
int get_number_byMe();     //���� �����ȣ �Է� ���� 
int get_number_byCom();    //��ǻ�Ͱ� ���Ƿ� ���� ��ȣ ���� 
void process_bingo(int bingo[N][N], int num);       // ���õ� ���ڸ� �Է¹޾Ƽ� ���� ���̺� ĭ�� ä�� 
int count_bingo(int bingo[N][N]);       // ���� ���̺��� ä�� ����/����/�밢�� �� ���� ����ؼ� ��ȯ 


int main()
{
	int user_bingo[N][N];
	int com_bingo[N][N];
	int num;                   // USER�� �Է��Ѽ�   
	int user_count, com_count; //������ �����
	int bingo_count=0;  // ���� �� ���ư� Ƚ�� 
	
	initiate_bingo(usrt_bingo); //������ �ʱ�ȭ 
	
	
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
			printf("\t USER �¸�\n");
			printf("\t %d������ �¸��߾��!!", bingo_count);
			break;
		}
		if((com_bingo == M ))
		{
			printf("\t COMPUTER �¸�\n");
			printf("\t %d������ �¸��߾��!!", bingo_count);
			break;
		}
	}
}





