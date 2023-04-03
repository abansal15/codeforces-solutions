// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, x;
    cin >> n;
    int a[n];
    int f[100001] = {0};
    for (int i = 0; i < n; i++)
    {
        // cin >> a[i];
        cin >> x;
        f[x]++;
    }
    int ans[n] = {0};
    ans[0] = f[0];
    ans[1] = f[1];
    for (int i = 2; i < 100001; i++)
    {
        ans[i] = max(ans[i - 1], ans[i - 2] + f[i] * i);
    }
    //  cout << f[a[0]]<<" ";
    cout << ans[100000];
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //  cin>>t;
    while (t--)
    {
        solve();
    }
}
