#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 3


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
	
	for(i=0;i<N;i++){  //������ ���� Ȯ��. 
		
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
