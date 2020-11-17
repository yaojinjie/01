#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char A, char B, char C) {
	if (n == 1) {
		printf("移動 %c 到 %c\n", A, C);
	}
	else {
		hanoi(n - 1, A, C, B);
		hanoi(1, A, B, C);
		hanoi(n - 1, B, A, C);
	}
}

int main() {
	int n;
	printf("請輸入盤數：");
	scanf_s("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}