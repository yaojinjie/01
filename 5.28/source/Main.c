#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char word;
	printf("請輸入一個字:");
	scanf_s("%c", &word);

	if (word >= 'A' && word <= 'Z') {
		word += 32;
		printf("%c\n",word);

	}

	else if (word>='a' && word<='z'){
		word -= 32;
		printf("%c\n",word);
	}
	else {
		printf("請輸入大寫或小寫英文");
	}
	return 0;
	system("pause");
}