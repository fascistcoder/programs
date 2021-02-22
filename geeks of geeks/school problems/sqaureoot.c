#include <stdio.h>
#include<math.h>

int main() {
	//code
	int t, i;
	scanf_s("%d", &t);
	for (i = 0; i < t; i++)
	{
		int n;
		scanf_s("%d", &n);
		if (sqrt(n) == floor(sqrt(n)))
		{
			printf("1\n");
		}

		else
		{
			printf("0\n");
		}
	}
	return 0;
}
