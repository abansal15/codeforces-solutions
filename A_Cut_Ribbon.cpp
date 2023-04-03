// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    // onlineJudge();
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int ans = 0;
    for (int i = 0; i < 4001; i++)
    {
        for (int j = 0; j < 4001; j++)
        {
            double k = (double)(n - (a * i + b * j)) / c;
            int s = k;
            if (k < 0)
                break;
            if (k == s)
            {
                ans = max(ans, i + j + s);
            }
        }
    }
    cout << ans << '\n';

    return;
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
// 9  6 4 2
// 7
// 5
// 3
// 1