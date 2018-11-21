#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int initiate_bingo(int bingo[]); // 빙고 테이블을 초기에 만들어줌 
int print_bingo(int bingo[N][N]);    // 빙고 테이블에 현재상황 출력
int get_number_byMe();     //내가 빙고번호 입력 선택 
int get_number_byCom();    //컴퓨터가 임의로 빙고 번호 선택 
int process_bingo(int bingo[5][5], int num);       // 선택된 숫자를 입력받아서 빙고 테이블 칸을 채움 
int count_bingo();       // 빙고 테이블이 채운 가로/세로/대각선 줄 수를 계산해서 반환 

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
 // 빙고 테이블에 현재상황 출력. 
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


