#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 3

void initiate_bingo1(int bingo[N][N])
{
   srand((unsigned int)time(NULL));
   
   int i, j; 
   int number=1; // 빙고함수에 숫자를 채워넣기 위해 필요한 변수.  
   int x, y;
   int temp;
      
   for(i=0; i<N; i++)
   {
    	for(j=0; j<N; j++)
    	{
    		bingo[i][j]= number++; // 1부터 N*N까지 순서대로 채워 넣는형태
			                       //(1,2,3
								   //4,5,6 이렇게. 
         		x = rand() % N;
        		y = rand() % N;    // 랜덤하게 두개의 수를 뽑아서 자리를 바꾸는 과정.  
        	 	temp = bingo[i][j];
         		bingo[i][j] = bingo[y][x];
         		bingo[y][x] = temp;
      	}
   }
}
