#include <stdio.h>
int main()
{
    int i,j; //반복문 변수
    int total; //합을 저장할 변수
    int a;       //케이스 개수
    int b,c;            // 2차원 배열 or 반복문을 통한 해결
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
      scanf("%d,%d",&b,&c);
      printf("%d\n",b+c);
    }
    return 0;
}