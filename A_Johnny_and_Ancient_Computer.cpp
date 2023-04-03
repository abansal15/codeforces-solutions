// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int a, b;
    cin >> a >> b;
    if (b > a and b % 2 != 0)
    {
        cout << -1 << '\n';
        return;
    }
    else if (b == a)
    {
        cout << 0 << '\n';
        return;
    }
    else if (a > b and a % 2 != 0)
    {
        cout << -1 << '\n';
        return;
    }
    else
    {
        if (b > a)
        {
            int ct = 0;
            while (a != b)
            {
                // cout << b << " ";
                a = a << 1;
                ct++;
                int f =0;
                if (a > b and b != a)
                {
                    f++;
                }
                if (f)
                {
                    cout << -1 << '\n';
                    return;
                }
                // cout << b << " ";
            }
            int ans = 0;
            if (ct >= 3)
            {
                ans += ct / 3;
                ct -= (ct / 3) * 3;
            }
            if (ct > 1 and ct <= 2)
            {
                ans += ct / 2;
                ct -= (ct / 2) * 2;
            }
            if (ct == 1)
            {
                ans++;
            }
            cout << ans << '\n';
            return;
        }
        else if (a > b)
        {
            int ct = 0;
            int f = 0;
            while (b != a)
            {
                // cout << b << " ";
                // b = b << 1;
                // ct++;
                if (b == a)
                {
                   // cout << 2 << " ";
                    break;
                }
                else
                {
                    b = b << 1;
                   // cout << b << " ";
                    ct++;
                }
                if (b > a and b != a)
                {
                    f++;
                }
                if (f)
                {
                    cout << -1 << '\n';
                    return;
                }
                // cout <<1;
            }
            int ans = 0;

            if (ct >= 3)
            {
                ans += ct / 3;
                ct -= (ct / 3) * 3;
            }
            if (ct > 1 and ct <= 2)
            {
                ans += ct / 2;
                ct -= (ct / 2) * 2;
            }
            if (ct == 1)
            {
                ans++;
            }
            cout << ans << '\n';
            return;
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
