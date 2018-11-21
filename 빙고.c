#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int initiate_bingo(int bingo[N][N]); // 빙고 테이블을 초기에 만들어줌 
void print_bingo(int bingo[N][N]);    // 빙고 테이블에 현재상황 출력
int get_number_byMe();     //내가 빙고번호 입력 선택 
int get_number_byCom();    //컴퓨터가 임의로 빙고 번호 선택 
int process_bingo(int bingo[N][N], int num);       // 선택된 숫자를 입력받아서 빙고 테이블 칸을 채움 
int count_bingo(int bingo[N][N]);       // 빙고 테이블이 채운 가로/세로/대각선 줄 수를 계산해서 반환 


int main()
{
	int user_bingo[N][N];
	int com_bingo[N][N];
	int count=0;
	int num;
	int user_count, com_count; //빙고수  
	
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
			
		user_count=	count_bingo(user_bingo);
		com_count= count_bingo(com_bingo);
	if((user_count==M))
	{
		printf("USER 승리\n");
		break;
	}
	if((com_bingo==M))
	{
		printf("COMPUTER 승리\n");
		break;
	}

 }
}
int initiate_bingo(int bingo[N][N])
{
	srand((unsigned int)time(NULL));
	int i, j;
	int A = 1;
	int x, y;
	int temp;
		
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			bingo[i][j] = A ;
			A++;
		}
	}
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			x = rand() % N;
			y = rand() % N;
			temp = bingo[i][j];
			bingo[i][j] = bingo[y][x];
			bingo[y][x] = temp;
		}
	}
}

 
void print_bingo(int bingo[N][N]){ // 빙고 테이블에 현재상황 출력.

	int x, y;
	for (y=0; y<N; y++){
		for(x=0; x<N; x++){
			
			printf("%d\t", bingo [y][x]);
				
		}printf("\n");
			
	}printf("\n");
}

int process_bingo(int bingo[N][N], int num){ //입력받은 num와 같은 수를 0으로 만든다. 
	int x,y;
	
	for(y=0; y<N; y++){
		for(x=0; x<N; x++){
			if(bingo[N][N]==num){
				bingo[y][x]=0;
			}
		}
	}
}

int count_bingo(int bingo[N][N]){ // 빙고수 세기 함수. 

	int i,j,sum,count;
	
	for(j=0; j<N; j++){ //가로줄 빙고 확인.  
		sum=0;
		for(i=0; i<N; i++){
			sum+=bingo[j][i];
		}
		if(sum==0){
			count++;
		}
	}
	for(i=0;i<N;i++){ //세로줄 빙고 확인. 
		sum=0;
		for(j=0;j<N;j++){
			sum+=bingo[j][i];
		}
		if(sum==0){
			count ++;
		}
	}
	sum=0;
	for(i=0;i<N;i++){  //대각선 빙고 확인.  
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
	printf("USER가 %d를 선택했습니다.\n", num);
	return num;
}

int get_number_byCom(){
 
	int num;
	int error;
	
	do{
		error=0;
		num = rand()%(N*N)+1;
	} while (error==1);
	printf("COMPUTER가 %d를 선택했습니다.\n", num);
	return num;
}

