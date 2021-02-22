#include<stdio.h>

int main() {
	int t;
	int num1;
	int num2;
	int result;
	int i;
	scanf_s("%d", &t);
	for (i=0; i<t; i++)
	{
		scanf_s("%d" "%d", &num1, &num2);
		result = num1 % num2;
		printf("%d", result);
	}
	return 0;
}
