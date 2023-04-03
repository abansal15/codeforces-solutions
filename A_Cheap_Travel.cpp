// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int ans = 0;
    if (n % m == 0)
    {
        ans = min((n / m) * b, n * a);
        cout << ans;
        return;
    }
    else
    {
        ans = min((n / m) * b + (n % m) * a, n * a);
        ans = min(ans, ((n / m) * b + b));
        cout << ans;
        return;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}
