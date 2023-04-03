// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> prefs;
    vector<int> prefmax;
    prefs.push_back(0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        prefs.push_back(prefs.back() + x);
        if (i == 0)
        {
            prefmax.push_back(x);
        }
        else
        {
            prefmax.push_back(max(prefmax.back(), x));
        }
    }
    for (int i = 0; i < q; i++)
    {
        int k;
        cin >> k;
        int ind = upper_bound(prefmax.begin(), prefmax.end(), k) - prefmax.begin();
        cout << prefs[ind] << " ";
    }

    cout << '\n';
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
