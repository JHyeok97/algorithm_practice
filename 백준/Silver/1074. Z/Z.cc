#include <bits/stdc++.h>
using namespace std;

int Func(int n, int r, int c)
{
   if (n == 0)
      return 0;

   int half = 1 << (n - 1);

   if (r < half && c < half)
   {
      return Func(n - 1, r, c);
   }
   else if (r < half && c >= half)
   {
      return half * half + Func(n - 1, r, c - half);
   }
   else if (r >= half && c < half)
   {
      return 2 * half * half + Func(n - 1, r - half, c);
   }
   else
      return 3 * half * half + Func(n - 1, r - half, c - half);
}

int main()
{
   int n, r, c;
   cin >> n >> r >> c;
   cout << Func(n, r, c);
}
