#include <stdio.h>
#include<math.h>

int main()
{
	int t;
	int i;
	scanf_s("%d", &t);
	for (i = 0; i < t; i++)
	{
		int P;
		int T;
		int R;
		int SI;
		scanf_s("%d" "%d" "%d", &P, &T, &R);

		SI = (P * T * R) / 100;
		printf("%d\n", SI);
	}
	return 0;

}