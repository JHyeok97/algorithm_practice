#include <stdio.h>

#define Mod 1000000000

int main(void)
{
    int N;
    long long dp[101][10] = {0};
    long long sum = 0;

    scanf("%d", &N);

    for (int i = 1; i < 10; i++)
    {
        dp[1][i] = 1;
    }

    for (int i = 2; i <= N; i++)
    {

        for (int j = 0; j < 10; j++)
        {
            if (j == 0)
            {
                dp[i][j] = (dp[i - 1][1]) % Mod;
            }
            else if (j == 9)
            {
                dp[i][j] = (dp[i - 1][8]) % Mod;
            }
            else
            {
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % Mod;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        sum = (sum + dp[N][i]) % Mod;
    }

    printf("%lld\n", sum % Mod);
    return 0;
}