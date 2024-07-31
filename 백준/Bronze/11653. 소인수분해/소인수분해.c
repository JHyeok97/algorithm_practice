#include <stdio.h>

int main(void)
{
    int N;
    int num = 2;

    scanf("%d", &N);

    while (N > 1)
    {
        if (N % num == 0)
        {
            N /= num;
            printf("%d\n", num);
        }
        else
        {
            num++;
        }
    }

    return 0;
}