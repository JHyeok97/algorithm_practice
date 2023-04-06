#include <stdio.h>

void sort();

int arr[10];

int main()
{
    int sum = 0;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    sum -= 100;

    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (sum == (arr[i] + arr[j]))
            {
                arr[i] = 0;
                arr[j] = 0;
                break;
            }
        }
        if (arr[i] == 0)
            break;
    }
    sort();

    for (int i = 0; i < 9; i++)
    {
        if (arr[i] != 0)
            printf("%d\n", arr[i]);
    }
}

void sort()
{
    int temp;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}