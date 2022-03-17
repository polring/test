#include <stdio.h>

int main()
{
    int n;                 // 입력할 소수 개수
    int i,j;          //반복문 변수
    int result;        //소수의 개수
    int pos;

    scanf("%d",&n);       //소수 찾기: 1.수의 절반까지 확인해보기 ,2.루트 수까지 확인해보기
    int score[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&score[i]);
        for(j=2;j<score[i];j++)
        {
          pos=(score[i]%j);
        }
    }
    printf("%d",result+1);
    return 0;


}