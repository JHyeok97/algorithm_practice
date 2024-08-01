#include <stdio.h>

#define Max(x, y) x > y ? x : y

int main(void)
{
    int N;
    int P[10001] = {0};
    int d[10001] = {0};

    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &P[i]);
    }

    d[1] = P[1];

    for (int i = 2; i <= N; i++)
    {
        d[i] = P[i];

        for (int j = 1; j <= i / 2; j++)
        {
            d[i] = Max(d[i], d[i - j] + d[j]);
        }
    }

    printf("%d\n", d[N]);

    return 0;
}