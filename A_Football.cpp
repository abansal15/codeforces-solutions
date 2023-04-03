// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    map<string, int> m;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    string ans = "";
    int n2 = 0;
    for (auto it : m)
    {
        if (it.second > n2)
        {
            n2 = it.second;
            ans = it.first;
        }
    }
    cout << ans;
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