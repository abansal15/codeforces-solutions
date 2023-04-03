// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int x;
    cin >> x;
    int l0 = 0, l1 = 0, r0 = 0, r1 = 0;
    while (x--)
    {                                                      
        int a, b;
        cin >> a >> b;
        if (a == 0)
            l0++;
        else if (a == 1)
            l1++;
        if (b == 0)
            r0++;
        else if (b == 1)
        {
            r1++;
        }
    }
    cout << min(l0, l1) + min(r0, r1);
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
