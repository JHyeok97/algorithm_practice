#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int mod = 10007;
    cin >> n;

    vector<int> d(n + 2);

    d[1] = 1;
    d[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        d[i] = (d[i - 2] + d[i - 1]) % mod;
    }

    cout << d[n] << endl;
}