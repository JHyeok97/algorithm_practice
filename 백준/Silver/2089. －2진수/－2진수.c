#include <stdio.h>

int main(void)
{
    int N, temp;
    int value[100] = {0};
    int num = -2;
    int i = 0, j = 0;

    scanf("%d", &N);
    temp = N;

    if (N == 0)
    {
        value[0] = 0;
        i++;
    }

    while (temp)
    {
        if (temp < 0)
        {
            if (temp % num < 0)
            {
                value[i] = (temp % num) + 2;
                temp = (temp / num) + 1;
            }
            else
            {
                value[i] = temp % num;
                temp = temp / num;
            }
        }
        else
        {
            value[i] = temp % num;
            temp = temp / num;
        }
        i++;
    }

    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", value[j]);
    }
    printf("\n");

    return 0;
}