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
		printf("지울 숫자를 입력하세요: ");
		scanf("%d", &num);
		if(num<1||num>N*N){
			printf("다시 입력하세요.\n");
			error=1; 
		} 
		
	}while (error==1);
	
	printf("\n USER가 %d를 선택했습니다.\n", num);
	return num;
}

