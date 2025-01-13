#include <stdio.h>

void hanoi(int a, int b, int N)
{
    if (N == 1)
    {
        printf("%d %d\n", a, b);
        return;
    }

    hanoi(a, 6 - (a + b), N - 1);
    printf("%d %d\n", a, b);
    hanoi(6 - (a + b), b, N - 1);
}

int main(void)
{
    int N;

    scanf("%d", &N);
    printf("%d\n", (1 << N) - 1);
    hanoi(1, 3, N);
}