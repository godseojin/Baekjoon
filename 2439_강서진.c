#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d", &N);
	int A[100] = { 0 };
	for (int i = 0; i <= N; i++)
	{
		A[i] = i;
	}
	int i = 1;
	for (int q = 0; q < N; q++)
	{
		for (A[i]; A[i] < N; A[i]++)
		{
			printf(" ");
		}
		i++;
		for (int j = 1; j < i; j++)
		{
			printf("*");
		}
		printf("\n");

	}
	return 0;
}