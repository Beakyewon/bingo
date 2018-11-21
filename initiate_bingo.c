#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 3

void initiate_bingo1(int bingo[N][N])
{
   srand((unsigned int)time(NULL));
   
   int i, j; 
   int number=1; // �����Լ��� ���ڸ� ä���ֱ� ���� �ʿ��� ����.  
   int x, y;
   int temp;
      
   for(i=0; i<N; i++)
   {
    	for(j=0; j<N; j++)
    	{
    		bingo[i][j]= number++; // 1���� N*N���� ������� ä�� �ִ�����
			                       //(1,2,3
								   //4,5,6 �̷���. 
         		x = rand() % N;
        		y = rand() % N;    // �����ϰ� �ΰ��� ���� �̾Ƽ� �ڸ��� �ٲٴ� ����.  
        	 	temp = bingo[i][j];
         		bingo[i][j] = bingo[y][x];
         		bingo[y][x] = temp;
      	}
   }
}
