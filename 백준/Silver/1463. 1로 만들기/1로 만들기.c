#include <stdio.h>

#define min(a, b) a > b ? b : a

int main(void)
{
    int N;
    int d[1000000] = {0};

    scanf("%d", &N);

    d[1] = 0;
    for (int i = 2; i <= N; i++)
    {
        d[i] = d[i - 1] + 1;

        if (i % 3 == 0)
        {
            d[i] = min(d[i], d[i / 3] + 1);
        }
        if (i % 2 == 0)
        {
            d[i] = min(d[i], d[i / 2] + 1);
        }
    }

    printf("%d\n", d[N]);

    return 0;
}