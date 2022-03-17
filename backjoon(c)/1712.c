#include <stdio.h>

int main()
{
    int a,b,c,i;
    int result;
    scanf("%d %d %d",&a,&b,&c);
    
    if(b>=c)
    {
        printf("-1");
    }
    else 
    {
        printf("%d\n",a/(c-b)+1);
        
    }
    return 0;

}