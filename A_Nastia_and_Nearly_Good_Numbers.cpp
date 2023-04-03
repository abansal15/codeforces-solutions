// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int a, b;
    cin >> a >> b;
    if (b == 1)
    {
        cout << "NO" << '\n';
        return;
    }
    else
    {
        cout << "YES" << '\n';
        cout << (a * b) - a << " " << (a * b) + a << " "<<2 * (a * b) << '\n';
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
