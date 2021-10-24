#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int* a;
	int number;
	int i;
	int count = 0;
	printf("请输入一个数:");
	scanf_s("%d", &number);
	a = (int*)malloc(number * sizeof(int));

	
	for ( i = 0; i < number; i++)
	{
		scanf_s("%d", &a[i]);
	}
	if (number < sizeof(a) / sizeof(a[0]))
	{
		printf("Your array is bigger than your number!");
	}
	else {
		for (i = number - 1; i >= 0; i--)
		{
			printf("%d ", a[i]);
		}
	}
	free(a);
	return 0;
}