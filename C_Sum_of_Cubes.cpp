// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    bool cod = false;
    for (int i = 1; i < cbrt(n); i++)
    {
        if (cbrt((1.0) * (n - (i * i * i))) == (int)(cbrt((1.0) * (n - (i * i * i)))))
        {
            cod = true;
            break;
        }
    }
    if (cod)
    {
        cout << "YES" << '\n';
        return;
    }
    cout << "NO" << '\n';
    return;
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
