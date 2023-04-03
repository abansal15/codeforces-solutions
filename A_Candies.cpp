// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    for (int k = 2;; k++)
    {
        if (n % (int)(pow(2, k) - 1) == 0)
        {
            cout << n / ((int)(pow(2, k) - 1)) << '\n';
            return;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
