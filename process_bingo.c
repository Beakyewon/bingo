#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 3

void process_bingo(int bingo[N][N], int num){ //입력받은 num와 같은 수를 0으로 만든다. 
	int x,y;
	
	for(y=0; y<N; y++){
		for(x=0; x<N; x++){
			if(bingo[y][x]==num){ //입력받은 수와 빙고의 수가 같은지 하나하나 확인하는 과정. 
				bingo[y][x]=0;
			}
		}
	}
}

