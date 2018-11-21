#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int initiate_bingo(int bingo[N]); // 빙고 테이블을 초기에 만들어줌 
int print_bingo(int bingo[N][N]);    // 빙고 테이블에 현재상황 출력
int get_number_byMe();     //내가 빙고번호 입력 선택 
int get_number_byCom();    //컴퓨터가 임의로 빙고 번호 선택 
int process_bingo(int bingo[N][N], int num);       // 선택된 숫자를 입력받아서 빙고 테이블 칸을 채움 
int count_bingo(int bingo[N][N]);       // 빙고 테이블이 채운 가로/세로/대각선 줄 수를 계산해서 반환 

int bingo[N][N];
int user_bingo[N][N];
int com_bingo[N][N];
int count=0;

int main()
{
	int num;
	int user_count, com_count;
	
	initiate_bingo(user_bingo);
	initiate_bingo(com_bingo);
	
	while(1) {
	
		printf("\t[USER]\n");
			print_bingo(user_bingo);
			num = get_number_byMe();
			process_bingo(user_bingo, num);
			process_bingo(com_bingo, num);
			
		printf("\t[COMPUTER]\n");
			print_bingo(com_bingo);
			num = get_number_byCom();
			process_bingo(com_bingo, num);
			process_bingo(user_bingo, num);
			
	if((user_count==M)||(com_count==M))
		break;
	}
	system("pause");
	system("cls");
	return 0;
}

int initiate_bingo(int bingo[N]){
	
	srand((unsigned int)time(NULL));
	int i,a,b,c;
	for(i=0; i<N*N; i++){
		bingo[i] = i+1;
		
		a=rand()%(N*N)+1;
		b=rand()%(N*N)+1;
		c=bingo[a];
		bingo[a]=bingo[b];
		bingo[b]=c;
	}
	
}

int process_bingo(int bingo[N][N], int num){
	int x,y;
	
	for(y=0; y<N; y++){
		for(x=0; x<N; x++){
			if(bingo[N][N]==num){
				bingo[y][x]=0;
			}
		}
	}
}
 // 빙고 테이블에 현재상황 출력. 
int print_bingo(int bingo[N][N]){
	int x,y;
	for (y=0; y<N; y++){
		for(x=0; x<N; x++){
		
		printf("%4d\n", bingo[N][N]);
		}
	}
	printf("\n\n");
}


int count_bingo(int bingo[N][N]){
	int i,j,sum,count;
	
	for(j=0; j<N; j++){
		sum=0;
		for(i=0; i<N; i++){
			sum+=bingo[j][i];
		}
		if(sum==0){
			count++;
		}
	}
	for(i=0;i<N;i++){
		sum=0;
		for(j=0;j<N;j++){
			sum+=bingo[j][i];
		}
		if(sum==0){
			count ++;
		}
	}
	sum=0;
	for(i=0;i<N;i++){
		sum+=bingo[i][i];
	}
	if(sum==0){
		count ++;
	}
	sum=0;
	for(i=0;i<N;i++){
		sum+=bingo[i][N-i-1];
	}
	if(sum==0){
		count++;
	}
	return count;
}

int get_number_byMe(){
	int num;
	int error;
	
	do{
		error=0;
		printf("지울 숫자를 입력하세요: ");
		scanf("%d", &num);
		if(num<1||num>N*N){
			printf("다시 입력하세요.");
			error=1; 
		} 
	}while (error==1);
}
int get_number_byCom(){
	int num;
	int error;
	
	do{
		error=0;
		num = rand()%(N*N)+1;
	}while (error==1);
}
