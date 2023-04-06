#include <stdio.h>

int main()
{
    int E = 0, S = 0, M = 0;
    int num1, num2, num3;
    int count = 0;
    // E<=15 S<=28 M<=19
    scanf("%d %d %d", &num1, &num2, &num3);
    while (1)
    {
        E++;
        S++;
        M++;
        count++;

        if (E > 15)
            E = 1;
        if (S > 28)
            S = 1;
        if (M > 19)
            M = 1;

        if (E == num1 && S == num2 && M == num3)
        {
            break;
        }
    }

    printf("%d", count);
}