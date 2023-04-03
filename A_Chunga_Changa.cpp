// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int g1, g2, c;
    cin >> g1 >> g2 >> c;
    int ans = 0;
    int debt = 0;
    ans += g1 / c + g2 / c;
    // g1 -= g1 / c;
    // g2 -= g2 / c;
    if (g1 % c >= g2 % c and g1 % c != 0 and g2 % c != 0)
    {
        // ans++;
        //  cout << g1 << " " << c << " " << g1 / c << '\n';
        // cout << g1 % c << '\n';

        // cout << g1 << " " << c << " " << g1 / c << '\n';
        // cout << g2 % c << '\n';

        //  debt += c - g2 % c;
        if (g2 % c >= c - g1 % c)
        {
            ans++;
            debt += c - g1 % c;
        }
    }
    else if (g1 % c < g2 % c and g1 % c != 0 and g2 % c != 0)
    {
        // ans++;
        // debt += c - g2 % c;
        if (g1 % c >= c - g2 % c)
        {
            ans++;
            debt += c - g2 % c;
        }
    }
    cout << ans << " " << debt;
    return;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //  cin >> t;
    while (t--)
    {
        solve();
    }
}
