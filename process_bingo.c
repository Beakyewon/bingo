#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 3

void process_bingo(int bingo[N][N], int num){ //�Է¹��� num�� ���� ���� 0���� �����. 
	int x,y;
	
	for(y=0; y<N; y++){
		for(x=0; x<N; x++){
			if(bingo[y][x]==num){ //�Է¹��� ���� ������ ���� ������ �ϳ��ϳ� Ȯ���ϴ� ����. 
				bingo[y][x]=0;
			}
		}
	}
}

