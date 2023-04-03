// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    if (n & 1)
    {
        cout << -1;
        return;
    }
    for (int i = n; i >= 1; i--)
    {
        cout << i << " ";
    }
    return;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}