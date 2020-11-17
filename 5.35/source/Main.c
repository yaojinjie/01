#include <stdio.h>
#include <stdlib.h>
int fabonacci(int);
int num1, num2, lenth;
int main(void) {
	num1 = 0, num2 = 1;
	printf("請輸入要顯示的費式數列長度:");
	scanf_s("%d", &lenth);
	printf("%d %d ", num1, num2);
	for (int i = 1; i <= lenth-2; i++) {
		printf("%d ", fabonacci(i));
	}
}

int fabonacci(int a) {
	int total;
	total = num1 + num2;
	num1 = num2;
	num2 = total;
	return total;
}