#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 3

int get_number_byMe(){
	
	int num;
	int error;
	
	do{
		error=0;
		printf("���� ���ڸ� �Է��ϼ���: ");
		scanf("%d", &num);
		if(num<1||num>N*N){
			printf("�ٽ� �Է��ϼ���.\n");
			error=1; 
		} 
		
	}while (error==1);
	
	printf("\n USER�� %d�� �����߽��ϴ�.\n", num);
	return num;
}

