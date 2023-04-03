// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, d = 0;
    cin >> n;
    int a[n];
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
        if (a[i] == 1)
        {
            d++;
        }
    }
    if (s.size() == 1)
    {
        cout << 0 << '\n';
        return;
    }
    else if (s.size() > 1 and d > 0)
    {
        cout << -1 << "\n";
        return;
    }
    vector<pair<int, int>> ans;
    while (1)
    {
        int i = min_element(a, a + n) - a;
        int j = max_element(a, a + n) - a;
        if (a[i] == a[j])
        {
            break;
        }
        a[j] = ceil((float)(a[j] * 1.0) / (a[i] * 1.0));
        ans.push_back({j + 1, i + 1});
    }
    cout << ans.size() << "\n";
    for (auto it : ans)
    {
        cout << it.first << " " << it.second << '\n';
    }
    // cout << '\n'<< '\n';
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    // cout << '\n';
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
