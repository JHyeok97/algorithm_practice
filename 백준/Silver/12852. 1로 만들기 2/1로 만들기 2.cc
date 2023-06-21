#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n + 5);
    vector<int> d(n + 5);

    v[1] = 0;
    d[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        v[i] = v[i - 1] + 1;
        d[i] = i - 1;
        if (i % 2 == 0 && v[i] > v[i / 2] + 1)
        {
            v[i] = v[i / 2] + 1;
            d[i] = i / 2;
        }
        if (i % 3 == 0 && v[i] > v[i / 3] + 1)
        {
            v[i] = v[i / 3] + 1;
            d[i] = i / 3;
        }
    }

    cout << v[n] << "\n";
    while (1)
    {
        cout << n << " ";
        if (n == 1)
            break;
        n = d[n];
    }
}