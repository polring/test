#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    if((a%4==0&&a%100!=0)||(a%400==0)) //논리 연산자 사용
    {
      printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}