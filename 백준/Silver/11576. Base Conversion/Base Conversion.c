#include <stdio.h>

int num[100];
int value[100];
int A, B;
int m;

int A_To_Decimal(void)
{
    int multi = 1;
    int sum = 0;

    for (int i = m - 1; i >= 0; i--)
    {
        sum += num[i] * multi;
        multi *= A;
    }

    return sum;
}

int Change_To_B(void)
{
    int dec;
    int cnt = 0;

    dec = A_To_Decimal();

    while (dec)
    {
        value[cnt] = dec % B;

        dec /= B;
        cnt++;
    }

    return cnt;
}

int main(void)
{
    int len;

    scanf("%d %d", &A, &B);
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &num[i]);
    }

    len = Change_To_B();

    while (len--)
    {
        printf("%d ", value[len]);
    }
    printf("\n");
}