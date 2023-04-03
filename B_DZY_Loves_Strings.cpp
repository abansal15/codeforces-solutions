// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    string s;
    int n;
    int a[26];
    cin >> s >> n;
    for (int i = 0; i < 26; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        ans += a[s[i] - 97] * (i + 1);
    }
    sort(a, a + 26, greater<int>());
    int count=1;
    for (int i = s.size() + 1; count <= n; i++)
    {
        ans += a[0] * i;
        count++;
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
