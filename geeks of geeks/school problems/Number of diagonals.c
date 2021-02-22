#include <stdio.h>

int main() {
	//code
	int t, n;
	scanf_s("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf_s("%d", &n);
		int x = n * (n - 3) / 2;
		printf("%d\n", x);
	}
	return 0;
}
