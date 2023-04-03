// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int  long long
void solve()
{
    int a, b, ans = 0;
    cin >> a >> b;
    int ar[b];
    for (int i = 0; i < b; i++)
    {
        cin >> ar[i];
    }
    ans += ar[0] - 1;
    for (int i = 1; i < b; i++)
    {
        if (ar[i] - ar[i - 1] < 0)
        {
            ans += a + ar[i] - ar[i - 1];
        }
        else
        {
            ans += ar[i] - ar[i - 1];
        }
    }
    cout << ans <<'\n';
    return;
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