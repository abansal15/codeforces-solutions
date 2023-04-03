// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    cout << min(n - a, b + 1) << "\n";
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    // cin>>t;
    t = 1;
    while (t--)
    {
        solve();
    }
}
