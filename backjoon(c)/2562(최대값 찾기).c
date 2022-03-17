#include <stdio.h>

int main() {
	int input;
	int max = 0;
	int pos = 0;

	for (int i = 1; i < 10; ++i) {
		scanf("%d", &input);
		if (input > max) {
			max = input;  //즉각적으로 각 수를 비교(변수 값을 초기화 시켜가며 비교) 값 사이의 관계를 사용하지 않기 때문에 굳이 배열 필요x
			pos = i;
		}
	}
	printf("%d\n%d\n", max, pos);

	return 0;
}