#include <stdio.h>

long long Remainder(int a, int b, int c)
{
    long long result;

    if (b == 1)
    {
        result = a % c;
        return result;
    }

    if (b % 2 == 0)
    {
        result = Remainder(a, b / 2, c);
        result = result * result % c;
    }
    else
    {
        long long result1 = Remainder(a, b / 2, c);
        long long result2 = Remainder(a, (b / 2) + 1, c);
        result = result1 * result2 % c;
    }
    return result;
}

int main(void)
{
    int A, B, C;
    int final_result = 0;

    scanf("%d %d %d", &A, &B, &C);
    final_result = Remainder(A, B, C);

    printf("%d\n", final_result);
}