#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 3

void initiate_bingo1(int bingo[N][N])
{
   srand((unsigned int)time(NULL));
   
   int i, j;
   int I= 1;
   int x, y;
   int temp;
      
   for(i=0; i<N; i++)
   {
      for(j=0; j<N; j++)
      {
         bingo[i][j] = I ;
         I++;
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
