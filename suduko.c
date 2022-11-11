#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int Mat[9][9];
    int i, j, k, n ,l;
    srand(time(0));
    int num = rand()%3;
    printf("enter cell one value");
    scanf("%d", &n);
    printf("sudoku board\n");
     printf("-----------------------------\n");
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (i == 0 && j == 0)
            {
                Mat[i][j] = n;
                //printf("%d \t",Mat[i][j]);
            }
            if (i == 0 && j >= 1)
            {
                if (n >= 9)
                {
                    n = 0;
                }

                Mat[i][j] = n+1;
                n = Mat[i][j];
                //printf("%d \t", Mat[i][j]);
            } 
            if (i >= 1 && i <= 2 && j == 0)
            {
                
                for(l=1;l<=4;l++){
                    if(n==9){
                        n=0;

                    }
                    n++;
                }
                Mat[i][j] = n;
                //printf("%d \t",n);
            }
            if (i == 3 && j == 0)
            {    if(Mat[0][0]==9){
                     Mat[0][0]=0;

                    }
                n=Mat[0][0]+1;
                Mat[i][j] = n;
                //printf("%d \t",Mat[i][j]);
            }
            if (i >=  4 && i <= 5 && j == 0)
            {
                
                for(l=1;l<=4;l++){
                    if(n==9){
                        n=0;

                    }
                    n++;
                }
                Mat[i][j] = n;
                //printf("%d \t",n);
            }
            if (i == 6 && j == 0)
            {    if(Mat[3][0]==9){
                    Mat[3][0]=0;

                    }
                n=Mat[3][0]+1;
                Mat[i][j] = n;
                //printf("%d \t",Mat[i][j]);
            }
             if (i >=  7 && i <= 8 && j == 0)
            {
                
                for(l=1;l<=4;l++){
                    if(n==9){
                        n=0;

                    }
                    n++;
                }
                Mat[i][j] = n;
                //printf("%d \t",n);
            }
            if (i == 1 && j >= 1)
            {
                if (n >= 9)
                {
                    n = 0;
                }
                Mat[i][j] = n+1;
                n=Mat[i][j];
               // printf("%d \t",Mat[i][j]);
            }
            if (i == 2 && j >= 1)
            {
                if (n >= 9)
                {
                    n = 0;
                }
                Mat[i][j] = n+1;
                n=Mat[i][j];
               // printf("%d \t",Mat[i][j]);
            }
             if (i == 3 && j >= 1)
            {
                  //printf(" initial value test%d",n);
                if (n >= 9)
                {
                    n = 0;
                }
                //printf(" \n after loop test%d",n);
                Mat[i][j] = n+1;
                n=Mat[i][j];
                  //printf(" \n after memory storage test%d",n);
               // printf("%d \t",Mat[i][j]);
            }
            if (i == 4 && j >= 1)
            {
                if (n >= 9)
                {
                    n = 0;
                }

                Mat[i][j] = n+1;
                n=Mat[i][j];
                //printf("%d \t",Mat[i][j]);
            }
            if (i == 5 && j >= 1)
            {
                if (n >= 9)
                {
                    n = 0;
                }
                Mat[i][j] = n+1;
                n=Mat[i][j];
                //printf("%d \t",Mat[i][j]);
            }
              if (i == 6 && j >= 1)
            {
                if (n >= 9)
                {
                    n = 0;
                }
                Mat[i][j] = n+1;
                n=Mat[i][j];
                //printf("%d \t",Mat[i][j]);
            }
              if (i == 7 && j >= 1)
            {
                if (n >= 9)
                {
                    n = 0;
                }
                Mat[i][j] = n+1;
                n=Mat[i][j];
                //printf("%d \t",Mat[i][j]);
            }
              if (i == 8 && j >= 1)
            {
                if (n >= 9)
                {
                    n = 0;
                }
                Mat[i][j] = n+1;
                n=Mat[i][j];
                //printf("%d \t",Mat[i][j]);
            }
              if (i == 9 && j >= 1)
            {
                if (n >= 9)
                {
                    n = 0;
                }
                Mat[i][j] = n+1;
                n=Mat[i][j];
                //printf("%d \t",Mat[i][j]);
            }
            
        }
    }
   
    for ( i = 0; i < 9; i++)
    {  printf("|");
        for ( j = 0; j < 9; j++)
        {
            printf("%d  ",Mat[i][j]);
        }
        printf("|");
        printf("\n");
        

    }
     printf("-----------------------------\n");
}
