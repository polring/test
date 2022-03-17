#include <stdio.h>

int minuteToHour(int n){
    if (n < 60) return 0;
    return 1 + minuteToHour(n - 60);
}

int main(){
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (B + C >= 60){
        int mth = minuteToHour(B+C);
        A += mth;
        B += C - 60*mth;

        if (A >= 24) A -= 24;
    }
    else B += C;

    printf("%d %d", A, B);
    return 0;
}