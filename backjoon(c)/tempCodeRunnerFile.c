#include <stdio.h>

int main()
{
    int n;
    int max=0;
    int score[n];
    int score2[n];
    double avg;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&score[i]);
    }
    for(int i=0;i<n;i++)
    {
       if(max<score[n])
       {
           max=score[n];
       }
    }
    for(int i=0;i<n;i++)
    {
     score2[i]=score[i]/max*100;
    }
    for(int i=0;i<n;i++)
    {
      avg+=(double)score2[i]/(double)n;
    }
    printf("%lf",avg);
    return 0;
}