#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    scanf("%d %d",&a,&b);
    scanf("%d",&c);
    for(int i=0;i<=16;i++)
    {
     if((60*i<=b+c)&&b+c<(60*(i+1)))
     {
     d=a+i;
     e=(b+c)%60;
     }
     
    }
    if(d>=24)
    {
        d=d-24;
    }

    printf("%d %d",d,e);
    return 0;
}

