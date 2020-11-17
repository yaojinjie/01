#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void LCM(int num1, int num2)
{
	int i;
	for (i = 1;; i++)
		if (i%num1 == 0 && i%num2 == 0)
			break;
	printf("%d", i);
}
int main()
{
	int num1, num2;
	printf("請輸入兩個數:");
	scanf_s("%d%d", &num1, &num2);
	LCM(num1, num2);
	return 0;
}