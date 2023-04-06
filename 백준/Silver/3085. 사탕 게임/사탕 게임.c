#include <stdio.h>

char arr[51][51];
int maxcnt, n;

void swap_func(char *a, char *b)
{
    char temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void row_check()
{
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == arr[i][j + 1])
            {
                count++;
            }
            else
            {
                if (maxcnt < count)
                {
                    maxcnt = count;
                }
                count = 1;
            }
        }
    }
}

void col_check()
{
    for (int j = 0; j < n; j++)
    {
        int count = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i][j] == arr[i + 1][j])
            {
                count++;
            }
            else
            {
                if (maxcnt < count)
                {
                    maxcnt = count;
                }
                count = 1;
            }
        }
    }
}

int main()
{
    scanf("%d\n", &n);

    for (int i = 0; i < n; i++)
    { // arr[] 입력
        for (int j = 0; j < n + 1; j++)
        {
            scanf("%c", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            swap_func(&arr[i][j], &arr[i][j + 1]);
            row_check();
            col_check();
            swap_func(&arr[i][j], &arr[i][j + 1]);
        }
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            swap_func(&arr[i][j], &arr[i + 1][j]);
            row_check();
            col_check();
            swap_func(&arr[i][j], &arr[i + 1][j]);
        }
    }

    printf("%d\n", maxcnt);
}