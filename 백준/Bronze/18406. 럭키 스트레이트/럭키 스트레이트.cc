#include <bits/stdc++.h>
using namespace std;

int arr[8];

int main()
{
    string n;
    int lsum = 0, rsum = 0;

    cin >> n;

    for (int i = 0; i < (n.length() / 2); i++)
    {
        lsum += (int)n[i];
    }
    for (int i = (n.length() / 2); i < n.length(); i++)
    {
        rsum += (int)n[i];
    }

    if (lsum == rsum)
    {
        cout << "LUCKY";
    }
    else
        cout << "READY";
}