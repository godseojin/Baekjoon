#include <stdio.h>

int main(void)
{
    int N, M;

    int i, j;
    int A[100]{};
    int B[100]{};

    scanf("%d %d", &N, &M);

    for (int q = 1; q <= N; q++) {
        A[q] = q;
    }

    for (int w = 1; w <= M; w++) {
        scanf("%d %d", &i, &j);
        B[w] = A[i];
        A[i] = A[j];
        A[j] = B[w];
    }

    for (int e = 1; e <= N; e++) {
        printf("%d ", A[e]);
    }

    return 0;
}