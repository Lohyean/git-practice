#include <stdio.h>
void minmax(int* N1, int* N2)
{
	int* max, * min;
	if (N1 < N2)
	{
		max = N2;
		min = N1;
		printf("max : %d, min  : %d", *max, *min);
	}
	else
	{
		max = N1;
		min = N2;
		printf("max : %d, min  : %d", *max, *min);
	}
}

int main()
{
	int n1, n2;
	scanf_s("%d %d", &n1, &n2);

	minmax(&n1, &n2);
}
	
