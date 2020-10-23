#include <stdio.h>
#include <stdlib.h>

int Han_Xin_4() {
	printf("(4) \n");
	char sign = 'X';
	char sign2 = '-';
	int i, j;

	int temp = 1;
	int temp2 = 8;

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if ((i > 0) && (i < 5) && (j == temp)) {
				printf("%c", sign);
			}
			else if ((i > 0) && (i < 5) && (j == temp2)) {
				temp++;
				temp2--;
				printf("%c", sign);
			}
			else if (i == 0) {
				printf("%c", sign);
			}
			else {
				printf("%c", sign2);
			}
		}
		printf("\n");
	}

	return 0;
}