#include <stdio.h>

#define HUNDRED_PLACE(N) N / 100 // 100의 자리 계산

int func(int x)
{
    int arr[4];

    arr[0] = x / 100;
    arr[1] = (x - (arr[0] * 100)) / 10;
    arr[2] = (x - (arr[0] * 100)) % 10;

    if (arr[0] - arr[1] == arr[1] - arr[2])
    {
        return 1;
    }

    return 0;
}

int main(void)
{
    int N;
    int num = 0;

    scanf("%d", &N);

    if (N < 100)
    {
        num += N;
        printf("%d\n", num);
        return 0;
    }
    else if (N < 1000)
    {
        num += 99 + ((HUNDRED_PLACE(N) - 1) * 5);
        for (int i = HUNDRED_PLACE(N) * 100; i <= N; i++)
        {
            num += func(i);
        }

        printf("%d\n", num);
    }
    else if (N == 1000)
    {
        num += 99 + (9 * 5);
        printf("%d\n", num);
    }
}