#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int initiate_bingo(int bingo[]); // ���� ���̺��� �ʱ⿡ ������� 
int print_bingo(int bingo[N][N]);    // ���� ���̺� �����Ȳ ���
int get_number_byMe();     //���� �����ȣ �Է� ���� 
int get_number_byCom();    //��ǻ�Ͱ� ���Ƿ� ���� ��ȣ ���� 
int process_bingo(int bingo[5][5], int num);       // ���õ� ���ڸ� �Է¹޾Ƽ� ���� ���̺� ĭ�� ä�� 
int count_bingo();       // ���� ���̺��� ä�� ����/����/�밢�� �� ���� ����ؼ� ��ȯ 

int bingo[N][N];
int user_bingo[N][N];
int com_bingo[N][N];

int main()
{
	int number;
	int user_count, com_count;
	
	initiate_bingo(user_bingo);
	initiate_bingo(com_bingo);
	
	while{
	
		printf("\t[USER]\n");
			print_bingo(user_bingo);
			number = get_number_byMe();
			process_bingo(user_bingo, number);
			
			
		prinrf("\t[COMPUTER]\n");
			print_bingo(com_bingo);
			number = get_number_byCom();
			process_bingo(com_bingo, number);
			
	if((user_count))
}
int initiate_bingo(){
	
	srand((unsigned int)time(NULL));
	int i;
	for(i=0;i<N*N;i++){
		bingo[i] = i+1;
	a=rand()%(N*N)+1;
	b=rand()%(N*N)+1;
	c=bingo[a];
	bingo[a]=bingo[b];
	bingo[b]=c;}
	
}

void process_bingo(int arr[5][5], int num){
	int x,y;
	
	for(y=0; y<N; y++){
		for(x=0;x<N;x++){
			if(arr[5][5]==num){
				arr[y][x]=0;
			}
		}
	}
}
 // ���� ���̺� �����Ȳ ���. 
void print_bingo(int arr[5][5]){
	int x,y;
	for (y=0; y<N; y++){
		for(x=0; x<N; x++){
		
			if(arr[y][x]!= -1){
				printf("%d",arr[y][x]);
				}
			else {
				printf("error");
			}
		}
		printf("\n\n");
	}
}


int get_number_byMe(){
	int num;
	int x, retry;
	do {
		retry = 0;
		
	}
}


