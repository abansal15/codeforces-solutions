// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, d;
    cin >> n >> d;
    int a[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<int> v;
    v.push_back(1);
    int x;
    for (int i = 1; i < n; i = x)
    {
        x = i + a[i];
        v.push_back(x);
    }
    if (find(v.begin(), v.end(), d) != v.end())
    {
        cout << "YES" << '\n';
        return;
    }
    cout << "NO" << '\n';
    return;
    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }
    //  cout << v.size () << '\n';
    // 1, 2, 4, 6, 7, 8
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
