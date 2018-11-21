#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 3

int get_number_byCom(){
 
	int num;
	int error;
	
	do{
		error=0;
		num = rand()%(N*N)+1;
	} while (error==1);
	printf("\n COMPUTER가 %d를 선택했습니다.\n", num);
	return num;
}

