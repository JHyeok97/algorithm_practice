#include <stdio.h>

void Get_Prime_Num(int *PrimeNum)
{
    int num = 1000000;
    int j = 2;

    for (int i = 2; i <= num; i++)
    {
        PrimeNum[i] = i;
    }

    for (int i = 2; i * i <= num; i++)
    {
        for (j = 2 * i; j <= num; j += i)
        {
            if (PrimeNum[j] == 0)
            {
                continue;
            }
            else
            {
                PrimeNum[j] = 0;
            }
        }
    }
}

int Find_Num(int *arr, int N)
{
    int i = 0;

    while (arr[i] < N)
    {
        i++;
    }

    return i;
}

int main(void)
{
    int T, N;
    int cnt = 0;
    int PrimeNum[1000000] = {0};

    scanf("%d", &T);

    Get_Prime_Num(PrimeNum);

    for (int i = 0; i < T; i++)
    {
        cnt = 0;

        scanf("%d", &N);
        int num = Find_Num(PrimeNum, N);

        for (int j = 0; j <= N / 2; j++)
        {
            if (N - PrimeNum[j] == PrimeNum[N - PrimeNum[j]])
            {
                cnt++;
            }
        }

        printf("%d\n", cnt);
    }
    return 0;
}