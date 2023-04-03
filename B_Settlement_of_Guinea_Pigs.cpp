// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, e = 0, d = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            e++;
        }
        if (a[i] == 2)
        {
            d++;
        }
    }
    if (e == 0)
    {
        cout << 0 << "\n";
        return;
    }
    if (d == 0)
    {
        cout << n << '\n';
        return;
    }
    int unk = 0, kno = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 2)
        {
            kno += unk;
            unk = 0;
            ans = max(ans, (kno + 2) / 2);
        }
        else
        {
            unk++;
            if (kno)
                ans = max(ans, ((kno + 2) / 2) + unk);
            else
                ans = max(ans, unk);
            // cout << ans << " " << (kno + 2) / 2 << " " << unk << '\n';
        }
    }

    cout << ans << '\n';
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

// mfmm