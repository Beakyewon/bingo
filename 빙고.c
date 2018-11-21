#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int initiate_bingo(int bingo[N][N]); // ���� ���̺��� �ʱ⿡ ������� 
void print_bingo(int bingo[N][N]);    // ���� ���̺� �����Ȳ ���
int get_number_byMe();     //���� �����ȣ �Է� ���� 
int get_number_byCom();    //��ǻ�Ͱ� ���Ƿ� ���� ��ȣ ���� 
int process_bingo(int bingo[N][N], int num);       // ���õ� ���ڸ� �Է¹޾Ƽ� ���� ���̺� ĭ�� ä�� 
int count_bingo(int bingo[N][N]);       // ���� ���̺��� ä�� ����/����/�밢�� �� ���� ����ؼ� ��ȯ 


int main()
{
	int user_bingo[N][N];
	int com_bingo[N][N];
	int count=0;
	int num;
	int user_count, com_count; //�����  
	
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
		printf("USER �¸�\n");
		break;
	}
	if((com_bingo==M))
	{
		printf("COMPUTER �¸�\n");
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

 
void print_bingo(int bingo[N][N]){ // ���� ���̺� �����Ȳ ���.

	int x, y;
	for (y=0; y<N; y++){
		for(x=0; x<N; x++){
			
			printf("%d\t", bingo [y][x]);
				
		}printf("\n");
			
	}printf("\n");
}

int process_bingo(int bingo[N][N], int num){ //�Է¹��� num�� ���� ���� 0���� �����. 
	int x,y;
	
	for(y=0; y<N; y++){
		for(x=0; x<N; x++){
			if(bingo[N][N]==num){
				bingo[y][x]=0;
			}
		}
	}
}

int count_bingo(int bingo[N][N]){ // ����� ���� �Լ�. 

	int i,j,sum,count;
	
	for(j=0; j<N; j++){ //������ ���� Ȯ��.  
		sum=0;
		for(i=0; i<N; i++){
			sum+=bingo[j][i];
		}
		if(sum==0){
			count++;
		}
	}
	for(i=0;i<N;i++){ //������ ���� Ȯ��. 
		sum=0;
		for(j=0;j<N;j++){
			sum+=bingo[j][i];
		}
		if(sum==0){
			count ++;
		}
	}
	sum=0;
	for(i=0;i<N;i++){  //�밢�� ���� Ȯ��.  
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
	printf("USER�� %d�� �����߽��ϴ�.\n", num);
	return num;
}

int get_number_byCom(){
 
	int num;
	int error;
	
	do{
		error=0;
		num = rand()%(N*N)+1;
	} while (error==1);
	printf("COMPUTER�� %d�� �����߽��ϴ�.\n", num);
	return num;
}

