#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define N*N 25 
#define M 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void bingo_start();

void initiate_bingo(int bingo[]); // ���� ���̺��� �ʱ⿡ ������� 

void print_bingo(int arr[N][N]);    // ���� ���̺� �����Ȳ ���
int get_number_byMe();     //���� �����ȣ �Է� ���� 
int get_number_byCom();    //��ǻ�Ͱ� ���Ƿ� ���� ��ȣ ���� 
void process_bingo(int arr[5][5], int num);       // ���õ� ���ڸ� �Է¹޾Ƽ� ���� ���̺� ĭ�� ä�� 
int count_bingo();       // ���� ���̺��� ä�� ����/����/�밢�� �� ���� ����ؼ� ��ȯ 

 
int main()
{

	
}
	int user_bingo[N][N];
	int com_bingo[N][N];
//������� �Լ�. ������ ������ ���� �� �Է�, ����üũ, ������ ��� �ݺ�.
void bingo_start()
{

	int number;
	int userwin, comwin;
	
	initiate_bingo();
	
	do{
	
		printf("-----User-----\n");
			print_bingo(user_bingo);
			number = get_number_byMe();
			process_bingo(user_bingo, number);
			
			
		prinrf("-----Computer-----\n");
			print_bingo(com_bingo);
			number = get_number_byCom();
			process_bingo(com_bingo, number);
			
		}while((userwin==0)&&(comwin==0));
}
void initiate_bingo(){
	
	srand((unsigned int)time(NULL));
	int i;
	for(i=0;i<N*N;i++){
		bingo[i] = i+1;
	a=rand()%(N*N)+1;
	b=rand()%(N*N)+1;
	c=bingo[a];
	bingo[a]=bingo[b];

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


