#include <stdio.h>

int arr[11];

int main()
{
    int t, n;

    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;

    for (int i = 4; i < 11; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
    }

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        printf("%d\n", arr[n]);
    }
}