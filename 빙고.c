#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int initiate_bingo(int bingo[N]); // ���� ���̺��� �ʱ⿡ ������� 
int print_bingo(int bingo[N][N]);    // ���� ���̺� �����Ȳ ���
int get_number_byMe();     //���� �����ȣ �Է� ���� 
int get_number_byCom();    //��ǻ�Ͱ� ���Ƿ� ���� ��ȣ ���� 
int process_bingo(int bingo[N][N], int num);       // ���õ� ���ڸ� �Է¹޾Ƽ� ���� ���̺� ĭ�� ä�� 
int count_bingo(int bingo[N][N]);       // ���� ���̺��� ä�� ����/����/�밢�� �� ���� ����ؼ� ��ȯ 

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
 // ���� ���̺� �����Ȳ ���. 
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
		printf("���� ���ڸ� �Է��ϼ���: ");
		scanf("%d", &num);
		if(num<1||num>N*N){
			printf("�ٽ� �Է��ϼ���.");
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
