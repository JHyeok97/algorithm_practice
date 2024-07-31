#include <stdio.h>

int main(void)
{
    int n;
    int d[1000] = {0};

    d[1] = 1;
    d[2] = 2;

    scanf("%d", &n);

    for (int i = 3; i <= n; i++)
    {
        d[i] = (d[i - 2] + d[i - 1]) % 10007;
    }

    printf("%d\n", d[n]);

    return 0;
}