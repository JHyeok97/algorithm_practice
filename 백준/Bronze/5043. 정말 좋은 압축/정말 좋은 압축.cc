#include <bits/stdc++.h>
using namespace std;

int arr[1001];

int main()
{
    long long n, b;
    long long bsum = 0;
    cin >> n >> b;

    for (int i = 0; i <= b; i++)
    {
        bsum += (long long)pow(2, i);
    }

    if (n <= bsum)
    {
        cout << "yes";
    }
    else
        cout << "no";
}