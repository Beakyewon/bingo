#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 3

void print_bingo(int bingo[N][N]){ // ���� ���̺� �����Ȳ ����ϴ� �Լ�.

	int x, y;
	for (y=0; y<N; y++){
		for(x=0; x<N; x++){
			
			printf("%d\t", bingo [y][x]);
				
		}printf("\n");
			
	}printf("\n");
}

