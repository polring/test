    #include <stdio.h>

    int main()
    {
        int c;
        
        scanf("%d",&c);
        int n;
        
        ;
        for(int i=0;i<c;i++)
        {
            double avg=0;
            int a=0;
            scanf("%d",&n);
            int total[n];
            int realavg=0;
            for(int j=0;j<n;j++)
            {
                
                scanf("%d",&total[j]);
                avg+=(double)total[j];
                realavg=avg/(double)n;
                if(realavg<(double)total[j])
                {
                    ++a;
                }
            
            
            
            }
            
            
            
            printf("%.3lf%%\n",((double)a/(double)n)*100);
            
            
        }
        return 0;
    }
    