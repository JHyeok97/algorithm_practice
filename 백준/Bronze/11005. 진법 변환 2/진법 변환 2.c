#include <stdio.h>

int main(void)
{
    int N, B;
    int temp = 0;
    int i = 0;
    char value[100] = {0};

    scanf("%d %d", &N, &B);

    temp = N;

    while (temp)
    {
        if (temp % B >= 10)
        {
            value[i] = (temp % B) + 55;
        }
        else
        {
            value[i] = (temp % B) + '0';
        }

        temp = temp / B;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", value[j]);
    }

    return 0;
}