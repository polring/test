#include <stdio.h>

int main()
{
    int score[5][4];
    int i,j;
    int total;       //2차원 배열과 최대 최소 알고리즘 
    int winner;
    int max=0;
    for(i=0;i<5;i++)
    {
        total=0;
        for(j=0;j<4;j++)
        {
            scanf("%d",&score[i][j]);
            total+=score[i][j];
            if(max<total)
            {
                max=total;
                winner=i+1;
            }
            
        }
    }
    printf("%d %d",winner,max);
    return 0;
}