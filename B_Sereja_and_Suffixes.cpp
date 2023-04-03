// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, m, x, count = 0, g;
    cin >> n >> m;
    vector<int> vp(n);
    map<int, int> mp;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        vp.push_back(x);
    }
    reverse(vp.begin(), vp.end());
    for (int i = 0; i < n; i++)
    {
        int y = s.size();
        s.insert(vp[i]);
        int z = s.size();
        if (z > y)
        {
            count++;
        }
        mp[i] = count;
    }
   // cout << mp[0];
    while (m--)
    {
        cin >> g;
        cout << mp[n-g] << '\n';
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
