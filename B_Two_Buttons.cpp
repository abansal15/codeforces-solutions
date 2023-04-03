// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    deque<char> dq;
    int n, m;
    cin >> n >> m;
    if (n == m)
    {
        cout << 0;
        return;
    }
    else if (n > m)
    {
        cout << n - m;
        return;
    }
    else
    {
        int ans = 0;
        while (m > n)
        {
            if (m % 2 == 0)
                m /= 2;
            else
                m++;
            ans++;
        }
        ans += n - m;
        cout << ans;
        return;
    }
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
