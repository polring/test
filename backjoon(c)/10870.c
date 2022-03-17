#include <stdio.h>
 
int fibo(int n) {
    if (n >= 2)
        return fibo(n - 1) + fibo(n - 2);
    else if (n == 1) return 1;            //정의 + 호출 (선언을 사용하지 않으면 정의를 먼저 작성하여야 함)
    else return 0;                        // 선언+호출+정의 로 할수도 있음
}
 
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", fibo(n));
    return 0;
}
