#include <stdio.h>

#define Max 100000
#define Mod 1000000009

int main(void)
{
    int T, n;
    long long d[Max + 1][4] = {0};

    scanf("%d", &T);

    d[1][1] = 1;
    d[2][2] = 1;
    for (int i = 1; i <= 3; i++)
    {
        d[3][i] = 1;
    }

    for (int i = 4; i <= Max; i++)
    {
        d[i][1] = (d[i - 1][2] + d[i - 1][3]) % Mod;
        d[i][2] = (d[i - 2][1] + d[i - 2][3]) % Mod;
        d[i][3] = (d[i - 3][1] + d[i - 3][2]) % Mod;
    }

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &n);
        printf("%lld\n", (d[n][1] + d[n][2] + d[n][3]) % Mod);
    }

    return 0;
}