#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char word;
	printf("�п�J�@�Ӧr:");
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
		printf("�п�J�j�g�Τp�g�^��");
	}
	return 0;
	system("pause");
}