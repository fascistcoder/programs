# include <stdio.h>

int main() {
	int t;
	int r;
    int n;
	int i;
	scanf("%d", &t);
	for (i=0; i<t; i++) 
	{
		
		scanf("%d", &n);
		
		r = 7 - n;
		printf("Opposite sides of cubes: %d\n", r);
	}
	return 0;
}