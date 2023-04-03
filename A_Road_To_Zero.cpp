// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int a, b, x, y;
    cin >> x >> y >> a >> b;
    if (x == y)
    {
        cout << min(x * b, 2 * x * a) << '\n';
        return;
    }
    else if (y > x)
    {
        int cost1 = (x % y) * b + (y - x) * a;
        int cost2 = (x + y) * a;
        cout << min(cost1, cost2) << '\n';
        return;
    }
    else
    {
        int cost1 = (y % x) * b + (x - y) * a;
        int cost2 = (x + y) * a;
        cout << min(cost1, cost2) << '\n';
        return;
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
