#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
	int base, exponent,total;
	printf("½Ð¿é¤Jbase»Pexponent:");
	scanf_s("%d %d", &base, &exponent);
	total=power(base, exponent);
	printf("%d", total);
}

int power(int a,int b) {
	int total=pow(a, b);
	return total;
}