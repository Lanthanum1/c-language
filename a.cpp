#include<stdio.h>
int main()
{
	int num;
	scanf_s("%d", &num);
	switch (num % 3)
	{
	case 1:printf("������1\n");break;
	case 2:printf("������2\n");break;
	case 3:printf("������3\n");break;
	}
	return 0;
}