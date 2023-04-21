#include <stdio.h>

int A[1000001];

int main()
{
    int N, B, C;       // 총 감독이 맡을 수 있는 응시자 수 B
    long long cnt = 0; // 부 감독이 맡을 수 있는 응시자 수 C
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    scanf("%d %d", &B, &C);

    for (int i = 0; i < N; i++)
    {
        int result = A[i] - B;
        cnt++;

        if (result <= 0)
            continue;

        if (result % C == 0)
        {
            cnt += result / C;
        }
        else
        {
            cnt += (result / C + 1);
        }
    }

    printf("%lld", cnt);
}