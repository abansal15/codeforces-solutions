// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int ans = 0;
    vector<int> v;
    for (int i = 1; i < n; i++)
    {
        if(a[i]-a[i-1]>x and x!=0)
        v.push_back((a[i] - a[i - 1] - 1) / x);
    }
    sort(v.begin(), v.end());
    int s = 0;
    for (auto it : v)
    {
        s += it;
        if (s > k)
        {
            ans++;
        }
    }
    cout << ans +1 ;
    return;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //  cin >> t;
    while (t--)
    {
        solve();
    }
}
