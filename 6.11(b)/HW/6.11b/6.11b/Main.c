#include <stdio.h>
#include <stdlib.h>
#define SIZE 9

int main(void)
{
	int i, j;
	int k = 0;
	int temp = 0;
	int temp2 = 0;
	int array[SIZE];

	printf("輸入欲排序之9數值\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("array[%d]=", i);
		scanf_s("%d", &array[i]);
	}

	printf("\n輸入之數值為\t:");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", array[i]);
	}
	printf("\n");

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < (8 - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}

		printf("第%d次排序結果\t:", (i + 1));

		for (j = 0; j < SIZE; j++)
		{
			printf("%4d", array[j]);
		}
		printf("\n");

		if (temp2 != temp)
		{
			temp2 = temp;
		}
		else
		{
			i == 8;
		}

	}


	system("pause");
	return 0;
}