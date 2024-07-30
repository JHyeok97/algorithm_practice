#include <stdio.h>
#include <string.h>

long long Result_Func(char *N, int B)
{
    int len = strlen(N);
    int value[100] = {0};
    int multi = 1;
    long long sum = 0;

    for (int i = 0; i < len; i++)
    {
        if (N[i] >= 'A' && N[i] <= 'Z')
        {
            value[i] = N[i] - ('A' - 10);
        }
        else if (N[i] >= '0' && N[i] <= '9')
        {
            value[i] = N[i] - '0';
        }
    }

    for (int i = len - 1; i >= 0; i--)
    {
        sum += value[i] * multi;
        multi *= B;
    }

    return sum;
}

int main(void)
{
    char N[100];
    int B;

    scanf("%s %d", N, &B);
    printf("%lld\n", Result_Func(N, B));

    return 0;
}