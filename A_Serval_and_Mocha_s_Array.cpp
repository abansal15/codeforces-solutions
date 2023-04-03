// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x = a[0];
    for (int i = 1; i < n; i++)
    {
        x = __gcd(x, a[i]);
    }
    int y = 0;
    if (x <= n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            /* code */
            for (int j = i + 1; j < n; j++)
            {
                if (__gcd(a[i], a[j]) <= 2)
                {
                    y++;
                    break;
                }
            }
        }
    }
    if (y)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
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
