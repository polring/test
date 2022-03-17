#include <stdio.h>

int main()
{
    int x[4],y[4];
    for(int i=0;i<3;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
        
    }
    if(x[0]==x[1])
    {
        x[3]=x[2];
    }
    if(x[0]==x[2])
    {
        x[3]=x[1];
    }
    if(x[1]==x[2])
    {
        x[3]=x[0];
    }
    if(y[0]==y[1])      //배열은 반복문을 사용하기 위해서 사용하는 거
    {                   
        y[3]=y[2];
    }
    if(y[0]==y[2])
    {
        y[3]=y[1];
    }
    if(y[1]==y[2])
    {
        y[3]=y[0];
    }
 printf("%d %d",x[3],y[3]);
 return 0;
}