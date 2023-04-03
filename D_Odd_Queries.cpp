// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, q, sum = 0, sum2 = 0;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int pf[n] = {0};
    pf[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pf[i] = pf[i - 1] + a[i];
    }
    sum2 = sum;
    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        if ((sum - (pf[r-1] - pf[l-1] + a[l-1]) + (r - l + 1) * k) % 2 != 0)
        {
            cout << "YES"
                 << "\n";
            sum = sum2;
        }
        else
        {
            cout << "NO"
                 << "\n";
            sum = sum2;
        }
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
