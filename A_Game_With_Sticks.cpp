// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, m;
    cin >> n >> m;
    int count = 0;
    for (int i = 0; n > 0 and m > 0; i++)
    {
        if (n + m - 1 == (n * m))
        {
            if (count % 2 == 0)
            {
                cout << "Akshat";
                return;
            }
            else
            {
                cout << "Malvika";
                return;
            }
        }
        else
        {
            n -= 1;
            m -= 1;
            count++;
        }
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
