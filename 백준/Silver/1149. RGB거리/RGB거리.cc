#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int total = 0;

    cin >> n;

    vector<int> R(n);
    vector<int> G(n);
    vector<int> B(n);
    vector<vector<int>> d(n + 5, vector<int>(3));

    for (int i = 0; i < n; i++)
    {
        cin >> R[i] >> G[i] >> B[i];
    }

    d[0][0] = R[0];
    d[0][1] = G[0];
    d[0][2] = B[0];

    for (int i = 1; i < n; i++)
    {
        d[i][0] = min(d[i - 1][1], d[i - 1][2]) + R[i];
        d[i][1] = min(d[i - 1][0], d[i - 1][2]) + G[i];
        d[i][2] = min(d[i - 1][0], d[i - 1][1]) + B[i];
    }

    cout << min({d[n - 1][0], d[n - 1][1], d[n - 1][2]}) << endl;
}