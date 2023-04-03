// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int a, b, ans = 0, rem = 0;
    cin >> a >> b;
    ans = a;
    while (a >= b)
    {
        int p = a / b;
        ans += p;
        int rem = a % b;
        a = p + rem;
    }
    cout << ans << endl;
}
signed main()
{
    int t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}